// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Client.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Client_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Client_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3008000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3008000 < PROTOBUF_MIN_PROTOC_VERSION
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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Client_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Client_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Client_2eproto;
namespace Client_Proto {
class ClientInfo;
class ClientInfoDefaultTypeInternal;
extern ClientInfoDefaultTypeInternal _ClientInfo_default_instance_;
}  // namespace Client_Proto
PROTOBUF_NAMESPACE_OPEN
template<> ::Client_Proto::ClientInfo* Arena::CreateMaybeMessage<::Client_Proto::ClientInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Client_Proto {

// ===================================================================

class ClientInfo :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Client_Proto.ClientInfo) */ {
 public:
  ClientInfo();
  virtual ~ClientInfo();

  ClientInfo(const ClientInfo& from);
  ClientInfo(ClientInfo&& from) noexcept
    : ClientInfo() {
    *this = ::std::move(from);
  }

  inline ClientInfo& operator=(const ClientInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ClientInfo& operator=(ClientInfo&& from) noexcept {
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
  static const ClientInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ClientInfo* internal_default_instance() {
    return reinterpret_cast<const ClientInfo*>(
               &_ClientInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(ClientInfo* other);
  friend void swap(ClientInfo& a, ClientInfo& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ClientInfo* New() const final {
    return CreateMaybeMessage<ClientInfo>(nullptr);
  }

  ClientInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ClientInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ClientInfo& from);
  void MergeFrom(const ClientInfo& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ClientInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Client_Proto.ClientInfo";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Client_2eproto);
    return ::descriptor_table_Client_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // bytes ClientId = 2;
  void clear_clientid();
  static const int kClientIdFieldNumber = 2;
  const std::string& clientid() const;
  void set_clientid(const std::string& value);
  void set_clientid(std::string&& value);
  void set_clientid(const char* value);
  void set_clientid(const void* value, size_t size);
  std::string* mutable_clientid();
  std::string* release_clientid();
  void set_allocated_clientid(std::string* clientid);

  // bytes ServeId = 3;
  void clear_serveid();
  static const int kServeIdFieldNumber = 3;
  const std::string& serveid() const;
  void set_serveid(const std::string& value);
  void set_serveid(std::string&& value);
  void set_serveid(const char* value);
  void set_serveid(const void* value, size_t size);
  std::string* mutable_serveid();
  std::string* release_serveid();
  void set_allocated_serveid(std::string* serveid);

  // bytes Data = 4;
  void clear_data();
  static const int kDataFieldNumber = 4;
  const std::string& data() const;
  void set_data(const std::string& value);
  void set_data(std::string&& value);
  void set_data(const char* value);
  void set_data(const void* value, size_t size);
  std::string* mutable_data();
  std::string* release_data();
  void set_allocated_data(std::string* data);

  // bytes sign = 5;
  void clear_sign();
  static const int kSignFieldNumber = 5;
  const std::string& sign() const;
  void set_sign(const std::string& value);
  void set_sign(std::string&& value);
  void set_sign(const char* value);
  void set_sign(const void* value, size_t size);
  std::string* mutable_sign();
  std::string* release_sign();
  void set_allocated_sign(std::string* sign);

  // int32 CmdType = 1;
  void clear_cmdtype();
  static const int kCmdTypeFieldNumber = 1;
  ::PROTOBUF_NAMESPACE_ID::int32 cmdtype() const;
  void set_cmdtype(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:Client_Proto.ClientInfo)
 private:
  class HasBitSetters;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr clientid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr serveid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr data_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sign_;
  ::PROTOBUF_NAMESPACE_ID::int32 cmdtype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Client_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ClientInfo

// int32 CmdType = 1;
inline void ClientInfo::clear_cmdtype() {
  cmdtype_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ClientInfo::cmdtype() const {
  // @@protoc_insertion_point(field_get:Client_Proto.ClientInfo.CmdType)
  return cmdtype_;
}
inline void ClientInfo::set_cmdtype(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  cmdtype_ = value;
  // @@protoc_insertion_point(field_set:Client_Proto.ClientInfo.CmdType)
}

// bytes ClientId = 2;
inline void ClientInfo::clear_clientid() {
  clientid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ClientInfo::clientid() const {
  // @@protoc_insertion_point(field_get:Client_Proto.ClientInfo.ClientId)
  return clientid_.GetNoArena();
}
inline void ClientInfo::set_clientid(const std::string& value) {
  
  clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Client_Proto.ClientInfo.ClientId)
}
inline void ClientInfo::set_clientid(std::string&& value) {
  
  clientid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Client_Proto.ClientInfo.ClientId)
}
inline void ClientInfo::set_clientid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Client_Proto.ClientInfo.ClientId)
}
inline void ClientInfo::set_clientid(const void* value, size_t size) {
  
  clientid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Client_Proto.ClientInfo.ClientId)
}
inline std::string* ClientInfo::mutable_clientid() {
  
  // @@protoc_insertion_point(field_mutable:Client_Proto.ClientInfo.ClientId)
  return clientid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ClientInfo::release_clientid() {
  // @@protoc_insertion_point(field_release:Client_Proto.ClientInfo.ClientId)
  
  return clientid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ClientInfo::set_allocated_clientid(std::string* clientid) {
  if (clientid != nullptr) {
    
  } else {
    
  }
  clientid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), clientid);
  // @@protoc_insertion_point(field_set_allocated:Client_Proto.ClientInfo.ClientId)
}

// bytes ServeId = 3;
inline void ClientInfo::clear_serveid() {
  serveid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ClientInfo::serveid() const {
  // @@protoc_insertion_point(field_get:Client_Proto.ClientInfo.ServeId)
  return serveid_.GetNoArena();
}
inline void ClientInfo::set_serveid(const std::string& value) {
  
  serveid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Client_Proto.ClientInfo.ServeId)
}
inline void ClientInfo::set_serveid(std::string&& value) {
  
  serveid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Client_Proto.ClientInfo.ServeId)
}
inline void ClientInfo::set_serveid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  serveid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Client_Proto.ClientInfo.ServeId)
}
inline void ClientInfo::set_serveid(const void* value, size_t size) {
  
  serveid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Client_Proto.ClientInfo.ServeId)
}
inline std::string* ClientInfo::mutable_serveid() {
  
  // @@protoc_insertion_point(field_mutable:Client_Proto.ClientInfo.ServeId)
  return serveid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ClientInfo::release_serveid() {
  // @@protoc_insertion_point(field_release:Client_Proto.ClientInfo.ServeId)
  
  return serveid_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ClientInfo::set_allocated_serveid(std::string* serveid) {
  if (serveid != nullptr) {
    
  } else {
    
  }
  serveid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), serveid);
  // @@protoc_insertion_point(field_set_allocated:Client_Proto.ClientInfo.ServeId)
}

