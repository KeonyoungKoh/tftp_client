// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tftp_update:srv/FirmwareUpdate.idl
// generated code does not contain a copyright notice
#include "tftp_update/srv/detail/firmware_update__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tftp_update/srv/detail/firmware_update__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tftp_update
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tftp_update
cdr_serialize(
  const tftp_update::srv::FirmwareUpdate_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: will_update
  cdr << ros_message.will_update;
  // Member: host
  cdr << ros_message.host;
  // Member: filename
  cdr << ros_message.filename;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tftp_update
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tftp_update::srv::FirmwareUpdate_Request & ros_message)
{
  // Member: will_update
  cdr >> ros_message.will_update;

  // Member: host
  cdr >> ros_message.host;

  // Member: filename
  cdr >> ros_message.filename;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tftp_update
get_serialized_size(
  const tftp_update::srv::FirmwareUpdate_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: will_update
  {
    size_t item_size = sizeof(ros_message.will_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: host
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.host.size() + 1);
  // Member: filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.filename.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tftp_update
max_serialized_size_FirmwareUpdate_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: will_update
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: host
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: filename
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _FirmwareUpdate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tftp_update::srv::FirmwareUpdate_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FirmwareUpdate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tftp_update::srv::FirmwareUpdate_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FirmwareUpdate_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tftp_update::srv::FirmwareUpdate_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FirmwareUpdate_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FirmwareUpdate_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _FirmwareUpdate_Request__callbacks = {
  "tftp_update::srv",
  "FirmwareUpdate_Request",
  _FirmwareUpdate_Request__cdr_serialize,
  _FirmwareUpdate_Request__cdr_deserialize,
  _FirmwareUpdate_Request__get_serialized_size,
  _FirmwareUpdate_Request__max_serialized_size
};

static rosidl_message_type_support_t _FirmwareUpdate_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FirmwareUpdate_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tftp_update

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tftp_update
const rosidl_message_type_support_t *
get_message_type_support_handle<tftp_update::srv::FirmwareUpdate_Request>()
{
  return &tftp_update::srv::typesupport_fastrtps_cpp::_FirmwareUpdate_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tftp_update, srv, FirmwareUpdate_Request)() {
  return &tftp_update::srv::typesupport_fastrtps_cpp::_FirmwareUpdate_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tftp_update
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tftp_update
cdr_serialize(
  const tftp_update::srv::FirmwareUpdate_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << ros_message.success;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tftp_update
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tftp_update::srv::FirmwareUpdate_Response & ros_message)
{
  // Member: success
  cdr >> ros_message.success;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tftp_update
get_serialized_size(
  const tftp_update::srv::FirmwareUpdate_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tftp_update
max_serialized_size_FirmwareUpdate_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _FirmwareUpdate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tftp_update::srv::FirmwareUpdate_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _FirmwareUpdate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tftp_update::srv::FirmwareUpdate_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _FirmwareUpdate_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tftp_update::srv::FirmwareUpdate_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _FirmwareUpdate_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_FirmwareUpdate_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _FirmwareUpdate_Response__callbacks = {
  "tftp_update::srv",
  "FirmwareUpdate_Response",
  _FirmwareUpdate_Response__cdr_serialize,
  _FirmwareUpdate_Response__cdr_deserialize,
  _FirmwareUpdate_Response__get_serialized_size,
  _FirmwareUpdate_Response__max_serialized_size
};

static rosidl_message_type_support_t _FirmwareUpdate_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FirmwareUpdate_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tftp_update

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tftp_update
const rosidl_message_type_support_t *
get_message_type_support_handle<tftp_update::srv::FirmwareUpdate_Response>()
{
  return &tftp_update::srv::typesupport_fastrtps_cpp::_FirmwareUpdate_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tftp_update, srv, FirmwareUpdate_Response)() {
  return &tftp_update::srv::typesupport_fastrtps_cpp::_FirmwareUpdate_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace tftp_update
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _FirmwareUpdate__callbacks = {
  "tftp_update::srv",
  "FirmwareUpdate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tftp_update, srv, FirmwareUpdate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tftp_update, srv, FirmwareUpdate_Response)(),
};

static rosidl_service_type_support_t _FirmwareUpdate__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_FirmwareUpdate__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace tftp_update

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tftp_update
const rosidl_service_type_support_t *
get_service_type_support_handle<tftp_update::srv::FirmwareUpdate>()
{
  return &tftp_update::srv::typesupport_fastrtps_cpp::_FirmwareUpdate__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tftp_update, srv, FirmwareUpdate)() {
  return &tftp_update::srv::typesupport_fastrtps_cpp::_FirmwareUpdate__handle;
}

#ifdef __cplusplus
}
#endif
