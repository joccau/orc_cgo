#include "orc_wrap.h"
#include "orc_wrap.pb.h"
#include "ColumnParser.h"
#include "orc/Type.hh"

ColumnParser* createColumnParser(Type* t) {
    orc::Type* type = (orc::Type *)t;
    orc_proto::Row *row = new orc_proto::Row();

    std::unique_ptr<orc::ColumnParser> cp = orc::_createColumnParser(row, type);
    orc::ColumnParser* column_parser_ptr = cp.release();

    printf("type = %p, kind = %d, columnParser=%p\n", t, type->getKind(), column_parser_ptr);

    return (ColumnParser *)column_parser_ptr;
}

void parseRow(ColumnParser *ptr, uint64_t rowID) {
    orc::ColumnParser *cp = (orc::ColumnParser *)ptr;
    cp->parseRow(rowID);
}

void reset(ColumnParser *parserPtr, ColumnVectorBatch *batchPtr) {
    orc::ColumnParser *cp = (orc::ColumnParser *)parserPtr;
    orc::ColumnVectorBatch *cvb = (orc::ColumnVectorBatch *)batchPtr;

    printf("reset, columnParser = %p, columnVectorBatch = %p\n", cp, cvb);
    cp->reset(*cvb);
}

char* getEncodedRow(ColumnParser *ptr) {
    orc::ColumnParser *cp = (orc::ColumnParser *)ptr;
    return cp->getEncodedRow();
}

