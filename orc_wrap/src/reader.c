#include "orc_wrap.h"

#include "orc/Reader.hh"

// 下列函数名为了 ORC 中函数名对应，所以直接使用封装之前的函数名。


// Interfaces for orc::Reader

//
uint64_t getNumberOfRows(Reader *ptr) {
    orc::Reader* r = (orc::Reader *)ptr;
    return r->getNumberOfRows();
}

//
uint64_t getNumberOfStripes(Reader *ptr) {
    orc::Reader* r = (orc::Reader *)ptr;
    return r->getNumberOfStripes();
}

uint64_t getFileLength(Reader *ptr) {
    orc::Reader* r = (orc::Reader *)ptr;
    return r->getFileLength();
}

// Interfaces for orc::RowReader

//
RowReader* createRowReader(Reader* ptr) {
    orc::Reader* r = (orc::Reader *)ptr;

    orc::RowReaderOptions rowReaderOpts;
    std::unique_ptr<orc::RowReader> rowReader = r->createRowReader(rowReaderOpts); 

    orc::RowReader *row_reader_ptr = rowReader.release();
    return (RowReader *)row_reader_ptr;
}

// 
void deleteRowReader(RowReader* ptr) {
    orc::RowReader *r = (orc::RowReader *)ptr;
    delete r;
}

Type *getSelectedType(RowReader* ptr) {
    orc::RowReader *row_reader = (orc::RowReader *)ptr;

    const orc::Type& type = row_reader->getSelectedType();
    return (Type *)&type;
}

ColumnVectorBatch* createRowBatch(RowReader* ptr, uint64_t batch) {
    orc::RowReader *r = (orc::RowReader *)ptr;

    ORC_UNIQUE_PTR<orc::ColumnVectorBatch> cvb = r->createRowBatch(batch);
    orc::ColumnVectorBatch *cvb_ptr = cvb.release();

    return (ColumnVectorBatch *)cvb_ptr;
}

bool next(RowReader* row_reader_ptr, ColumnVectorBatch* column_vector_batch_ptr) {
    orc::RowReader* row_reader = (orc::RowReader *)row_reader_ptr;
    orc::ColumnVectorBatch *data = (orc::ColumnVectorBatch *)column_vector_batch_ptr;
    return row_reader->next(*data);
}

uint64_t getRowNumber(RowReader* row_reader_ptr) {
    orc::RowReader* row_reader = (orc::RowReader *)row_reader_ptr;
    return row_reader->getRowNumber();
}

void seekToRow(RowReader* row_reader_ptr, uint64_t rowNumber) {
    orc::RowReader* row_reader = (orc::RowReader *)row_reader_ptr;
    return row_reader->seekToRow(rowNumber);
}
