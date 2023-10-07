
#include "ColumnParser.h"


// ColumnParser: constructor, destructor and member function

ColumnParser::ColumnParser(orc_proto::Row& _row) : row(_row) {
}

ColumnParser::~ColumnParser () {
    // Pass
}

void ColumnParser::reset(const orc::ColumnVectorBatch& batch) {

}

// class BooleanColumnParser

class BooleanColumnParser: public ColumnParser {
private:
    const int64_t *data;

public:
    BooleanColumnParser(orc_proto::Row&);
    ~BooleanColumnParser() override;
    void parseRow(uint64_t rowID) override;
    void reset(const orc::ColumnVectorBatch& batch) override;
};

BooleanColumnParser::BooleanColumnParser(orc_proto::Row& _row): ColumnParser(_row), data(nullptr) {
    // Pass
}

BooleanColumnParser::~BooleanColumnParser () {
    // PASS
}

void BooleanColumnParser::parseRow(uint64_t rowID) {
    orc_proto::Type *type = new orc_proto::Type();
    type->set_kind(orc_proto::Type_Kind::Type_Kind_BOOLEAN);

    orc_proto::Field field;
    field.set_allocated_type(type);
    field.set_i(data[rowID]);

    orc_proto::Field *f = row.add_field();
    *f = field;
}

void BooleanColumnParser::reset(const orc::ColumnVectorBatch& batch) {
    ColumnParser::reset(batch);
    data = dynamic_cast<const orc::LongVectorBatch&>(batch).data.data();
}

// class LongColumnParser 

class LongColumnParser: public ColumnParser {
private:
    const int64_t* data;
public:
    LongColumnParser(orc_proto::Row&);
    ~LongColumnParser() override;
    void parseRow(uint64_t rowID) override;
    void reset(const orc::ColumnVectorBatch& batch) override;
};

LongColumnParser::LongColumnParser(orc_proto::Row &row): ColumnParser(row), data(nullptr) {
    // Pass
}

LongColumnParser::~LongColumnParser() {
    // pass
}

void LongColumnParser::parseRow(uint64_t rowID) {
    orc_proto::Type *type = new orc_proto::Type();
    type->set_kind(orc_proto::Type_Kind::Type_Kind_LONG);

    orc_proto::Field field;
    field.set_allocated_type(type);
    field.set_i(data[rowID]);

    orc_proto::Field *f = row.add_field();
    *f = field;
}

void LongColumnParser::reset(const orc::ColumnVectorBatch& batch) {
    ColumnParser::reset(batch);
    data = dynamic_cast<const orc::LongVectorBatch&>(batch).data.data();
}

// class StructColumnParser

class StructColumnParser : public ColumnParser {
private:
    std::vector<std::unique_ptr<ColumnParser>> fieldParser;
    std::vector<std::string> fieldNames;

public:
    StructColumnParser(orc_proto::Row &, const orc::Type &);
    void parseRow(uint64_t rowID) override;
    void reset(const orc::ColumnVectorBatch& batch) override;
};

StructColumnParser::StructColumnParser(orc_proto::Row &row, const orc::Type &type
    ): ColumnParser(row) {
    for(int i = 0; i < type.getSubtypeCount(); ++i) {
        fieldNames.push_back(type.getFieldName(i));
        fieldParser.push_back(createColumnParser(row, type.getSubtype(i)));
    } 
}

void StructColumnParser::parseRow(uint64_t rowID) {
    for (int i = 0; i < fieldParser.size(); i++) {
        fieldParser[i]->parseRow(rowID);
    }
}

void StructColumnParser::reset(const orc::ColumnVectorBatch& batch) {
    ColumnParser::reset(batch);
    const orc::StructVectorBatch& structBatch = dynamic_cast<const orc::StructVectorBatch&>(batch);

    for (int i = 0; i < fieldParser.size(); i++) {
        fieldParser[i]->reset(*(structBatch.fields[i]));

    }
}


/////////////////////////////////////////////////////////////////////////////////
// createColumnParser create a ColumnParser with type.
ORC_UNIQUE_PTR<ColumnParser> createColumnParser(orc_proto::Row &row, const orc::Type* type) {
    ColumnParser *result = nullptr;
    
    if (!type) {
        switch(static_cast<int64_t>(type->getKind())) {
        case orc::BOOLEAN:
            result = new BooleanColumnParser(row);
            break;
        case orc::BYTE:
        case orc::SHORT:
        case orc::INT:
        case orc::LONG:
            result = new LongColumnParser(row);
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

        case STRUCT:
            result = new StructColumnPrinter(buffer, *type);
            break;

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

    return std::unique_ptr<ColumnParser>(result);;
}




















