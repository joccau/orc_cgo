package main

/*
#cgo CFLAGS: -Wall  -I./orcwrap/ -I./orcwrap/src/

#cgo LDFLAGS: -L./orcwrap/orc_lib -L./orcwrap/libs -L./orcwrap/orc-1.8.5/build/c++/libs/thirdparty  -lorcwrap -lorc -lhdfspp_static  -lrpc -lcommon  -lsasldb -lcrypto -lsnappy -lzstd -lz -llz4 -lprotobuf -lprotoc -lstdc++

#include <stdlib.h>
#include "orc_wrap.h"
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
	C.read_file_test(C.CString("./orcwrap/orc-1.8.5/examples/TestOrcFile.test1.orc"))
}

func main() {
	read()
}
