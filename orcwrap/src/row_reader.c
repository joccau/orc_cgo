#include "types.h"
#include "orc_wrap.h"
#include "orc/Reader.hh"


uint64_t get_number_of_rows(reader *reader_ptr){
    orc::Reader* r = (orc::Reader *)reader_ptr;

    return r->getNumberOfRows();
}

uint64_t get_number_of_stripes(reader *reader_ptr) {
    orc::Reader* r = (orc::Reader *)reader_ptr;

    return r->getNumberOfStripes();
}
