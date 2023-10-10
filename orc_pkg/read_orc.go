package orc_read

/*
#cgo CFLAGS: -Wall  -I../orc_wrap/src/

#include "orc_wrap.h"
*/
import "C"

import (
	"fmt"
	"unsafe"
)

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

func (r *Reader) GetFileLength() uint64 {
	cnt := C.getFileLength(r.ptr)
	return uint64(cnt)
}

func (r *Reader) CreateRowReader() RowReader {
	rr := C.createRowReader(r.ptr)
	return RowReader{rr}
}

type RowReader struct {
	ptr unsafe.Pointer
}

func (rr *RowReader) Close() {
	C.deleteRowReader(rr.ptr)
}

func (rr *RowReader) GetSelectedType() Type {
	t := C.getSelectedType(rr.ptr)
	return Type{t}
}

func (rr *RowReader) CreateRowBatch(batch uint64) ColumnVectorBatch {
	cvb := C.createRowBatch(rr.ptr, C.ulonglong(batch))
	return ColumnVectorBatch{cvb}
}

func (rr *RowReader) Next(cvb ColumnVectorBatch) bool {
	ok := C.next(rr.ptr, cvb.ptr)
	return bool(ok)
}

func (rr *RowReader) getRowNumber() uint64 {
	cnt := C.getRowNumber(rr.ptr)
	return uint64(cnt)
}

func (rr *RowReader) seekToRow(rowNumber uint64) {
	C.seekToRow(rr.ptr, C.ulonglong(rowNumber))
}

type Type struct {
	ptr unsafe.Pointer
}

type ColumnVectorBatch struct {
	ptr unsafe.Pointer
}

func (cvb *ColumnVectorBatch) ColumnVectorBatchGetNumElements() uint64 {
	numElements := C.columnVectorBatchGetNumElements(cvb.ptr)
	return uint64(numElements)
}

type ColumnParser struct {
	ptr unsafe.Pointer
}

func CreateColumnParser(t Type) ColumnParser {
	cp := C.createColumnParser(t.ptr)
	return ColumnParser{cp}
}

func (cp *ColumnParser) Reset(cvb ColumnVectorBatch) {
	fmt.Println(cp.ptr, " ", cvb.ptr)
	C.reset(cp.ptr, cvb.ptr)
}

func (cp *ColumnParser) ParseRow(rowID uint64) {
	C.parseRow(cp.ptr, C.ulonglong(rowID))
}

func (cp *ColumnParser) GetEncodedRow() []byte {
	data := C.getEncodedRow(cp.ptr)
	goData := C.GoString(data)
	return []byte(goData)
}
