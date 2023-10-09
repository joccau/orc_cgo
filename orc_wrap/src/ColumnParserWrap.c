#include "orc_wrap.h"
#include "orc_wrap.pb.h"
#include "ColumnParser.h"
#include "orc/Type.hh"

ColumnParser* createColumnParser(Type* t) {
    orc::Type* type = (orc::Type *)t;

    ORC_UNIQUE_PTR<orc::ColumnParser> cp = orc::_createColumnParser(type);

    orc::ColumnParser* column_parser_ptr = cp.release();
    return (ColumnParser *)column_parser_ptr;
}

const char* getEncodedRow(ColumnParser *ptr) {
    orc::ColumnParser *cp = (orc::ColumnParser *)ptr;
    return cp->getEncodedRow();
}

