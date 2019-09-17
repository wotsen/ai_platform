// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: in_header.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_in_5fheader_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_in_5fheader_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_in_5fheader_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_in_5fheader_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_in_5fheader_2eproto;
namespace insider {
namespace sdk {
class Header;
class HeaderDefaultTypeInternal;
extern HeaderDefaultTypeInternal _Header_default_instance_;
class Host;
class HostDefaultTypeInternal;
extern HostDefaultTypeInternal _Host_default_instance_;
}  // namespace sdk
}  // namespace insider
PROTOBUF_NAMESPACE_OPEN
template<> ::insider::sdk::Header* Arena::CreateMaybeMessage<::insider::sdk::Header>(Arena*);
template<> ::insider::sdk::Host* Arena::CreateMaybeMessage<::insider::sdk::Host>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace insider {
namespace sdk {

enum TransProto : int {
  ARP = 0,
  TCP = 1,
  UDP = 2,
  TransProto_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  TransProto_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool TransProto_IsValid(int value);
constexpr TransProto TransProto_MIN = ARP;
constexpr TransProto TransProto_MAX = UDP;
constexpr int TransProto_ARRAYSIZE = TransProto_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TransProto_descriptor();
template<typename T>
inline const std::string& TransProto_Name(T enum_t_value) {
  static_assert(::std::is_same<T, TransProto>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function TransProto_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    TransProto_descriptor(), enum_t_value);
}
inline bool TransProto_Parse(
    const std::string& name, TransProto* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<TransProto>(
    TransProto_descriptor(), name, value);
}
enum DataProto : int {
  DATA_UPGRADE = 0,
  DATA_PARA_OPERATION = 1,
  DATA_ALARM = 2,
  DATA_HEART_BEAT = 3,
  DATA_AI = 4,
  DATA_PICTURE = 5,
  DataProto_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  DataProto_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool DataProto_IsValid(int value);
constexpr DataProto DataProto_MIN = DATA_UPGRADE;
constexpr DataProto DataProto_MAX = DATA_PICTURE;
constexpr int DataProto_ARRAYSIZE = DataProto_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DataProto_descriptor();
template<typename T>
inline const std::string& DataProto_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DataProto>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DataProto_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    DataProto_descriptor(), enum_t_value);
}
inline bool DataProto_Parse(
    const std::string& name, DataProto* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<DataProto>(
    DataProto_descriptor(), name, value);
}
// ===================================================================

class Host :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:insider.sdk.Host) */ {
 public:
  Host();
  virtual ~Host();

  Host(const Host& from);
  Host(Host&& from) noexcept
    : Host() {
    *this = ::std::move(from);
  }

  inline Host& operator=(const Host& from) {
    CopyFrom(from);
    return *this;
  }
  inline Host& operator=(Host&& from) noexcept {
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
  static const Host& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Host* internal_default_instance() {
    return reinterpret_cast<const Host*>(
               &_Host_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Host& a, Host& b) {
    a.Swap(&b);
  }
  inline void Swap(Host* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Host* New() const final {
    return CreateMaybeMessage<Host>(nullptr);
  }

  Host* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Host>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Host& from);
  void MergeFrom(const Host& from);
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
  void InternalSwap(Host* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "insider.sdk.Host";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_in_5fheader_2eproto);
    return ::descriptor_table_in_5fheader_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIpv4FieldNumber = 2,
    kPortFieldNumber = 1,
  };
  // string ipv4 = 2;
  void clear_ipv4();
  const std::string& ipv4() const;
  void set_ipv4(const std::string& value);
  void set_ipv4(std::string&& value);
  void set_ipv4(const char* value);
  void set_ipv4(const char* value, size_t size);
  std::string* mutable_ipv4();
  std::string* release_ipv4();
  void set_allocated_ipv4(std::string* ipv4);
  private:
  const std::string& _internal_ipv4() const;
  void _internal_set_ipv4(const std::string& value);
  std::string* _internal_mutable_ipv4();
  public:

  // int32 port = 1;
  void clear_port();
  ::PROTOBUF_NAMESPACE_ID::int32 port() const;
  void set_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_port() const;
  void _internal_set_port(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:insider.sdk.Host)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ipv4_;
  ::PROTOBUF_NAMESPACE_ID::int32 port_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_in_5fheader_2eproto;
};
// -------------------------------------------------------------------

class Header :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:insider.sdk.Header) */ {
 public:
  Header();
  virtual ~Header();

  Header(const Header& from);
  Header(Header&& from) noexcept
    : Header() {
    *this = ::std::move(from);
  }

  inline Header& operator=(const Header& from) {
    CopyFrom(from);
    return *this;
  }
  inline Header& operator=(Header&& from) noexcept {
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
  static const Header& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Header* internal_default_instance() {
    return reinterpret_cast<const Header*>(
               &_Header_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Header& a, Header& b) {
    a.Swap(&b);
  }
  inline void Swap(Header* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Header* New() const final {
    return CreateMaybeMessage<Header>(nullptr);
  }

  Header* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Header>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Header& from);
  void MergeFrom(const Header& from);
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
  void InternalSwap(Header* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "insider.sdk.Header";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_in_5fheader_2eproto);
    return ::descriptor_table_in_5fheader_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHostFieldNumber = 4,
    kMsgMagicFieldNumber = 1,
    kPackLenFieldNumber = 2,
    kPackIdFieldNumber = 3,
    kTransProtoFieldNumber = 5,
    kDataProtoFieldNumber = 6,
  };
  // .insider.sdk.Host host = 4;
  bool has_host() const;
  private:
  bool _internal_has_host() const;
  public:
  void clear_host();
  const ::insider::sdk::Host& host() const;
  ::insider::sdk::Host* release_host();
  ::insider::sdk::Host* mutable_host();
  void set_allocated_host(::insider::sdk::Host* host);
  private:
  const ::insider::sdk::Host& _internal_host() const;
  ::insider::sdk::Host* _internal_mutable_host();
  public:

  // int64 msg_magic = 1;
  void clear_msg_magic();
  ::PROTOBUF_NAMESPACE_ID::int64 msg_magic() const;
  void set_msg_magic(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_msg_magic() const;
  void _internal_set_msg_magic(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 pack_len = 2;
  void clear_pack_len();
  ::PROTOBUF_NAMESPACE_ID::int64 pack_len() const;
  void set_pack_len(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_pack_len() const;
  void _internal_set_pack_len(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 pack_id = 3;
  void clear_pack_id();
  ::PROTOBUF_NAMESPACE_ID::int64 pack_id() const;
  void set_pack_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_pack_id() const;
  void _internal_set_pack_id(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // .insider.sdk.TransProto trans_proto = 5;
  void clear_trans_proto();
  ::insider::sdk::TransProto trans_proto() const;
  void set_trans_proto(::insider::sdk::TransProto value);
  private:
  ::insider::sdk::TransProto _internal_trans_proto() const;
  void _internal_set_trans_proto(::insider::sdk::TransProto value);
  public:

  // .insider.sdk.DataProto data_proto = 6;
  void clear_data_proto();
  ::insider::sdk::DataProto data_proto() const;
  void set_data_proto(::insider::sdk::DataProto value);
  private:
  ::insider::sdk::DataProto _internal_data_proto() const;
  void _internal_set_data_proto(::insider::sdk::DataProto value);
  public:

  // @@protoc_insertion_point(class_scope:insider.sdk.Header)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::insider::sdk::Host* host_;
  ::PROTOBUF_NAMESPACE_ID::int64 msg_magic_;
  ::PROTOBUF_NAMESPACE_ID::int64 pack_len_;
  ::PROTOBUF_NAMESPACE_ID::int64 pack_id_;
  int trans_proto_;
  int data_proto_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_in_5fheader_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Host

// int32 port = 1;
inline void Host::clear_port() {
  port_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Host::_internal_port() const {
  return port_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Host::port() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Host.port)
  return _internal_port();
}
inline void Host::_internal_set_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  port_ = value;
}
inline void Host::set_port(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_port(value);
  // @@protoc_insertion_point(field_set:insider.sdk.Host.port)
}

// string ipv4 = 2;
inline void Host::clear_ipv4() {
  ipv4_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Host::ipv4() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Host.ipv4)
  return _internal_ipv4();
}
inline void Host::set_ipv4(const std::string& value) {
  _internal_set_ipv4(value);
  // @@protoc_insertion_point(field_set:insider.sdk.Host.ipv4)
}
inline std::string* Host::mutable_ipv4() {
  // @@protoc_insertion_point(field_mutable:insider.sdk.Host.ipv4)
  return _internal_mutable_ipv4();
}
inline const std::string& Host::_internal_ipv4() const {
  return ipv4_.GetNoArena();
}
inline void Host::_internal_set_ipv4(const std::string& value) {
  
  ipv4_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Host::set_ipv4(std::string&& value) {
  
  ipv4_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:insider.sdk.Host.ipv4)
}
inline void Host::set_ipv4(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  ipv4_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:insider.sdk.Host.ipv4)
}
inline void Host::set_ipv4(const char* value, size_t size) {
  
  ipv4_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:insider.sdk.Host.ipv4)
}
inline std::string* Host::_internal_mutable_ipv4() {
  
  return ipv4_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Host::release_ipv4() {
  // @@protoc_insertion_point(field_release:insider.sdk.Host.ipv4)
  
  return ipv4_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Host::set_allocated_ipv4(std::string* ipv4) {
  if (ipv4 != nullptr) {
    
  } else {
    
  }
  ipv4_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ipv4);
  // @@protoc_insertion_point(field_set_allocated:insider.sdk.Host.ipv4)
}

// -------------------------------------------------------------------

// Header

// int64 msg_magic = 1;
inline void Header::clear_msg_magic() {
  msg_magic_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Header::_internal_msg_magic() const {
  return msg_magic_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Header::msg_magic() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Header.msg_magic)
  return _internal_msg_magic();
}
inline void Header::_internal_set_msg_magic(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  msg_magic_ = value;
}
inline void Header::set_msg_magic(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_msg_magic(value);
  // @@protoc_insertion_point(field_set:insider.sdk.Header.msg_magic)
}

// int64 pack_len = 2;
inline void Header::clear_pack_len() {
  pack_len_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Header::_internal_pack_len() const {
  return pack_len_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Header::pack_len() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Header.pack_len)
  return _internal_pack_len();
}
inline void Header::_internal_set_pack_len(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  pack_len_ = value;
}
inline void Header::set_pack_len(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_pack_len(value);
  // @@protoc_insertion_point(field_set:insider.sdk.Header.pack_len)
}

// int64 pack_id = 3;
inline void Header::clear_pack_id() {
  pack_id_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Header::_internal_pack_id() const {
  return pack_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Header::pack_id() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Header.pack_id)
  return _internal_pack_id();
}
inline void Header::_internal_set_pack_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  pack_id_ = value;
}
inline void Header::set_pack_id(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_pack_id(value);
  // @@protoc_insertion_point(field_set:insider.sdk.Header.pack_id)
}

// .insider.sdk.Host host = 4;
inline bool Header::_internal_has_host() const {
  return this != internal_default_instance() && host_ != nullptr;
}
inline bool Header::has_host() const {
  return _internal_has_host();
}
inline void Header::clear_host() {
  if (GetArenaNoVirtual() == nullptr && host_ != nullptr) {
    delete host_;
  }
  host_ = nullptr;
}
inline const ::insider::sdk::Host& Header::_internal_host() const {
  const ::insider::sdk::Host* p = host_;
  return p != nullptr ? *p : *reinterpret_cast<const ::insider::sdk::Host*>(
      &::insider::sdk::_Host_default_instance_);
}
inline const ::insider::sdk::Host& Header::host() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Header.host)
  return _internal_host();
}
inline ::insider::sdk::Host* Header::release_host() {
  // @@protoc_insertion_point(field_release:insider.sdk.Header.host)
  
  ::insider::sdk::Host* temp = host_;
  host_ = nullptr;
  return temp;
}
inline ::insider::sdk::Host* Header::_internal_mutable_host() {
  
  if (host_ == nullptr) {
    auto* p = CreateMaybeMessage<::insider::sdk::Host>(GetArenaNoVirtual());
    host_ = p;
  }
  return host_;
}
inline ::insider::sdk::Host* Header::mutable_host() {
  // @@protoc_insertion_point(field_mutable:insider.sdk.Header.host)
  return _internal_mutable_host();
}
inline void Header::set_allocated_host(::insider::sdk::Host* host) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete host_;
  }
  if (host) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      host = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, host, submessage_arena);
    }
    
  } else {
    
  }
  host_ = host;
  // @@protoc_insertion_point(field_set_allocated:insider.sdk.Header.host)
}

