#ifndef _COLUMN_PARSER_H_
#define _COLUMN_PARSER_H_

#include "orc_wrap.pb.h"
#include "orc/Vector.hh"
#include "orc/Type.hh"

class ColumnParser {
  protected:
    orc_proto::Row row;

  public:
    ColumnParser(orc_proto::Row&);
    
    virtual ~ColumnParser();

    virtual void parse(uint64_t rowID) = 0;

    virtual void reset(const orc::ColumnVectorBatch& batch);
};

ORC_UNIQUE_PTR<ColumnParser> createColumnParser(orc_proto::Row &row, const orc::Type* type);


#endif // _COLUMN_PARSER_H_