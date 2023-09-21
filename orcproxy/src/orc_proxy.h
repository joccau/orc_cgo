#ifndef _ORC_PROXY_H_
#define _ORC_PROXY_H_


#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

// definition of types.
typedef void row_reader;
typedef void reader;




// definition of interface.
reader* read_file(const char* path);
row_reader* create_row_reader(reader* ptr);

uint64_t get_number_of_rows(reader *reader_ptr);
uint64_t get_number_of_stripes(reader *reader_ptr);


#ifdef __cplusplus
}
#endif

#endif // _ORC_PROXY_H_
