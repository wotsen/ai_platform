// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: in_sdk.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_in_5fsdk_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_in_5fsdk_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "in_sdk_header.pb.h"
#include "in_sdk_body.pb.h"
#include "in_sdk_footer.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_in_5fsdk_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_in_5fsdk_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_in_5fsdk_2eproto;
namespace insider {
namespace sdk {
class Sdk;
class SdkDefaultTypeInternal;
extern SdkDefaultTypeInternal _Sdk_default_instance_;
}  // namespace sdk
}  // namespace insider
PROTOBUF_NAMESPACE_OPEN
template<> ::insider::sdk::Sdk* Arena::CreateMaybeMessage<::insider::sdk::Sdk>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace insider {
namespace sdk {

// ===================================================================

class Sdk :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:insider.sdk.Sdk) */ {
 public:
  Sdk();
  virtual ~Sdk();

  Sdk(const Sdk& from);
  Sdk(Sdk&& from) noexcept
    : Sdk() {
    *this = ::std::move(from);
  }

  inline Sdk& operator=(const Sdk& from) {
    CopyFrom(from);
    return *this;
  }
  inline Sdk& operator=(Sdk&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Sdk& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Sdk* internal_default_instance() {
    return reinterpret_cast<const Sdk*>(
               &_Sdk_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Sdk& a, Sdk& b) {
    a.Swap(&b);
  }
  inline void Swap(Sdk* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Sdk* New() const final {
    return CreateMaybeMessage<Sdk>(nullptr);
  }

  Sdk* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Sdk>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Sdk& from);
  void MergeFrom(const Sdk& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Sdk* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "insider.sdk.Sdk";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_in_5fsdk_2eproto);
    return ::descriptor_table_in_5fsdk_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kBodyFieldNumber = 2,
    kFooterFieldNumber = 3,
  };
  // .insider.sdk.Header header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::insider::sdk::Header& header() const;
  ::insider::sdk::Header* release_header();
  ::insider::sdk::Header* mutable_header();
  void set_allocated_header(::insider::sdk::Header* header);
  private:
  const ::insider::sdk::Header& _internal_header() const;
  ::insider::sdk::Header* _internal_mutable_header();
  public:

  // .insider.sdk.Body body = 2;
  bool has_body() const;
  private:
  bool _internal_has_body() const;
  public:
  void clear_body();
  const ::insider::sdk::Body& body() const;
  ::insider::sdk::Body* release_body();
  ::insider::sdk::Body* mutable_body();
  void set_allocated_body(::insider::sdk::Body* body);
  private:
  const ::insider::sdk::Body& _internal_body() const;
  ::insider::sdk::Body* _internal_mutable_body();
  public:

  // .insider.sdk.Footer footer = 3;
  bool has_footer() const;
  private:
  bool _internal_has_footer() const;
  public:
  void clear_footer();
  const ::insider::sdk::Footer& footer() const;
  ::insider::sdk::Footer* release_footer();
  ::insider::sdk::Footer* mutable_footer();
  void set_allocated_footer(::insider::sdk::Footer* footer);
  private:
  const ::insider::sdk::Footer& _internal_footer() const;
  ::insider::sdk::Footer* _internal_mutable_footer();
  public:

  // @@protoc_insertion_point(class_scope:insider.sdk.Sdk)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::insider::sdk::Header* header_;
  ::insider::sdk::Body* body_;
  ::insider::sdk::Footer* footer_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_in_5fsdk_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Sdk

// .insider.sdk.Header header = 1;
inline bool Sdk::_internal_has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline bool Sdk::has_header() const {
  return _internal_has_header();
}
inline const ::insider::sdk::Header& Sdk::_internal_header() const {
  const ::insider::sdk::Header* p = header_;
  return p != nullptr ? *p : *reinterpret_cast<const ::insider::sdk::Header*>(
      &::insider::sdk::_Header_default_instance_);
}
inline const ::insider::sdk::Header& Sdk::header() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Sdk.header)
  return _internal_header();
}
inline ::insider::sdk::Header* Sdk::release_header() {
  // @@protoc_insertion_point(field_release:insider.sdk.Sdk.header)
  
  ::insider::sdk::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::insider::sdk::Header* Sdk::_internal_mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::insider::sdk::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  return header_;
}
inline ::insider::sdk::Header* Sdk::mutable_header() {
  // @@protoc_insertion_point(field_mutable:insider.sdk.Sdk.header)
  return _internal_mutable_header();
}
inline void Sdk::set_allocated_header(::insider::sdk::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:insider.sdk.Sdk.header)
}

