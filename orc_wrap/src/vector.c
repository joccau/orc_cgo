#include "orc_wrap.h"
#include "orc/Vector.hh"

uint64_t columnVectorBatchGetNumElements(ColumnVectorBatch *ptr) {
    orc::ColumnVectorBatch *cvb = (orc::ColumnVectorBatch *)ptr;
    return cvb->numElements;
}