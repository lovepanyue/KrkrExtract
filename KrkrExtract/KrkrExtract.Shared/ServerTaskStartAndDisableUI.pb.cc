// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerTaskStartAndDisableUI.proto

#include "ServerTaskStartAndDisableUI.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
class ServerTaskStartAndDisableUIDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ServerTaskStartAndDisableUI> _instance;
} _ServerTaskStartAndDisableUI_default_instance_;
static void InitDefaultsscc_info_ServerTaskStartAndDisableUI_ServerTaskStartAndDisableUI_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_ServerTaskStartAndDisableUI_default_instance_;
    new (ptr) ::ServerTaskStartAndDisableUI();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ServerTaskStartAndDisableUI::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ServerTaskStartAndDisableUI_ServerTaskStartAndDisableUI_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ServerTaskStartAndDisableUI_ServerTaskStartAndDisableUI_2eproto}, {}};


// ===================================================================

void ServerTaskStartAndDisableUI::InitAsDefaultInstance() {
}
class ServerTaskStartAndDisableUI::_Internal {
 public:
};

ServerTaskStartAndDisableUI::ServerTaskStartAndDisableUI()
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ServerTaskStartAndDisableUI)
}
ServerTaskStartAndDisableUI::ServerTaskStartAndDisableUI(const ServerTaskStartAndDisableUI& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  sequenceid_ = from.sequenceid_;
  // @@protoc_insertion_point(copy_constructor:ServerTaskStartAndDisableUI)
}

void ServerTaskStartAndDisableUI::SharedCtor() {
  sequenceid_ = PROTOBUF_ULONGLONG(0);
}

ServerTaskStartAndDisableUI::~ServerTaskStartAndDisableUI() {
  // @@protoc_insertion_point(destructor:ServerTaskStartAndDisableUI)
  SharedDtor();
}

void ServerTaskStartAndDisableUI::SharedDtor() {
}

void ServerTaskStartAndDisableUI::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ServerTaskStartAndDisableUI& ServerTaskStartAndDisableUI::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ServerTaskStartAndDisableUI_ServerTaskStartAndDisableUI_2eproto.base);
  return *internal_default_instance();
}


void ServerTaskStartAndDisableUI::Clear() {
// @@protoc_insertion_point(message_clear_start:ServerTaskStartAndDisableUI)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  sequenceid_ = PROTOBUF_ULONGLONG(0);
  _internal_metadata_.Clear();
}

const char* ServerTaskStartAndDisableUI::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // uint64 SequenceId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          sequenceid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ServerTaskStartAndDisableUI::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ServerTaskStartAndDisableUI)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // uint64 SequenceId = 1;
  if (this->sequenceid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(1, this->_internal_sequenceid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields().data(),
        static_cast<int>(_internal_metadata_.unknown_fields().size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ServerTaskStartAndDisableUI)
  return target;
}

size_t ServerTaskStartAndDisableUI::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ServerTaskStartAndDisableUI)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint64 SequenceId = 1;
  if (this->sequenceid() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_sequenceid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields().size();
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ServerTaskStartAndDisableUI::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ServerTaskStartAndDisableUI*>(
      &from));
}

void ServerTaskStartAndDisableUI::MergeFrom(const ServerTaskStartAndDisableUI& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ServerTaskStartAndDisableUI)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.sequenceid() != 0) {
    _internal_set_sequenceid(from._internal_sequenceid());
  }
}

void ServerTaskStartAndDisableUI::CopyFrom(const ServerTaskStartAndDisableUI& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ServerTaskStartAndDisableUI)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerTaskStartAndDisableUI::IsInitialized() const {
  return true;
}

void ServerTaskStartAndDisableUI::InternalSwap(ServerTaskStartAndDisableUI* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(sequenceid_, other->sequenceid_);
}

std::string ServerTaskStartAndDisableUI::GetTypeName() const {
  return "ServerTaskStartAndDisableUI";
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ServerTaskStartAndDisableUI* Arena::CreateMaybeMessage< ::ServerTaskStartAndDisableUI >(Arena* arena) {
  return Arena::CreateInternal< ::ServerTaskStartAndDisableUI >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
