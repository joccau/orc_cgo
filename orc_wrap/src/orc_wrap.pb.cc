// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: orc_wrap.proto

#include "orc_wrap.pb.h"

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
PROTOBUF_CONSTEXPR Type::Type(
    ::_pbi::ConstantInitialized)
  : subtypes_()
  , _subtypes_cached_byte_size_(0)
  , fieldnames_()
  , kind_(0)

  , maximumlength_(0u)
  , precision_(0u)
  , scale_(0u){}
struct TypeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TypeDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TypeDefaultTypeInternal() {}
  union {
    Type _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TypeDefaultTypeInternal _Type_default_instance_;
PROTOBUF_CONSTEXPR Field::Field(
    ::_pbi::ConstantInitialized)
  : value_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , type_(nullptr)
  , i_(int64_t{0})
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
static ::_pb::Metadata file_level_metadata_orc_5fwrap_2eproto[3];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_orc_5fwrap_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_orc_5fwrap_2eproto = nullptr;

const uint32_t TableStruct_orc_5fwrap_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::orc_proto::Type, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::orc_proto::Type, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::orc_proto::Type, kind_),
  PROTOBUF_FIELD_OFFSET(::orc_proto::Type, subtypes_),
  PROTOBUF_FIELD_OFFSET(::orc_proto::Type, fieldnames_),
  PROTOBUF_FIELD_OFFSET(::orc_proto::Type, maximumlength_),
  PROTOBUF_FIELD_OFFSET(::orc_proto::Type, precision_),
  PROTOBUF_FIELD_OFFSET(::orc_proto::Type, scale_),
  0,
  ~0u,
  ~0u,
  1,
  2,
  3,
  PROTOBUF_FIELD_OFFSET(::orc_proto::Field, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::orc_proto::Field, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::orc_proto::Field, type_),
  PROTOBUF_FIELD_OFFSET(::orc_proto::Field, i_),
  PROTOBUF_FIELD_OFFSET(::orc_proto::Field, value_),
  PROTOBUF_FIELD_OFFSET(::orc_proto::Field, length_),
  1,
  2,
  0,
  3,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::orc_proto::Row, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::orc_proto::Row, field_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, -1, sizeof(::orc_proto::Type)},
  { 18, 28, -1, sizeof(::orc_proto::Field)},
  { 32, -1, -1, sizeof(::orc_proto::Row)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::orc_proto::_Type_default_instance_._instance,
  &::orc_proto::_Field_default_instance_._instance,
  &::orc_proto::_Row_default_instance_._instance,
};