// .insider.sdk.Body body = 2;
inline bool Sdk::_internal_has_body() const {
  return this != internal_default_instance() && body_ != nullptr;
}
inline bool Sdk::has_body() const {
  return _internal_has_body();
}
inline const ::insider::sdk::Body& Sdk::_internal_body() const {
  const ::insider::sdk::Body* p = body_;
  return p != nullptr ? *p : *reinterpret_cast<const ::insider::sdk::Body*>(
      &::insider::sdk::_Body_default_instance_);
}
inline const ::insider::sdk::Body& Sdk::body() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Sdk.body)
  return _internal_body();
}
inline ::insider::sdk::Body* Sdk::release_body() {
  // @@protoc_insertion_point(field_release:insider.sdk.Sdk.body)
  
  ::insider::sdk::Body* temp = body_;
  body_ = nullptr;
  return temp;
}
inline ::insider::sdk::Body* Sdk::_internal_mutable_body() {
  
  if (body_ == nullptr) {
    auto* p = CreateMaybeMessage<::insider::sdk::Body>(GetArenaNoVirtual());
    body_ = p;
  }
  return body_;
}
inline ::insider::sdk::Body* Sdk::mutable_body() {
  // @@protoc_insertion_point(field_mutable:insider.sdk.Sdk.body)
  return _internal_mutable_body();
}
inline void Sdk::set_allocated_body(::insider::sdk::Body* body) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(body_);
  }
  if (body) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      body = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, body, submessage_arena);
    }
    
  } else {
    
  }
  body_ = body;
  // @@protoc_insertion_point(field_set_allocated:insider.sdk.Sdk.body)
}

// .insider.sdk.Footer footer = 3;
inline bool Sdk::_internal_has_footer() const {
  return this != internal_default_instance() && footer_ != nullptr;
}
inline bool Sdk::has_footer() const {
  return _internal_has_footer();
}
inline const ::insider::sdk::Footer& Sdk::_internal_footer() const {
  const ::insider::sdk::Footer* p = footer_;
  return p != nullptr ? *p : *reinterpret_cast<const ::insider::sdk::Footer*>(
      &::insider::sdk::_Footer_default_instance_);
}
inline const ::insider::sdk::Footer& Sdk::footer() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Sdk.footer)
  return _internal_footer();
}
inline ::insider::sdk::Footer* Sdk::release_footer() {
  // @@protoc_insertion_point(field_release:insider.sdk.Sdk.footer)
  
  ::insider::sdk::Footer* temp = footer_;
  footer_ = nullptr;
  return temp;
}
inline ::insider::sdk::Footer* Sdk::_internal_mutable_footer() {
  
  if (footer_ == nullptr) {
    auto* p = CreateMaybeMessage<::insider::sdk::Footer>(GetArenaNoVirtual());
    footer_ = p;
  }
  return footer_;
}
inline ::insider::sdk::Footer* Sdk::mutable_footer() {
  // @@protoc_insertion_point(field_mutable:insider.sdk.Sdk.footer)
  return _internal_mutable_footer();
}
inline void Sdk::set_allocated_footer(::insider::sdk::Footer* footer) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(footer_);
  }
  if (footer) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      footer = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, footer, submessage_arena);
    }
    
  } else {
    
  }
  footer_ = footer;
  // @@protoc_insertion_point(field_set_allocated:insider.sdk.Sdk.footer)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace sdk
}  // namespace insider

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_in_5fsdk_2eproto
