#include "orc_wrap.h"
#include "orc/OrcFile.hh"

#include <string.h>
#include <stdio.h>

using namespace std;

// 
Reader* readFile(const char* path){
    orc::ReaderOptions readerOpts;
    ORC_UNIQUE_PTR<orc::Reader> r = orc::createReader(orc::readFile(path), readerOpts);

    orc::Reader *ptr = r.release();
    return (Reader *)ptr;
}

void deleteReader(Reader* ptr){
    orc::Reader *r = (orc::Reader *)ptr;
    delete r;
}
