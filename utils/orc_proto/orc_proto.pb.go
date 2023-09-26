// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.31.0
// 	protoc        v3.20.1
// source: orc_proto.proto

package orc_proto

import (
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

type Field_Kind int32

const (
	Field_BOOLEAN           Field_Kind = 0
	Field_BYTE              Field_Kind = 1
	Field_SHORT             Field_Kind = 2
	Field_INT               Field_Kind = 3
	Field_LONG              Field_Kind = 4
	Field_FLOAT             Field_Kind = 5
	Field_DOUBLE            Field_Kind = 6
	Field_STRING            Field_Kind = 7
	Field_BINARY            Field_Kind = 8
	Field_TIMESTAMP         Field_Kind = 9
	Field_LIST              Field_Kind = 10
	Field_MAP               Field_Kind = 11
	Field_STRUCT            Field_Kind = 12
	Field_UNION             Field_Kind = 13
	Field_DECIMAL           Field_Kind = 14
	Field_DATE              Field_Kind = 15
	Field_VARCHAR           Field_Kind = 16
	Field_CHAR              Field_Kind = 17
	Field_TIMESTAMP_INSTANT Field_Kind = 18
)

// Enum value maps for Field_Kind.
var (
	Field_Kind_name = map[int32]string{
		0:  "BOOLEAN",
		1:  "BYTE",
		2:  "SHORT",
		3:  "INT",
		4:  "LONG",
		5:  "FLOAT",
		6:  "DOUBLE",
		7:  "STRING",
		8:  "BINARY",
		9:  "TIMESTAMP",
		10: "LIST",
		11: "MAP",
		12: "STRUCT",
		13: "UNION",
		14: "DECIMAL",
		15: "DATE",
		16: "VARCHAR",
		17: "CHAR",
		18: "TIMESTAMP_INSTANT",
	}
	Field_Kind_value = map[string]int32{
		"BOOLEAN":           0,
		"BYTE":              1,
		"SHORT":             2,
		"INT":               3,
		"LONG":              4,
		"FLOAT":             5,
		"DOUBLE":            6,
		"STRING":            7,
		"BINARY":            8,
		"TIMESTAMP":         9,
		"LIST":              10,
		"MAP":               11,
		"STRUCT":            12,
		"UNION":             13,
		"DECIMAL":           14,
		"DATE":              15,
		"VARCHAR":           16,
		"CHAR":              17,
		"TIMESTAMP_INSTANT": 18,
	}
)

func (x Field_Kind) Enum() *Field_Kind {
	p := new(Field_Kind)
	*p = x
	return p
}

func (x Field_Kind) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (Field_Kind) Descriptor() protoreflect.EnumDescriptor {
	return file_orc_proto_proto_enumTypes[0].Descriptor()
}

func (Field_Kind) Type() protoreflect.EnumType {
	return &file_orc_proto_proto_enumTypes[0]
}

func (x Field_Kind) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use Field_Kind.Descriptor instead.
func (Field_Kind) EnumDescriptor() ([]byte, []int) {
	return file_orc_proto_proto_rawDescGZIP(), []int{0, 0}
}

// Field represents a field in a row;
type Field struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	// kind specifies the type of field;
	Kind   *Field_Kind `protobuf:"varint,1,opt,name=kind,proto3,enum=orc_proto.Field_Kind,oneof" json:"kind,omitempty"`
	Length *uint32     `protobuf:"varint,2,opt,name=length,proto3,oneof" json:"length,omitempty"`
	Value  []byte      `protobuf:"bytes,3,opt,name=value,proto3,oneof" json:"value,omitempty"`
}

func (x *Field) Reset() {
	*x = Field{}
	if protoimpl.UnsafeEnabled {
		mi := &file_orc_proto_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Field) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Field) ProtoMessage() {}

func (x *Field) ProtoReflect() protoreflect.Message {
	mi := &file_orc_proto_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Field.ProtoReflect.Descriptor instead.
func (*Field) Descriptor() ([]byte, []int) {
	return file_orc_proto_proto_rawDescGZIP(), []int{0}
}

func (x *Field) GetKind() Field_Kind {
	if x != nil && x.Kind != nil {
		return *x.Kind
	}
	return Field_BOOLEAN
}

func (x *Field) GetLength() uint32 {
	if x != nil && x.Length != nil {
		return *x.Length
	}
	return 0
}

func (x *Field) GetValue() []byte {
	if x != nil {
		return x.Value
	}
	return nil
}

type Row struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Field []*Field `protobuf:"bytes,1,rep,name=field,proto3" json:"field,omitempty"`
}