const char descriptor_table_protodef_orc_5fwrap_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016orc_wrap.proto\022\torc_proto\"\277\003\n\004Type\022\'\n\004"
  "kind\030\001 \001(\0162\024.orc_proto.Type.KindH\000\210\001\001\022\024\n"
  "\010subtypes\030\002 \003(\rB\002\020\001\022\022\n\nfieldNames\030\003 \003(\t\022"
  "\032\n\rmaximumLength\030\004 \001(\rH\001\210\001\001\022\026\n\tprecision"
  "\030\005 \001(\rH\002\210\001\001\022\022\n\005scale\030\006 \001(\rH\003\210\001\001\"\350\001\n\004Kind"
  "\022\013\n\007BOOLEAN\020\000\022\010\n\004BYTE\020\001\022\t\n\005SHORT\020\002\022\007\n\003IN"
  "T\020\003\022\010\n\004LONG\020\004\022\t\n\005FLOAT\020\005\022\n\n\006DOUBLE\020\006\022\n\n\006"
  "STRING\020\007\022\n\n\006BINARY\020\010\022\r\n\tTIMESTAMP\020\t\022\010\n\004L"
  "IST\020\n\022\007\n\003MAP\020\013\022\n\n\006STRUCT\020\014\022\t\n\005UNION\020\r\022\013\n"
  "\007DECIMAL\020\016\022\010\n\004DATE\020\017\022\013\n\007VARCHAR\020\020\022\010\n\004CHA"
  "R\020\021\022\025\n\021TIMESTAMP_INSTANT\020\022B\007\n\005_kindB\020\n\016_"
  "maximumLengthB\014\n\n_precisionB\010\n\006_scale\"\210\001"
  "\n\005Field\022\"\n\004type\030\001 \001(\0132\017.orc_proto.TypeH\000"
  "\210\001\001\022\016\n\001i\030\002 \001(\003H\001\210\001\001\022\022\n\005value\030\004 \001(\014H\002\210\001\001\022"
  "\023\n\006length\030\003 \001(\rH\003\210\001\001B\007\n\005_typeB\004\n\002_iB\010\n\006_"
  "valueB\t\n\007_length\"&\n\003Row\022\037\n\005field\030\001 \003(\0132\020"
  ".orc_proto.FieldB\rZ\013./orc_protob\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_orc_5fwrap_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_orc_5fwrap_2eproto = {
    false, false, 679, descriptor_table_protodef_orc_5fwrap_2eproto,
    "orc_wrap.proto",
    &descriptor_table_orc_5fwrap_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_orc_5fwrap_2eproto::offsets,
    file_level_metadata_orc_5fwrap_2eproto, file_level_enum_descriptors_orc_5fwrap_2eproto,
    file_level_service_descriptors_orc_5fwrap_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_orc_5fwrap_2eproto_getter() {
  return &descriptor_table_orc_5fwrap_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_orc_5fwrap_2eproto(&descriptor_table_orc_5fwrap_2eproto);
namespace orc_proto {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Type_Kind_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_orc_5fwrap_2eproto);
  return file_level_enum_descriptors_orc_5fwrap_2eproto[0];
}
bool Type_Kind_IsValid(int value) {
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
constexpr Type_Kind Type::BOOLEAN;
constexpr Type_Kind Type::BYTE;
constexpr Type_Kind Type::SHORT;
constexpr Type_Kind Type::INT;
constexpr Type_Kind Type::LONG;
constexpr Type_Kind Type::FLOAT;
constexpr Type_Kind Type::DOUBLE;
constexpr Type_Kind Type::STRING;
constexpr Type_Kind Type::BINARY;
constexpr Type_Kind Type::TIMESTAMP;
constexpr Type_Kind Type::LIST;
constexpr Type_Kind Type::MAP;
constexpr Type_Kind Type::STRUCT;
constexpr Type_Kind Type::UNION;
constexpr Type_Kind Type::DECIMAL;
constexpr Type_Kind Type::DATE;
constexpr Type_Kind Type::VARCHAR;
constexpr Type_Kind Type::CHAR;
constexpr Type_Kind Type::TIMESTAMP_INSTANT;
constexpr Type_Kind Type::Kind_MIN;
constexpr Type_Kind Type::Kind_MAX;
constexpr int Type::Kind_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class Type::_Internal {
 public:
  using HasBits = decltype(std::declval<Type>()._has_bits_);
  static void set_has_kind(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_maximumlength(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_precision(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_scale(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

Type::Type(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  subtypes_(arena),
  fieldnames_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:orc_proto.Type)
}
Type::Type(const Type& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      subtypes_(from.subtypes_),
      fieldnames_(from.fieldnames_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&kind_, &from.kind_,
    static_cast<size_t>(reinterpret_cast<char*>(&scale_) -
    reinterpret_cast<char*>(&kind_)) + sizeof(scale_));
  // @@protoc_insertion_point(copy_constructor:orc_proto.Type)
}

inline void Type::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&kind_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&scale_) -
    reinterpret_cast<char*>(&kind_)) + sizeof(scale_));
}

Type::~Type() {
  // @@protoc_insertion_point(destructor:orc_proto.Type)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Type::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Type::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Type::Clear() {
// @@protoc_insertion_point(message_clear_start:orc_proto.Type)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  subtypes_.Clear();
  fieldnames_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&kind_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&scale_) -
        reinterpret_cast<char*>(&kind_)) + sizeof(scale_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Type::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .orc_proto.Type.Kind kind = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_kind(static_cast<::orc_proto::Type_Kind>(val));
        } else
          goto handle_unusual;
        continue;
      // repeated uint32 subtypes = 2 [packed = true];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedUInt32Parser(_internal_mutable_subtypes(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 16) {
          _internal_add_subtypes(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated string fieldNames = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_fieldnames();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "orc_proto.Type.fieldNames"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional uint32 maximumLength = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_maximumlength(&has_bits);
          maximumlength_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 precision = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_precision(&has_bits);
          precision_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 scale = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_scale(&has_bits);
          scale_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* Type::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:orc_proto.Type)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional .orc_proto.Type.Kind kind = 1;
  if (_internal_has_kind()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_kind(), target);
  }

  // repeated uint32 subtypes = 2 [packed = true];
  {
    int byte_size = _subtypes_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteUInt32Packed(
          2, _internal_subtypes(), byte_size, target);
    }
  }

  // repeated string fieldNames = 3;
  for (int i = 0, n = this->_internal_fieldnames_size(); i < n; i++) {
    const auto& s = this->_internal_fieldnames(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "orc_proto.Type.fieldNames");
    target = stream->WriteString(3, s, target);
  }

  // optional uint32 maximumLength = 4;
  if (_internal_has_maximumlength()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(4, this->_internal_maximumlength(), target);
  }

  // optional uint32 precision = 5;
  if (_internal_has_precision()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(5, this->_internal_precision(), target);
  }

  // optional uint32 scale = 6;
  if (_internal_has_scale()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(6, this->_internal_scale(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:orc_proto.Type)
  return target;
}

size_t Type::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:orc_proto.Type)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated uint32 subtypes = 2 [packed = true];
  {
    size_t data_size = ::_pbi::WireFormatLite::
      UInt32Size(this->subtypes_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _subtypes_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated string fieldNames = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(fieldnames_.size());
  for (int i = 0, n = fieldnames_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      fieldnames_.Get(i));
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional .orc_proto.Type.Kind kind = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_kind());
    }

    // optional uint32 maximumLength = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_maximumlength());
    }

    // optional uint32 precision = 5;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_precision());
    }

    // optional uint32 scale = 6;
    if (cached_has_bits & 0x00000008u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_scale());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Type::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Type::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Type::GetClassData() const { return &_class_data_; }