// .insider.sdk.TransProto trans_proto = 5;
inline void Header::clear_trans_proto() {
  trans_proto_ = 0;
}
inline ::insider::sdk::TransProto Header::_internal_trans_proto() const {
  return static_cast< ::insider::sdk::TransProto >(trans_proto_);
}
inline ::insider::sdk::TransProto Header::trans_proto() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Header.trans_proto)
  return _internal_trans_proto();
}
inline void Header::_internal_set_trans_proto(::insider::sdk::TransProto value) {
  
  trans_proto_ = value;
}
inline void Header::set_trans_proto(::insider::sdk::TransProto value) {
  _internal_set_trans_proto(value);
  // @@protoc_insertion_point(field_set:insider.sdk.Header.trans_proto)
}

// .insider.sdk.DataProto data_proto = 6;
inline void Header::clear_data_proto() {
  data_proto_ = 0;
}
inline ::insider::sdk::DataProto Header::_internal_data_proto() const {
  return static_cast< ::insider::sdk::DataProto >(data_proto_);
}
inline ::insider::sdk::DataProto Header::data_proto() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Header.data_proto)
  return _internal_data_proto();
}
inline void Header::_internal_set_data_proto(::insider::sdk::DataProto value) {
  
  data_proto_ = value;
}
inline void Header::set_data_proto(::insider::sdk::DataProto value) {
  _internal_set_data_proto(value);
  // @@protoc_insertion_point(field_set:insider.sdk.Header.data_proto)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sdk
}  // namespace insider

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::insider::sdk::TransProto> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::insider::sdk::TransProto>() {
  return ::insider::sdk::TransProto_descriptor();
}
template <> struct is_proto_enum< ::insider::sdk::DataProto> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::insider::sdk::DataProto>() {
  return ::insider::sdk::DataProto_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_in_5fheader_2eproto
