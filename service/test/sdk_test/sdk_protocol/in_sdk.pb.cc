// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: in_sdk.proto

#include "in_sdk.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_in_5fsdk_5fbody_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Body_in_5fsdk_5fbody_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_in_5fsdk_5ffooter_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Footer_in_5fsdk_5ffooter_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_in_5fsdk_5fheader_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_Header_in_5fsdk_5fheader_2eproto;
namespace insider {
namespace sdk {
class SdkDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Sdk> _instance;
} _Sdk_default_instance_;
}  // namespace sdk
}  // namespace insider
static void InitDefaultsscc_info_Sdk_in_5fsdk_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::insider::sdk::_Sdk_default_instance_;
    new (ptr) ::insider::sdk::Sdk();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::insider::sdk::Sdk::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<3> scc_info_Sdk_in_5fsdk_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 3, 0, InitDefaultsscc_info_Sdk_in_5fsdk_2eproto}, {
      &scc_info_Header_in_5fsdk_5fheader_2eproto.base,
      &scc_info_Body_in_5fsdk_5fbody_2eproto.base,
      &scc_info_Footer_in_5fsdk_5ffooter_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_in_5fsdk_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_in_5fsdk_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_in_5fsdk_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_in_5fsdk_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::insider::sdk::Sdk, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::insider::sdk::Sdk, header_),
  PROTOBUF_FIELD_OFFSET(::insider::sdk::Sdk, body_),
  PROTOBUF_FIELD_OFFSET(::insider::sdk::Sdk, footer_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::insider::sdk::Sdk)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::insider::sdk::_Sdk_default_instance_),
};

const char descriptor_table_protodef_in_5fsdk_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014in_sdk.proto\022\013insider.sdk\032\023in_sdk_head"
  "er.proto\032\021in_sdk_body.proto\032\023in_sdk_foot"
  "er.proto\"p\n\003Sdk\022#\n\006header\030\001 \001(\0132\023.inside"
  "r.sdk.Header\022\037\n\004body\030\002 \001(\0132\021.insider.sdk"
  ".Body\022#\n\006footer\030\003 \001(\0132\023.insider.sdk.Foot"
  "erb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_in_5fsdk_2eproto_deps[3] = {
  &::descriptor_table_in_5fsdk_5fbody_2eproto,
  &::descriptor_table_in_5fsdk_5ffooter_2eproto,
  &::descriptor_table_in_5fsdk_5fheader_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_in_5fsdk_2eproto_sccs[1] = {
  &scc_info_Sdk_in_5fsdk_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_in_5fsdk_2eproto_once;
static bool descriptor_table_in_5fsdk_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_in_5fsdk_2eproto = {
  &descriptor_table_in_5fsdk_2eproto_initialized, descriptor_table_protodef_in_5fsdk_2eproto, "in_sdk.proto", 210,
  &descriptor_table_in_5fsdk_2eproto_once, descriptor_table_in_5fsdk_2eproto_sccs, descriptor_table_in_5fsdk_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_in_5fsdk_2eproto::offsets,
  file_level_metadata_in_5fsdk_2eproto, 1, file_level_enum_descriptors_in_5fsdk_2eproto, file_level_service_descriptors_in_5fsdk_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_in_5fsdk_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_in_5fsdk_2eproto), true);
