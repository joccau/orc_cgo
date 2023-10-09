package main

/*
#cgo CFLAGS: -Wall  -I./orc_wrap/ -I./orc_wrap/src/

#cgo LDFLAGS: -L./orc_wrap/orc_lib -L./orc_wrap/libs -L./orc_wrap/orc-1.8.5/build/c++/libs/thirdparty -L./orc_wrap/orc-1.8.5/build/c++/libs/thirdparty/protobuf_ep-install/lib -lorcwrap -lorc -lhdfspp_static  -lrpc -lcommon  -lsasldb -lcrypto -lsnappy -lzstd -lz -llz4 -lprotobuf -lprotoc -lstdc++

#include "orc_wrap.h"
#include <stdlib.h>

*/
import "C"

import (
	"fmt"
	orc_read "orc_cgo/orc_pkg"
	"reflect"
)

func test_read() {
	filepath := "./orc_wrap/orc-1.8.5/examples/TestOrcFile.test1.orc"

	r := orc_read.CreateReader(filepath)
	defer r.Close()

	cnt := r.GetNumberOfRows()
	fmt.Println("the number of rows is ", cnt)

	cnt = r.GetNumberOfStripes()
	fmt.Println("the number of stripe is ", cnt)
}

func test_read_content() {
	filepath := "./orc_wrap/orc-1.8.5/examples/TestOrcFile.test1.orc"
	reader := orc_read.CreateReader(filepath)
	defer reader.Close()
	rowReader := reader.CreateRowReader()
	defer rowReader.Close()

	rowReader.CreateRowBatch(10)

}

func case1() {
	values := make([]interface{}, 0)
	values = append(values, 1)
	values = append(values, "abc")
	values = append(values, 2.5)

	for _, value := range values {
		t := reflect.TypeOf(value)
		v := reflect.ValueOf(value)
		fmt.Println(t.Name(), " ", v.Kind().String(), " ", v)

	}

}

func main() {
	test_read()
	test_read_content()
	//case1()
}
