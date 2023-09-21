package main

/*
#cgo CFLAGS: -Wall  -I./orcproxy/ -I./orcproxy/src/

#cgo LDFLAGS: -L./orcproxy/orc_lib -L./orcproxy/libs -L./orcproxy/orc-1.8.5/build/c++/libs/thirdparty  -lorcproxy -lorc -lhdfspp_static  -lrpc -lcommon  -lsasldb -lcrypto -lsnappy -lzstd -lz -llz4 -lprotobuf -lprotoc -lstdc++

#include <stdlib.h>
#include "orc_proxy.h"
*/
import "C"

import (
	"fmt"

	"github.com/joccau/utiles/cal"
	"github.com/joccau/utiles/utils"
)

func case1() {
	fmt.Println("hello world")

	num := cal.Add(1, 2)
	utils.Print(num)
}

func read() {
	C.read_file_test(C.CString("./orc-1.8.5/examples/TestOrcFile.test1.orc"))
}

func main() {
	read()
}