namespace insider {
namespace sdk {

// ===================================================================

void Sdk::InitAsDefaultInstance() {
  ::insider::sdk::_Sdk_default_instance_._instance.get_mutable()->header_ = const_cast< ::insider::sdk::Header*>(
      ::insider::sdk::Header::internal_default_instance());
  ::insider::sdk::_Sdk_default_instance_._instance.get_mutable()->body_ = const_cast< ::insider::sdk::Body*>(
      ::insider::sdk::Body::internal_default_instance());
  ::insider::sdk::_Sdk_default_instance_._instance.get_mutable()->footer_ = const_cast< ::insider::sdk::Footer*>(
      ::insider::sdk::Footer::internal_default_instance());
}
class Sdk::_Internal {
 public:
  static const ::insider::sdk::Header& header(const Sdk* msg);
  static const ::insider::sdk::Body& body(const Sdk* msg);
  static const ::insider::sdk::Footer& footer(const Sdk* msg);
};

const ::insider::sdk::Header&
Sdk::_Internal::header(const Sdk* msg) {
  return *msg->header_;
}
const ::insider::sdk::Body&
Sdk::_Internal::body(const Sdk* msg) {
  return *msg->body_;
}
const ::insider::sdk::Footer&
Sdk::_Internal::footer(const Sdk* msg) {
  return *msg->footer_;
}
void Sdk::clear_header() {
  if (GetArenaNoVirtual() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
}
void Sdk::clear_body() {
  if (GetArenaNoVirtual() == nullptr && body_ != nullptr) {
    delete body_;
  }
  body_ = nullptr;
}
void Sdk::clear_footer() {
  if (GetArenaNoVirtual() == nullptr && footer_ != nullptr) {
    delete footer_;
  }
  footer_ = nullptr;
}
Sdk::Sdk()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:insider.sdk.Sdk)
}
Sdk::Sdk(const Sdk& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_header()) {
    header_ = new ::insider::sdk::Header(*from.header_);
  } else {
    header_ = nullptr;
  }
  if (from._internal_has_body()) {
    body_ = new ::insider::sdk::Body(*from.body_);
  } else {
    body_ = nullptr;
  }
  if (from._internal_has_footer()) {
    footer_ = new ::insider::sdk::Footer(*from.footer_);
  } else {
    footer_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:insider.sdk.Sdk)
}

void Sdk::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Sdk_in_5fsdk_2eproto.base);
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&footer_) -
      reinterpret_cast<char*>(&header_)) + sizeof(footer_));
}

Sdk::~Sdk() {
  // @@protoc_insertion_point(destructor:insider.sdk.Sdk)
  SharedDtor();
}

void Sdk::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete body_;
  if (this != internal_default_instance()) delete footer_;
}

void Sdk::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Sdk& Sdk::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Sdk_in_5fsdk_2eproto.base);
  return *internal_default_instance();
}


void Sdk::Clear() {
// @@protoc_insertion_point(message_clear_start:insider.sdk.Sdk)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && header_ != nullptr) {
    delete header_;
  }
  header_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && body_ != nullptr) {
    delete body_;
  }
  body_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && footer_ != nullptr) {
    delete footer_;
  }
  footer_ = nullptr;
  _internal_metadata_.Clear();
}

const char* Sdk::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .insider.sdk.Header header = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_header(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .insider.sdk.Body body = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_body(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .insider.sdk.Footer footer = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_footer(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Sdk::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:insider.sdk.Sdk)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .insider.sdk.Header header = 1;
  if (this->has_header()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, _Internal::header(this), target, stream);
  }

  // .insider.sdk.Body body = 2;
  if (this->has_body()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, _Internal::body(this), target, stream);
  }

  // .insider.sdk.Footer footer = 3;
  if (this->has_footer()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, _Internal::footer(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:insider.sdk.Sdk)
  return target;
}

size_t Sdk::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:insider.sdk.Sdk)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .insider.sdk.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .insider.sdk.Body body = 2;
  if (this->has_body()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *body_);
  }

  // .insider.sdk.Footer footer = 3;
  if (this->has_footer()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *footer_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Sdk::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:insider.sdk.Sdk)
  GOOGLE_DCHECK_NE(&from, this);
  const Sdk* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Sdk>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:insider.sdk.Sdk)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:insider.sdk.Sdk)
    MergeFrom(*source);
  }
}

void Sdk::MergeFrom(const Sdk& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:insider.sdk.Sdk)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    _internal_mutable_header()->::insider::sdk::Header::MergeFrom(from._internal_header());
  }
  if (from.has_body()) {
    _internal_mutable_body()->::insider::sdk::Body::MergeFrom(from._internal_body());
  }
  if (from.has_footer()) {
    _internal_mutable_footer()->::insider::sdk::Footer::MergeFrom(from._internal_footer());
  }
}

void Sdk::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:insider.sdk.Sdk)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sdk::CopyFrom(const Sdk& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:insider.sdk.Sdk)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sdk::IsInitialized() const {
  return true;
}

void Sdk::InternalSwap(Sdk* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(header_, other->header_);
  swap(body_, other->body_);
  swap(footer_, other->footer_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Sdk::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sdk
}  // namespace insider
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::insider::sdk::Sdk* Arena::CreateMaybeMessage< ::insider::sdk::Sdk >(Arena* arena) {
  return Arena::CreateInternal< ::insider::sdk::Sdk >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
