#include "orc_wrap.h"
#include "orc/OrcFile.hh"

#include <string.h>
#include <stdio.h>

using namespace std;
using namespace orc;

void read_file_test(const char* filepath){
    printf("path=%s", filepath);

        // 打开文件
    FILE *file = fopen(filepath, "rb");

    if (file == NULL) {
        printf("无法打开文件：%s\n", filepath);
        return;
    }

    // 定位到文件末尾
    fseek(file, 0, SEEK_END);

    // 获取文件长度
    long length = ftell(file);
    printf("len = %ld\n", length);

}

// 
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


