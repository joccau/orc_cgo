#ifndef _ORC_PROXY_H_
#define _ORC_PROXY_H_


#include <stdbool.h>
#include "types.h"


#ifdef __cplusplus
extern "C" {
#endif

// definition of types.
typedef void RowReader;
typedef void Reader;
typedef void ColumnVectorBatch;
typedef void Type;
typedef void ColumnParser;


// definition of interface.
// about Reader
Reader* readFile(const char* path);
void deleteReader(Reader* ptr);
uint64_t getNumberOfRows(Reader *ptr);
uint64_t getNumberOfStripes(Reader *ptr);
uint64_t getFileLength(Reader *ptr);

// about RowReader
RowReader* createRowReader(Reader* ptr);
void deleteRowReader(RowReader* ptr);
Type *getSelectedType(RowReader* ptr);
ColumnVectorBatch* createRowBatch(RowReader* ptr, uint64_t batch);
bool next(RowReader* row_reader_ptr, ColumnVectorBatch* column_vector_batch_ptr);
uint64_t getRowNumber(RowReader* row_reader_ptr);
void seekToRow(RowReader* row_reader_ptr, uint64_t rowNumber);

// about ColumnParser
ColumnParser* createColumnParser(Type* t);
const char* getEncodedRow(ColumnParser *ptr);
void parseRow(ColumnParser *ptr, uint64_t rowID);
void reset(ColumnParser *parserPtr, ColumnVectorBatch *batchPtr);

// about ColumnVectorBatch
uint64_t columnVectorBatchGetNumElements(ColumnVectorBatch *ptr);


#ifdef __cplusplus
}
#endif

#endif // _ORC_PROXY_H_
