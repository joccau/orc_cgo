// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: orc_proxy.proto

#include "orc_proxy.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace orc_proto {
PROTOBUF_CONSTEXPR Field::Field(
    ::_pbi::ConstantInitialized)
  : value_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , kind_(0)

  , length_(0u){}
struct FieldDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FieldDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FieldDefaultTypeInternal() {}
  union {
    Field _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FieldDefaultTypeInternal _Field_default_instance_;
PROTOBUF_CONSTEXPR Row::Row(
    ::_pbi::ConstantInitialized)
  : field_(){}
struct RowDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RowDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RowDefaultTypeInternal() {}
  union {
    Row _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RowDefaultTypeInternal _Row_default_instance_;
}  // namespace orc_proto
static ::_pb::Metadata file_level_metadata_orc_5fproxy_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_orc_5fproxy_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_orc_5fproxy_2eproto = nullptr;

const uint32_t TableStruct_orc_5fproxy_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::orc_proto::Field, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::orc_proto::Field, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::orc_proto::Field, kind_),
  PROTOBUF_FIELD_OFFSET(::orc_proto::Field, length_),
  PROTOBUF_FIELD_OFFSET(::orc_proto::Field, value_),
  1,
  2,
  0,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::orc_proto::Row, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::orc_proto::Row, field_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::orc_proto::Field)},
  { 12, -1, -1, sizeof(::orc_proto::Row)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::orc_proto::_Field_default_instance_._instance,
  &::orc_proto::_Row_default_instance_._instance,
};

const char descriptor_table_protodef_orc_5fproxy_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017orc_proxy.proto\022\torc_proto\"\343\002\n\005Field\022("
  "\n\004kind\030\001 \001(\0162\025.orc_proto.Field.KindH\000\210\001\001"
  "\022\023\n\006length\030\002 \001(\rH\001\210\001\001\022\022\n\005value\030\003 \001(\014H\002\210\001"
  "\001\"\350\001\n\004Kind\022\013\n\007BOOLEAN\020\000\022\010\n\004BYTE\020\001\022\t\n\005SHO"
  "RT\020\002\022\007\n\003INT\020\003\022\010\n\004LONG\020\004\022\t\n\005FLOAT\020\005\022\n\n\006DO"
  "UBLE\020\006\022\n\n\006STRING\020\007\022\n\n\006BINARY\020\010\022\r\n\tTIMEST"
  "AMP\020\t\022\010\n\004LIST\020\n\022\007\n\003MAP\020\013\022\n\n\006STRUCT\020\014\022\t\n\005"
  "UNION\020\r\022\013\n\007DECIMAL\020\016\022\010\n\004DATE\020\017\022\013\n\007VARCHA"
  "R\020\020\022\010\n\004CHAR\020\021\022\025\n\021TIMESTAMP_INSTANT\020\022B\007\n\005"
  "_kindB\t\n\007_lengthB\010\n\006_value\"&\n\003Row\022\037\n\005fie"
  "ld\030\001 \003(\0132\020.orc_proto.FieldB\rZ\013./orc_prot"
  "ob\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_orc_5fproxy_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_orc_5fproxy_2eproto = {
    false, false, 449, descriptor_table_protodef_orc_5fproxy_2eproto,
    "orc_proxy.proto",
    &descriptor_table_orc_5fproxy_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_orc_5fproxy_2eproto::offsets,
    file_level_metadata_orc_5fproxy_2eproto, file_level_enum_descriptors_orc_5fproxy_2eproto,
    file_level_service_descriptors_orc_5fproxy_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_orc_5fproxy_2eproto_getter() {
  return &descriptor_table_orc_5fproxy_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_orc_5fproxy_2eproto(&descriptor_table_orc_5fproxy_2eproto);
namespace orc_proto {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Field_Kind_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_orc_5fproxy_2eproto);
  return file_level_enum_descriptors_orc_5fproxy_2eproto[0];
}
bool Field_Kind_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr Field_Kind Field::BOOLEAN;
constexpr Field_Kind Field::BYTE;
constexpr Field_Kind Field::SHORT;
constexpr Field_Kind Field::INT;
constexpr Field_Kind Field::LONG;
constexpr Field_Kind Field::FLOAT;
constexpr Field_Kind Field::DOUBLE;
constexpr Field_Kind Field::STRING;
constexpr Field_Kind Field::BINARY;
constexpr Field_Kind Field::TIMESTAMP;
constexpr Field_Kind Field::LIST;
constexpr Field_Kind Field::MAP;
constexpr Field_Kind Field::STRUCT;
constexpr Field_Kind Field::UNION;
constexpr Field_Kind Field::DECIMAL;
constexpr Field_Kind Field::DATE;
constexpr Field_Kind Field::VARCHAR;
constexpr Field_Kind Field::CHAR;
constexpr Field_Kind Field::TIMESTAMP_INSTANT;
constexpr Field_Kind Field::Kind_MIN;
constexpr Field_Kind Field::Kind_MAX;
constexpr int Field::Kind_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class Field::_Internal {
 public:
  using HasBits = decltype(std::declval<Field>()._has_bits_);
  static void set_has_kind(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_length(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_value(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

Field::Field(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:orc_proto.Field)
}
Field::Field(const Field& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  value_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    value_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_value()) {
    value_.Set(from._internal_value(), 
      GetArenaForAllocation());
  }
  ::memcpy(&kind_, &from.kind_,
    static_cast<size_t>(reinterpret_cast<char*>(&length_) -
    reinterpret_cast<char*>(&kind_)) + sizeof(length_));
  // @@protoc_insertion_point(copy_constructor:orc_proto.Field)
}

inline void Field::SharedCtor() {
value_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  value_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&kind_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&length_) -
    reinterpret_cast<char*>(&kind_)) + sizeof(length_));
}

