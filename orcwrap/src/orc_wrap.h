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
reader* readFile(const char* path);
void deleteReader(reader* ptr);


uint64_t getNumberOfRows(reader *ptr);
uint64_t getNumberOfStripes(reader *ptr);
uint64_t getFileLength(reader *ptr);

row_reader* createRowReader(reader* ptr);
void deleteRowReader(row_reader* ptr);


#ifdef __cplusplus
}
#endif

#endif // _ORC_PROXY_H_
