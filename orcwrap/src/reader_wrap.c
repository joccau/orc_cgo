#include "orc_wrap.h"

#include "orc/Reader.hh"

// 下列函数名为了 ORC 中函数名对应，所以直接使用封装之前的函数名。


// Interfaces for orc::Reader

//
uint64_t getNumberOfRows(reader *ptr) {
    orc::Reader* r = (orc::Reader *)ptr;
    return r->getNumberOfRows();
}

//
uint64_t getNumberOfStripes(reader *ptr) {
    orc::Reader* r = (orc::Reader *)ptr;
    return r->getNumberOfStripes();
}

uint64_t getFileLength(reader *ptr) {
    orc::Reader* r = (orc::Reader *)ptr;
    return r->getFileLength();
}

// Interfaces for orc::RowReader

//
row_reader* createRowReader(reader* ptr) {
    orc::Reader* r = (orc::Reader *)ptr;

    orc::RowReaderOptions rowReaderOpts;
    std::unique_ptr<orc::RowReader> rowReader = r->createRowReader(rowReaderOpts); 

    orc::RowReader *row_reader_ptr = rowReader.release();
    return (row_reader *)row_reader_ptr;
}

// 
void deleteRowReader(row_reader* ptr) {
    orc::RowReader *r = (orc::RowReader *)ptr;
    delete r;
}
