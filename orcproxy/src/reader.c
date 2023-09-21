#include "orc_proxy.h"
#include "orc/OrcFile.hh"



reader* read_file(const char* path){
    orc::ReaderOptions readerOpts;
    ORC_UNIQUE_PTR<orc::Reader> r = orc::createReader(orc::readFile(path), readerOpts);

    orc::Reader *ptr = r.release();
    return (reader *)ptr;
}

row_reader* create_row_reader(reader* ptr){
    orc::Reader* r = (orc::Reader *)ptr;

    orc::RowReaderOptions rowReaderOpts;
    std::unique_ptr<orc::RowReader> rowReader = r->createRowReader(rowReaderOpts); 

    orc::RowReader *row_reader_ptr = rowReader.release();
    return (row_reader *)row_reader_ptr;
}