func (x *Row) Reset() {
	*x = Row{}
	if protoimpl.UnsafeEnabled {
		mi := &file_orc_proto_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *Row) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*Row) ProtoMessage() {}

func (x *Row) ProtoReflect() protoreflect.Message {
	mi := &file_orc_proto_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use Row.ProtoReflect.Descriptor instead.
func (*Row) Descriptor() ([]byte, []int) {
	return file_orc_proto_proto_rawDescGZIP(), []int{1}
}

func (x *Row) GetField() []*Field {
	if x != nil {
		return x.Field
	}
	return nil
}

var File_orc_proto_proto protoreflect.FileDescriptor

var file_orc_proto_proto_rawDesc = []byte{
	0x0a, 0x0f, 0x6f, 0x72, 0x63, 0x5f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x12, 0x09, 0x6f, 0x72, 0x63, 0x5f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x22, 0xf8, 0x02, 0x0a,
	0x05, 0x46, 0x69, 0x65, 0x6c, 0x64, 0x12, 0x2e, 0x0a, 0x04, 0x6b, 0x69, 0x6e, 0x64, 0x18, 0x01,
	0x20, 0x01, 0x28, 0x0e, 0x32, 0x15, 0x2e, 0x6f, 0x72, 0x63, 0x5f, 0x70, 0x72, 0x6f, 0x74, 0x6f,
	0x2e, 0x46, 0x69, 0x65, 0x6c, 0x64, 0x2e, 0x4b, 0x69, 0x6e, 0x64, 0x48, 0x00, 0x52, 0x04, 0x6b,
	0x69, 0x6e, 0x64, 0x88, 0x01, 0x01, 0x12, 0x1b, 0x0a, 0x06, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68,
	0x18, 0x02, 0x20, 0x01, 0x28, 0x0d, 0x48, 0x01, 0x52, 0x06, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68,
	0x88, 0x01, 0x01, 0x12, 0x19, 0x0a, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x18, 0x03, 0x20, 0x01,
	0x28, 0x0c, 0x48, 0x02, 0x52, 0x05, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x88, 0x01, 0x01, 0x22, 0xe8,
	0x01, 0x0a, 0x04, 0x4b, 0x69, 0x6e, 0x64, 0x12, 0x0b, 0x0a, 0x07, 0x42, 0x4f, 0x4f, 0x4c, 0x45,
	0x41, 0x4e, 0x10, 0x00, 0x12, 0x08, 0x0a, 0x04, 0x42, 0x59, 0x54, 0x45, 0x10, 0x01, 0x12, 0x09,
	0x0a, 0x05, 0x53, 0x48, 0x4f, 0x52, 0x54, 0x10, 0x02, 0x12, 0x07, 0x0a, 0x03, 0x49, 0x4e, 0x54,
	0x10, 0x03, 0x12, 0x08, 0x0a, 0x04, 0x4c, 0x4f, 0x4e, 0x47, 0x10, 0x04, 0x12, 0x09, 0x0a, 0x05,
	0x46, 0x4c, 0x4f, 0x41, 0x54, 0x10, 0x05, 0x12, 0x0a, 0x0a, 0x06, 0x44, 0x4f, 0x55, 0x42, 0x4c,
	0x45, 0x10, 0x06, 0x12, 0x0a, 0x0a, 0x06, 0x53, 0x54, 0x52, 0x49, 0x4e, 0x47, 0x10, 0x07, 0x12,
	0x0a, 0x0a, 0x06, 0x42, 0x49, 0x4e, 0x41, 0x52, 0x59, 0x10, 0x08, 0x12, 0x0d, 0x0a, 0x09, 0x54,
	0x49, 0x4d, 0x45, 0x53, 0x54, 0x41, 0x4d, 0x50, 0x10, 0x09, 0x12, 0x08, 0x0a, 0x04, 0x4c, 0x49,
	0x53, 0x54, 0x10, 0x0a, 0x12, 0x07, 0x0a, 0x03, 0x4d, 0x41, 0x50, 0x10, 0x0b, 0x12, 0x0a, 0x0a,
	0x06, 0x53, 0x54, 0x52, 0x55, 0x43, 0x54, 0x10, 0x0c, 0x12, 0x09, 0x0a, 0x05, 0x55, 0x4e, 0x49,
	0x4f, 0x4e, 0x10, 0x0d, 0x12, 0x0b, 0x0a, 0x07, 0x44, 0x45, 0x43, 0x49, 0x4d, 0x41, 0x4c, 0x10,
	0x0e, 0x12, 0x08, 0x0a, 0x04, 0x44, 0x41, 0x54, 0x45, 0x10, 0x0f, 0x12, 0x0b, 0x0a, 0x07, 0x56,
	0x41, 0x52, 0x43, 0x48, 0x41, 0x52, 0x10, 0x10, 0x12, 0x08, 0x0a, 0x04, 0x43, 0x48, 0x41, 0x52,
	0x10, 0x11, 0x12, 0x15, 0x0a, 0x11, 0x54, 0x49, 0x4d, 0x45, 0x53, 0x54, 0x41, 0x4d, 0x50, 0x5f,
	0x49, 0x4e, 0x53, 0x54, 0x41, 0x4e, 0x54, 0x10, 0x12, 0x42, 0x07, 0x0a, 0x05, 0x5f, 0x6b, 0x69,
	0x6e, 0x64, 0x42, 0x09, 0x0a, 0x07, 0x5f, 0x6c, 0x65, 0x6e, 0x67, 0x74, 0x68, 0x42, 0x08, 0x0a,
	0x06, 0x5f, 0x76, 0x61, 0x6c, 0x75, 0x65, 0x22, 0x2d, 0x0a, 0x03, 0x52, 0x6f, 0x77, 0x12, 0x26,
	0x0a, 0x05, 0x66, 0x69, 0x65, 0x6c, 0x64, 0x18, 0x01, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x10, 0x2e,
	0x6f, 0x72, 0x63, 0x5f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x2e, 0x46, 0x69, 0x65, 0x6c, 0x64, 0x52,
	0x05, 0x66, 0x69, 0x65, 0x6c, 0x64, 0x42, 0x0d, 0x5a, 0x0b, 0x2e, 0x2f, 0x6f, 0x72, 0x63, 0x5f,
	0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_orc_proto_proto_rawDescOnce sync.Once
	file_orc_proto_proto_rawDescData = file_orc_proto_proto_rawDesc
)

func file_orc_proto_proto_rawDescGZIP() []byte {
	file_orc_proto_proto_rawDescOnce.Do(func() {
		file_orc_proto_proto_rawDescData = protoimpl.X.CompressGZIP(file_orc_proto_proto_rawDescData)
	})
	return file_orc_proto_proto_rawDescData
}

var file_orc_proto_proto_enumTypes = make([]protoimpl.EnumInfo, 1)
var file_orc_proto_proto_msgTypes = make([]protoimpl.MessageInfo, 2)
var file_orc_proto_proto_goTypes = []interface{}{
	(Field_Kind)(0), // 0: orc_proto.Field.Kind
	(*Field)(nil),   // 1: orc_proto.Field
	(*Row)(nil),     // 2: orc_proto.Row
}
var file_orc_proto_proto_depIdxs = []int32{
	0, // 0: orc_proto.Field.kind:type_name -> orc_proto.Field.Kind
	1, // 1: orc_proto.Row.field:type_name -> orc_proto.Field
	2, // [2:2] is the sub-list for method output_type
	2, // [2:2] is the sub-list for method input_type
	2, // [2:2] is the sub-list for extension type_name
	2, // [2:2] is the sub-list for extension extendee
	0, // [0:2] is the sub-list for field type_name
}

func init() { file_orc_proto_proto_init() }
func file_orc_proto_proto_init() {
	if File_orc_proto_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_orc_proto_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Field); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_orc_proto_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*Row); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	file_orc_proto_proto_msgTypes[0].OneofWrappers = []interface{}{}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_orc_proto_proto_rawDesc,
			NumEnums:      1,
			NumMessages:   2,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_orc_proto_proto_goTypes,
		DependencyIndexes: file_orc_proto_proto_depIdxs,
		EnumInfos:         file_orc_proto_proto_enumTypes,
		MessageInfos:      file_orc_proto_proto_msgTypes,
	}.Build()
	File_orc_proto_proto = out.File
	file_orc_proto_proto_rawDesc = nil
	file_orc_proto_proto_goTypes = nil
	file_orc_proto_proto_depIdxs = nil
}