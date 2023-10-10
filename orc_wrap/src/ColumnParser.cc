
#include "ColumnParser.h"

namespace orc {

// ColumnParser: constructor, destructor and member function

ColumnParser::ColumnParser(orc_proto::Row *_row) : row(_row) {
    // row.Clear();
}

ColumnParser::~ColumnParser () {
    // Pass
}

void ColumnParser::reset(const orc::ColumnVectorBatch& batch) {
    printf("ColumnParser::reset\n");
}

char* ColumnParser::getEncodedRow() {
    int serialized_size = row->ByteSizeLong();
    encoded_row2 = (char *)malloc(serialized_size + 1);
    row->SerializeToArray(encoded_row2, serialized_size);
    encoded_row2[serialized_size] = '\0';
    printf("getEncodedRow,fields_size=%d, serialized_size=%d, strlen=%lu\n", row->fields_size(), serialized_size, strlen(encoded_row2));

    // row->SerializeToString(&encoded_row);
    // char *str = const_cast<char*>(encoded_row.c_str()); 
    // std::cout << "data string = " << encoded_row << std::endl;
    // printf("getEncodedRow,fields_size=%d, data len = %lu, strlen=%lu\n", row->fields_size(), encoded_row.length(), strlen(str));

    return encoded_row2;
}

// class BooleanColumnParser

class BooleanColumnParser: public ColumnParser {
private:
    const int64_t *data;

public:
    BooleanColumnParser(orc_proto::Row *);
    ~BooleanColumnParser() override;
    void parseRow(uint64_t rowID) override;
    void reset(const orc::ColumnVectorBatch& batch) override;
};

BooleanColumnParser::BooleanColumnParser(orc_proto::Row *_row): ColumnParser(_row), data(nullptr) {
    // Pass
}

BooleanColumnParser::~BooleanColumnParser () {
    // PASS
}

void BooleanColumnParser::parseRow(uint64_t rowID) {
    orc_proto::Type *type = new orc_proto::Type();
    type->set_kind(orc_proto::Type_Kind::Type_Kind_BOOLEAN);

    orc_proto::Field *field = row->add_fields();
    field->set_allocated_type(type);
    field->set_i(data[rowID]);

    printf("BooleanColumnParser::parseRow, add field, fields_size=%d\n", row->fields_size());        
}

void BooleanColumnParser::reset(const orc::ColumnVectorBatch& batch) {
    printf("BooleanColumnParser::reset\n");
    ColumnParser::reset(batch);
    data = dynamic_cast<const orc::LongVectorBatch&>(batch).data.data();
}

// class LongColumnParser 

class LongColumnParser: public ColumnParser {
private:
    const int64_t* data;
public:
    LongColumnParser(orc_proto::Row *_row);
    ~LongColumnParser() override;
    void parseRow(uint64_t rowID) override;
    void reset(const orc::ColumnVectorBatch& batch) override;
};

LongColumnParser::LongColumnParser(orc_proto::Row *_row): ColumnParser(_row), data(nullptr) {
    // Pass
}

LongColumnParser::~LongColumnParser() {
    // pass
}

void LongColumnParser::parseRow(uint64_t rowID) {
    orc_proto::Type *type = new orc_proto::Type();
    type->set_kind(orc_proto::Type_Kind::Type_Kind_LONG);

    orc_proto::Field *field = row->add_fields();
    field->set_allocated_type(type);
    field->set_i(data[rowID]);

    printf("LongColumnParser::parseRow, add field, fields_size=%d\n", row->fields_size());
}

void LongColumnParser::reset(const orc::ColumnVectorBatch& batch) {
    printf("LongColumnParser::reset\n");

    ColumnParser::reset(batch);
    data = dynamic_cast<const orc::LongVectorBatch&>(batch).data.data();
}

// class StructColumnParser

class StructColumnParser : public ColumnParser {
private:
    std::vector<std::unique_ptr<ColumnParser>> fieldParser;
    std::vector<std::string> fieldNames;

public:
    StructColumnParser(orc_proto::Row *, const orc::Type &);
    void parseRow(uint64_t rowID) override;
    void reset(const orc::ColumnVectorBatch& batch) override;
};

StructColumnParser::StructColumnParser(orc_proto::Row *_row, const orc::Type &type
    ): ColumnParser(_row) {
    for(int i = 0; i < type.getSubtypeCount(); ++i) {
        if ((type.getSubtype(i)->getKind()) != orc::TypeKind::BOOLEAN &&
            (type.getSubtype(i)->getKind()) != orc::TypeKind::SHORT){
            continue;
        }
        printf("subtype = %d, fieldname=%s\n", type.getSubtype(i)->getKind(), type.getFieldName(i).c_str());

        fieldNames.push_back(type.getFieldName(i));
        fieldParser.push_back(_createColumnParser(_row, type.getSubtype(i)));
    }
}

void StructColumnParser::parseRow(uint64_t rowID) {
    printf("StructColumnParser::parseRow\n");

    for (int i = 0; i < fieldParser.size(); i++) {
        fieldParser[i]->parseRow(rowID);
    }
}

void StructColumnParser::reset(const orc::ColumnVectorBatch& batch) {
    printf("StructColumnParser::reset\n");

    ColumnParser::reset(batch);
    const orc::StructVectorBatch& structBatch = dynamic_cast<const orc::StructVectorBatch&>(batch);

    for (int i = 0; i < fieldParser.size(); i++) {
        fieldParser[i]->reset(*(structBatch.fields[i]));
    }
}

/////////////////////////////////////////////////////////////////////////////////
// _createColumnParser create a ColumnParser with type.
std::unique_ptr<orc::ColumnParser> _createColumnParser(orc_proto::Row *_row, const orc::Type* type) {
    ColumnParser *result = nullptr;

    if (type) {
        switch(static_cast<int64_t>(type->getKind())) {
        case orc::BOOLEAN:
            result = new BooleanColumnParser(_row);
            break;
        case orc::BYTE:
        case orc::SHORT:
        case orc::INT:
        case orc::LONG:
            result = new LongColumnParser(_row);
            break;
        /*
        case FLOAT:
        case DOUBLE:
            result = new DoubleColumnPrinter(buffer, *type);
            break;

        case STRING:
        case VARCHAR :
        case CHAR:
            result = new StringColumnPrinter(buffer);
            break;

        case BINARY:
            result = new BinaryColumnPrinter(buffer);
            break;

        case TIMESTAMP:
        case TIMESTAMP_INSTANT:
            result = new TimestampColumnPrinter(buffer);
            break;

        case LIST:
            result = new ListColumnPrinter(buffer, *type);
            break;

        case MAP:
            result = new MapColumnPrinter(buffer, *type);
            break;
        */
        case STRUCT:
            result = new StructColumnParser(_row, *type);
            break;
        /*
        case DECIMAL:
            if (type->getPrecision() == 0 || type->getPrecision() > 18) {
            result = new Decimal128ColumnPrinter(buffer);
            } else {
            result = new Decimal64ColumnPrinter(buffer);
            }
            break;

        case DATE:
            result = new DateColumnPrinter(buffer);
            break;

        case UNION:
            result = new UnionColumnPrinter(buffer, *type);
            break;
        */
        default:
            throw std::logic_error("unknown batch type");
        }
    }

    printf("create columnParser, result = %p, type = %d\n", result, type->getKind());
    return std::unique_ptr<orc::ColumnParser>(result);;
}

}// namespace


