void Type::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Type *>(to)->MergeFrom(
      static_cast<const Type &>(from));
}


void Type::MergeFrom(const Type& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:orc_proto.Type)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  subtypes_.MergeFrom(from.subtypes_);
  fieldnames_.MergeFrom(from.fieldnames_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      kind_ = from.kind_;
    }
    if (cached_has_bits & 0x00000002u) {
      maximumlength_ = from.maximumlength_;
    }
    if (cached_has_bits & 0x00000004u) {
      precision_ = from.precision_;
    }
    if (cached_has_bits & 0x00000008u) {
      scale_ = from.scale_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Type::CopyFrom(const Type& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:orc_proto.Type)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Type::IsInitialized() const {
  return true;
}

void Type::InternalSwap(Type* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  subtypes_.InternalSwap(&other->subtypes_);
  fieldnames_.InternalSwap(&other->fieldnames_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Type, scale_)
      + sizeof(Type::scale_)
      - PROTOBUF_FIELD_OFFSET(Type, kind_)>(
          reinterpret_cast<char*>(&kind_),
          reinterpret_cast<char*>(&other->kind_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Type::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_orc_5fwrap_2eproto_getter, &descriptor_table_orc_5fwrap_2eproto_once,
      file_level_metadata_orc_5fwrap_2eproto[0]);
}

// ===================================================================

class Field::_Internal {
 public:
  using HasBits = decltype(std::declval<Field>()._has_bits_);
  static const ::orc_proto::Type& type(const Field* msg);
  static void set_has_type(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_i(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_value(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_length(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

const ::orc_proto::Type&
Field::_Internal::type(const Field* msg) {
  return *msg->type_;
}
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
  if (from._internal_has_type()) {
    type_ = new ::orc_proto::Type(*from.type_);
  } else {
    type_ = nullptr;
  }
  ::memcpy(&i_, &from.i_,
    static_cast<size_t>(reinterpret_cast<char*>(&length_) -
    reinterpret_cast<char*>(&i_)) + sizeof(length_));
  // @@protoc_insertion_point(copy_constructor:orc_proto.Field)
}

inline void Field::SharedCtor() {
value_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  value_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&type_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&length_) -
    reinterpret_cast<char*>(&type_)) + sizeof(length_));
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
  if (this != internal_default_instance()) delete type_;
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
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      value_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(type_ != nullptr);
      type_->Clear();
    }
  }
  if (cached_has_bits & 0x0000000cu) {
    ::memset(&i_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&length_) -
        reinterpret_cast<char*>(&i_)) + sizeof(length_));
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
      // optional .orc_proto.Type type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_type(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 i = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_i(&has_bits);
          i_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 length = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_length(&has_bits);
          length_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes value = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
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

  // optional .orc_proto.Type type = 1;
  if (_internal_has_type()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::type(this),
        _Internal::type(this).GetCachedSize(), target, stream);
  }

  // optional int64 i = 2;
  if (_internal_has_i()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_i(), target);
  }

  // optional uint32 length = 3;
  if (_internal_has_length()) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(3, this->_internal_length(), target);
  }

  // optional bytes value = 4;
  if (_internal_has_value()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_value(), target);
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
  if (cached_has_bits & 0x0000000fu) {
    // optional bytes value = 4;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_value());
    }

    // optional .orc_proto.Type type = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *type_);
    }

    // optional int64 i = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_i());
    }

    // optional uint32 length = 3;
    if (cached_has_bits & 0x00000008u) {
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
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_value(from._internal_value());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_type()->::orc_proto::Type::MergeFrom(from._internal_type());
    }
    if (cached_has_bits & 0x00000004u) {
      i_ = from.i_;
    }
    if (cached_has_bits & 0x00000008u) {
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
      - PROTOBUF_FIELD_OFFSET(Field, type_)>(
          reinterpret_cast<char*>(&type_),
          reinterpret_cast<char*>(&other->type_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Field::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_orc_5fwrap_2eproto_getter, &descriptor_table_orc_5fwrap_2eproto_once,
      file_level_metadata_orc_5fwrap_2eproto[1]);
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
      &descriptor_table_orc_5fwrap_2eproto_getter, &descriptor_table_orc_5fwrap_2eproto_once,
      file_level_metadata_orc_5fwrap_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace orc_proto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::orc_proto::Type*
Arena::CreateMaybeMessage< ::orc_proto::Type >(Arena* arena) {
  return Arena::CreateMessageInternal< ::orc_proto::Type >(arena);
}
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