Field::~Field() {
  // @@protoc_insertion_point(destructor:orc_proto.Field)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Field::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  value_.Destroy();
}

void Field::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Field::Clear() {
// @@protoc_insertion_point(message_clear_start:orc_proto.Field)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    value_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&kind_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&length_) -
        reinterpret_cast<char*>(&kind_)) + sizeof(length_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Field::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .orc_proto.Field.Kind kind = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_kind(static_cast<::orc_proto::Field_Kind>(val));
        } else
          goto handle_unusual;
        continue;
      // optional uint32 length = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_length(&has_bits);
          length_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes value = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_value();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Field::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:orc_proto.Field)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional .orc_proto.Field.Kind kind = 1;
  if (_internal_has_kind()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_kind(), target);
  }

  // optional uint32 length = 2;
  if (_internal_has_length()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_length(), target);
  }

  // optional bytes value = 3;
  if (_internal_has_value()) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:orc_proto.Field)
  return target;
}

size_t Field::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:orc_proto.Field)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional bytes value = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_value());
    }

    // optional .orc_proto.Field.Kind kind = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_kind());
    }

    // optional uint32 length = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_length());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Field::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Field::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Field::GetClassData() const { return &_class_data_; }

void Field::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Field *>(to)->MergeFrom(
      static_cast<const Field &>(from));
}


void Field::MergeFrom(const Field& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:orc_proto.Field)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_value(from._internal_value());
    }
    if (cached_has_bits & 0x00000002u) {
      kind_ = from.kind_;
    }
    if (cached_has_bits & 0x00000004u) {
      length_ = from.length_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Field::CopyFrom(const Field& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:orc_proto.Field)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Field::IsInitialized() const {
  return true;
}

void Field::InternalSwap(Field* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &value_, lhs_arena,
      &other->value_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Field, length_)
      + sizeof(Field::length_)
      - PROTOBUF_FIELD_OFFSET(Field, kind_)>(
          reinterpret_cast<char*>(&kind_),
          reinterpret_cast<char*>(&other->kind_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Field::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_orc_5fproxy_2eproto_getter, &descriptor_table_orc_5fproxy_2eproto_once,
      file_level_metadata_orc_5fproxy_2eproto[0]);
}

// ===================================================================

class Row::_Internal {
 public:
};

Row::Row(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  field_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:orc_proto.Row)
}
Row::Row(const Row& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      field_(from.field_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:orc_proto.Row)
}

inline void Row::SharedCtor() {
}

Row::~Row() {
  // @@protoc_insertion_point(destructor:orc_proto.Row)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Row::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Row::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Row::Clear() {
// @@protoc_insertion_point(message_clear_start:orc_proto.Row)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  field_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Row::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .orc_proto.Field field = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_field(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Row::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:orc_proto.Row)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .orc_proto.Field field = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_field_size()); i < n; i++) {
    const auto& repfield = this->_internal_field(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:orc_proto.Row)
  return target;
}

size_t Row::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:orc_proto.Row)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .orc_proto.Field field = 1;
  total_size += 1UL * this->_internal_field_size();
  for (const auto& msg : this->field_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Row::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Row::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Row::GetClassData() const { return &_class_data_; }

void Row::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Row *>(to)->MergeFrom(
      static_cast<const Row &>(from));
}


void Row::MergeFrom(const Row& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:orc_proto.Row)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  field_.MergeFrom(from.field_);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Row::CopyFrom(const Row& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:orc_proto.Row)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Row::IsInitialized() const {
  return true;
}

void Row::InternalSwap(Row* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  field_.InternalSwap(&other->field_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Row::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_orc_5fproxy_2eproto_getter, &descriptor_table_orc_5fproxy_2eproto_once,
      file_level_metadata_orc_5fproxy_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace orc_proto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::orc_proto::Field*
Arena::CreateMaybeMessage< ::orc_proto::Field >(Arena* arena) {
  return Arena::CreateMessageInternal< ::orc_proto::Field >(arena);
}
template<> PROTOBUF_NOINLINE ::orc_proto::Row*
Arena::CreateMaybeMessage< ::orc_proto::Row >(Arena* arena) {
  return Arena::CreateMessageInternal< ::orc_proto::Row >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
