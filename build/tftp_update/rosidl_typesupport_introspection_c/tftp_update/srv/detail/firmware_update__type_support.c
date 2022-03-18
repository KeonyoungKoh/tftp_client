// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tftp_update:srv/FirmwareUpdate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tftp_update/srv/detail/firmware_update__rosidl_typesupport_introspection_c.h"
#include "tftp_update/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tftp_update/srv/detail/firmware_update__functions.h"
#include "tftp_update/srv/detail/firmware_update__struct.h"


// Include directives for member types
// Member `host`
// Member `filename`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void FirmwareUpdate_Request__rosidl_typesupport_introspection_c__FirmwareUpdate_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tftp_update__srv__FirmwareUpdate_Request__init(message_memory);
}

void FirmwareUpdate_Request__rosidl_typesupport_introspection_c__FirmwareUpdate_Request_fini_function(void * message_memory)
{
  tftp_update__srv__FirmwareUpdate_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FirmwareUpdate_Request__rosidl_typesupport_introspection_c__FirmwareUpdate_Request_message_member_array[3] = {
  {
    "will_update",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tftp_update__srv__FirmwareUpdate_Request, will_update),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "host",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tftp_update__srv__FirmwareUpdate_Request, host),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "filename",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tftp_update__srv__FirmwareUpdate_Request, filename),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FirmwareUpdate_Request__rosidl_typesupport_introspection_c__FirmwareUpdate_Request_message_members = {
  "tftp_update__srv",  // message namespace
  "FirmwareUpdate_Request",  // message name
  3,  // number of fields
  sizeof(tftp_update__srv__FirmwareUpdate_Request),
  FirmwareUpdate_Request__rosidl_typesupport_introspection_c__FirmwareUpdate_Request_message_member_array,  // message members
  FirmwareUpdate_Request__rosidl_typesupport_introspection_c__FirmwareUpdate_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  FirmwareUpdate_Request__rosidl_typesupport_introspection_c__FirmwareUpdate_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FirmwareUpdate_Request__rosidl_typesupport_introspection_c__FirmwareUpdate_Request_message_type_support_handle = {
  0,
  &FirmwareUpdate_Request__rosidl_typesupport_introspection_c__FirmwareUpdate_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tftp_update
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tftp_update, srv, FirmwareUpdate_Request)() {
  if (!FirmwareUpdate_Request__rosidl_typesupport_introspection_c__FirmwareUpdate_Request_message_type_support_handle.typesupport_identifier) {
    FirmwareUpdate_Request__rosidl_typesupport_introspection_c__FirmwareUpdate_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FirmwareUpdate_Request__rosidl_typesupport_introspection_c__FirmwareUpdate_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "tftp_update/srv/detail/firmware_update__rosidl_typesupport_introspection_c.h"
// already included above
// #include "tftp_update/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "tftp_update/srv/detail/firmware_update__functions.h"
// already included above
// #include "tftp_update/srv/detail/firmware_update__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void FirmwareUpdate_Response__rosidl_typesupport_introspection_c__FirmwareUpdate_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tftp_update__srv__FirmwareUpdate_Response__init(message_memory);
}

void FirmwareUpdate_Response__rosidl_typesupport_introspection_c__FirmwareUpdate_Response_fini_function(void * message_memory)
{
  tftp_update__srv__FirmwareUpdate_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember FirmwareUpdate_Response__rosidl_typesupport_introspection_c__FirmwareUpdate_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tftp_update__srv__FirmwareUpdate_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers FirmwareUpdate_Response__rosidl_typesupport_introspection_c__FirmwareUpdate_Response_message_members = {
  "tftp_update__srv",  // message namespace
  "FirmwareUpdate_Response",  // message name
  1,  // number of fields
  sizeof(tftp_update__srv__FirmwareUpdate_Response),
  FirmwareUpdate_Response__rosidl_typesupport_introspection_c__FirmwareUpdate_Response_message_member_array,  // message members
  FirmwareUpdate_Response__rosidl_typesupport_introspection_c__FirmwareUpdate_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  FirmwareUpdate_Response__rosidl_typesupport_introspection_c__FirmwareUpdate_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t FirmwareUpdate_Response__rosidl_typesupport_introspection_c__FirmwareUpdate_Response_message_type_support_handle = {
  0,
  &FirmwareUpdate_Response__rosidl_typesupport_introspection_c__FirmwareUpdate_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tftp_update
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tftp_update, srv, FirmwareUpdate_Response)() {
  if (!FirmwareUpdate_Response__rosidl_typesupport_introspection_c__FirmwareUpdate_Response_message_type_support_handle.typesupport_identifier) {
    FirmwareUpdate_Response__rosidl_typesupport_introspection_c__FirmwareUpdate_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &FirmwareUpdate_Response__rosidl_typesupport_introspection_c__FirmwareUpdate_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tftp_update/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "tftp_update/srv/detail/firmware_update__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers tftp_update__srv__detail__firmware_update__rosidl_typesupport_introspection_c__FirmwareUpdate_service_members = {
  "tftp_update__srv",  // service namespace
  "FirmwareUpdate",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // tftp_update__srv__detail__firmware_update__rosidl_typesupport_introspection_c__FirmwareUpdate_Request_message_type_support_handle,
  NULL  // response message
  // tftp_update__srv__detail__firmware_update__rosidl_typesupport_introspection_c__FirmwareUpdate_Response_message_type_support_handle
};

static rosidl_service_type_support_t tftp_update__srv__detail__firmware_update__rosidl_typesupport_introspection_c__FirmwareUpdate_service_type_support_handle = {
  0,
  &tftp_update__srv__detail__firmware_update__rosidl_typesupport_introspection_c__FirmwareUpdate_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tftp_update, srv, FirmwareUpdate_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tftp_update, srv, FirmwareUpdate_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tftp_update
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tftp_update, srv, FirmwareUpdate)() {
  if (!tftp_update__srv__detail__firmware_update__rosidl_typesupport_introspection_c__FirmwareUpdate_service_type_support_handle.typesupport_identifier) {
    tftp_update__srv__detail__firmware_update__rosidl_typesupport_introspection_c__FirmwareUpdate_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)tftp_update__srv__detail__firmware_update__rosidl_typesupport_introspection_c__FirmwareUpdate_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tftp_update, srv, FirmwareUpdate_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tftp_update, srv, FirmwareUpdate_Response)()->data;
  }

  return &tftp_update__srv__detail__firmware_update__rosidl_typesupport_introspection_c__FirmwareUpdate_service_type_support_handle;
}
