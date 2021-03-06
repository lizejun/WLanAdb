// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "message.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace wlanadb {
namespace data {

void protobuf_ShutdownFile_message_2eproto() {
  delete Message::default_instance_;
}

void protobuf_AddDesc_message_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::com::wlanadb::data::protobuf_AddDesc_client_2eproto();
  Message::default_instance_ = new Message();
  Message::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_message_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_message_2eproto {
  StaticDescriptorInitializer_message_2eproto() {
    protobuf_AddDesc_message_2eproto();
  }
} static_descriptor_initializer_message_2eproto_;


// ===================================================================

bool Message_Type_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Message_Type Message::REQEST;
const Message_Type Message::RESPONSE;
const Message_Type Message::Type_MIN;
const Message_Type Message::Type_MAX;
const int Message::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Message::kTypeFieldNumber;
const int Message::kClientFieldNumber;
#endif  // !_MSC_VER

Message::Message()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void Message::InitAsDefaultInstance() {
  client_ = const_cast< ::com::wlanadb::data::Client*>(&::com::wlanadb::data::Client::default_instance());
}

Message::Message(const Message& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void Message::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  client_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Message::~Message() {
  SharedDtor();
}

void Message::SharedDtor() {
  if (this != default_instance_) {
    delete client_;
  }
}

void Message::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const Message& Message::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_2eproto();  return *default_instance_;
}

Message* Message::default_instance_ = NULL;

Message* Message::New() const {
  return new Message;
}

void Message::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
    if (has_client()) {
      if (client_ != NULL) client_->::com::wlanadb::data::Client::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool Message::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .com.wlanadb.data.Message.Type type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::com::wlanadb::data::Message_Type_IsValid(value)) {
            set_type(static_cast< ::com::wlanadb::data::Message_Type >(value));
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_client;
        break;
      }
      
      // optional .com.wlanadb.data.Client client = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_client:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_client()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Message::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .com.wlanadb.data.Message.Type type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }
  
  // optional .com.wlanadb.data.Client client = 2;
  if (has_client()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, this->client(), output);
  }
  
}

int Message::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .com.wlanadb.data.Message.Type type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }
    
    // optional .com.wlanadb.data.Client client = 2;
    if (has_client()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->client());
    }
    
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Message::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const Message*>(&from));
}

void Message::MergeFrom(const Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_client()) {
      mutable_client()->::com::wlanadb::data::Client::MergeFrom(from.client());
    }
  }
}

void Message::CopyFrom(const Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Message::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  if (has_client()) {
    if (!this->client().IsInitialized()) return false;
  }
  return true;
}

void Message::Swap(Message* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(client_, other->client_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string Message::GetTypeName() const {
  return "com.wlanadb.data.Message";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace data
}  // namespace wlanadb
}  // namespace com

// @@protoc_insertion_point(global_scope)
