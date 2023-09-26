package orc_read

/*
#cgo CFLAGS: -Wall  -I../orcwrap/src/

#include "orc_wrap.h"
*/
import "C"

import "unsafe"

/* this package is:
1. Provide interface in Golang.
2. Encapsulate Cgo interface
*/

type Reader struct {
	ptr unsafe.Pointer
}

func CreateReader(filepath string) Reader {
	r := C.readFile(C.CString(filepath))
	return Reader{r}
}

func (r *Reader) Close() {
	C.deleteReader(r.ptr)
}

func (r *Reader) GetNumberOfRows() uint64 {
	ptr := r.ptr
	cnt := C.getNumberOfRows(ptr)
	return uint64(cnt)
}

func (r *Reader) GetNumberOfStripes() uint64 {
	cnt := C.getNumberOfStripes(r.ptr)
	return uint64(cnt)
}
