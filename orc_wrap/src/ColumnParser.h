#ifndef _COLUMN_PARSER_H_
#define _COLUMN_PARSER_H_

#include "orc_wrap.pb.h"
#include "orc/Vector.hh"
#include "orc/Type.hh"

namespace orc {

class ColumnParser {
protected:
    orc_proto::Row  row;
    std::string     encoded_row;

public:
    ColumnParser();
    
    virtual ~ColumnParser();

    virtual void parseRow(uint64_t rowID) = 0;

    virtual void reset(const orc::ColumnVectorBatch& batch);

    const char* getEncodedRow();
};

ORC_UNIQUE_PTR<ColumnParser> _createColumnParser(const orc::Type* type);

}// namespace

#endif // _COLUMN_PARSER_H_