#include "orc_wrap.h"
#include "orc_wrap.pb.h"
#include "ColumnParser.h"
#include "orc/Type.hh"

ColumnParser* createColumnParser(orc_proto::Row &row, Type* t) {
    orc::Type* type = (orc::Type *)t;

    ORC_UNIQUE_PTR<orc::ColumnParser> cp = orc::_createColumnParser(row, type);

    orc::ColumnParser* column_parser_ptr = cp.release();
    return (ColumnParser *)column_parser_ptr;
}
