// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tftp_update:srv/FirmwareUpdate.idl
// generated code does not contain a copyright notice
#include "tftp_update/srv/detail/firmware_update__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tftp_update/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tftp_update/srv/detail/firmware_update__struct.h"
#include "tftp_update/srv/detail/firmware_update__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // filename, host
#include "rosidl_runtime_c/string_functions.h"  // filename, host

// forward declare type support functions


using _FirmwareUpdate_Request__ros_msg_type = tftp_update__srv__FirmwareUpdate_Request;

static bool _FirmwareUpdate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FirmwareUpdate_Request__ros_msg_type * ros_message = static_cast<const _FirmwareUpdate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: will_update
  {
    cdr << ros_message->will_update;
  }

  // Field name: host
  {
    const rosidl_runtime_c__String * str = &ros_message->host;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: filename
  {
    const rosidl_runtime_c__String * str = &ros_message->filename;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _FirmwareUpdate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FirmwareUpdate_Request__ros_msg_type * ros_message = static_cast<_FirmwareUpdate_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: will_update
  {
    cdr >> ros_message->will_update;
  }

  // Field name: host
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->host.data) {
      rosidl_runtime_c__String__init(&ros_message->host);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->host,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'host'\n");
      return false;
    }
  }

  // Field name: filename
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->filename.data) {
      rosidl_runtime_c__String__init(&ros_message->filename);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->filename,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'filename'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tftp_update
size_t get_serialized_size_tftp_update__srv__FirmwareUpdate_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FirmwareUpdate_Request__ros_msg_type * ros_message = static_cast<const _FirmwareUpdate_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name will_update
  {
    size_t item_size = sizeof(ros_message->will_update);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name host
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->host.size + 1);
  // field.name filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->filename.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _FirmwareUpdate_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tftp_update__srv__FirmwareUpdate_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tftp_update
size_t max_serialized_size_tftp_update__srv__FirmwareUpdate_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: will_update
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: host
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: filename
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

static size_t _FirmwareUpdate_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tftp_update__srv__FirmwareUpdate_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FirmwareUpdate_Request = {
  "tftp_update::srv",
  "FirmwareUpdate_Request",
  _FirmwareUpdate_Request__cdr_serialize,
  _FirmwareUpdate_Request__cdr_deserialize,
  _FirmwareUpdate_Request__get_serialized_size,
  _FirmwareUpdate_Request__max_serialized_size
};

static rosidl_message_type_support_t _FirmwareUpdate_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FirmwareUpdate_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tftp_update, srv, FirmwareUpdate_Request)() {
  return &_FirmwareUpdate_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "tftp_update/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "tftp_update/srv/detail/firmware_update__struct.h"
// already included above
// #include "tftp_update/srv/detail/firmware_update__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _FirmwareUpdate_Response__ros_msg_type = tftp_update__srv__FirmwareUpdate_Response;

static bool _FirmwareUpdate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FirmwareUpdate_Response__ros_msg_type * ros_message = static_cast<const _FirmwareUpdate_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << ros_message->success;
  }

  return true;
}

static bool _FirmwareUpdate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FirmwareUpdate_Response__ros_msg_type * ros_message = static_cast<_FirmwareUpdate_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr >> ros_message->success;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tftp_update
size_t get_serialized_size_tftp_update__srv__FirmwareUpdate_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FirmwareUpdate_Response__ros_msg_type * ros_message = static_cast<const _FirmwareUpdate_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _FirmwareUpdate_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tftp_update__srv__FirmwareUpdate_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tftp_update
size_t max_serialized_size_tftp_update__srv__FirmwareUpdate_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _FirmwareUpdate_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_tftp_update__srv__FirmwareUpdate_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_FirmwareUpdate_Response = {
  "tftp_update::srv",
  "FirmwareUpdate_Response",
  _FirmwareUpdate_Response__cdr_serialize,
  _FirmwareUpdate_Response__cdr_deserialize,
  _FirmwareUpdate_Response__get_serialized_size,
  _FirmwareUpdate_Response__max_serialized_size
};

static rosidl_message_type_support_t _FirmwareUpdate_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FirmwareUpdate_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tftp_update, srv, FirmwareUpdate_Response)() {
  return &_FirmwareUpdate_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "tftp_update/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tftp_update/srv/firmware_update.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FirmwareUpdate__callbacks = {
  "tftp_update::srv",
  "FirmwareUpdate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tftp_update, srv, FirmwareUpdate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tftp_update, srv, FirmwareUpdate_Response)(),
};

static rosidl_service_type_support_t FirmwareUpdate__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FirmwareUpdate__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tftp_update, srv, FirmwareUpdate)() {
  return &FirmwareUpdate__handle;
}

#if defined(__cplusplus)
}
#endif