// bytes Data = 4;
inline void ClientInfo::clear_data() {
  data_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ClientInfo::data() const {
  // @@protoc_insertion_point(field_get:Client_Proto.ClientInfo.Data)
  return data_.GetNoArena();
}
inline void ClientInfo::set_data(const std::string& value) {
  
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Client_Proto.ClientInfo.Data)
}
inline void ClientInfo::set_data(std::string&& value) {
  
  data_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Client_Proto.ClientInfo.Data)
}
inline void ClientInfo::set_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Client_Proto.ClientInfo.Data)
}
inline void ClientInfo::set_data(const void* value, size_t size) {
  
  data_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Client_Proto.ClientInfo.Data)
}
inline std::string* ClientInfo::mutable_data() {
  
  // @@protoc_insertion_point(field_mutable:Client_Proto.ClientInfo.Data)
  return data_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ClientInfo::release_data() {
  // @@protoc_insertion_point(field_release:Client_Proto.ClientInfo.Data)
  
  return data_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ClientInfo::set_allocated_data(std::string* data) {
  if (data != nullptr) {
    
  } else {
    
  }
  data_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), data);
  // @@protoc_insertion_point(field_set_allocated:Client_Proto.ClientInfo.Data)
}

// bytes sign = 5;
inline void ClientInfo::clear_sign() {
  sign_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ClientInfo::sign() const {
  // @@protoc_insertion_point(field_get:Client_Proto.ClientInfo.sign)
  return sign_.GetNoArena();
}
inline void ClientInfo::set_sign(const std::string& value) {
  
  sign_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Client_Proto.ClientInfo.sign)
}
inline void ClientInfo::set_sign(std::string&& value) {
  
  sign_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:Client_Proto.ClientInfo.sign)
}
inline void ClientInfo::set_sign(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  sign_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Client_Proto.ClientInfo.sign)
}
inline void ClientInfo::set_sign(const void* value, size_t size) {
  
  sign_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Client_Proto.ClientInfo.sign)
}
inline std::string* ClientInfo::mutable_sign() {
  
  // @@protoc_insertion_point(field_mutable:Client_Proto.ClientInfo.sign)
  return sign_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ClientInfo::release_sign() {
  // @@protoc_insertion_point(field_release:Client_Proto.ClientInfo.sign)
  
  return sign_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ClientInfo::set_allocated_sign(std::string* sign) {
  if (sign != nullptr) {
    
  } else {
    
  }
  sign_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sign);
  // @@protoc_insertion_point(field_set_allocated:Client_Proto.ClientInfo.sign)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Client_Proto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Client_2eproto