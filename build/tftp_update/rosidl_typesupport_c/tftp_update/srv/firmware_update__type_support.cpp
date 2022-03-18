// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from tftp_update:srv/FirmwareUpdate.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tftp_update/msg/rosidl_typesupport_c__visibility_control.h"
#include "tftp_update/srv/detail/firmware_update__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tftp_update
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _FirmwareUpdate_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FirmwareUpdate_Request_type_support_ids_t;

static const _FirmwareUpdate_Request_type_support_ids_t _FirmwareUpdate_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FirmwareUpdate_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FirmwareUpdate_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FirmwareUpdate_Request_type_support_symbol_names_t _FirmwareUpdate_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tftp_update, srv, FirmwareUpdate_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tftp_update, srv, FirmwareUpdate_Request)),
  }
};

typedef struct _FirmwareUpdate_Request_type_support_data_t
{
  void * data[2];
} _FirmwareUpdate_Request_type_support_data_t;

static _FirmwareUpdate_Request_type_support_data_t _FirmwareUpdate_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FirmwareUpdate_Request_message_typesupport_map = {
  2,
  "tftp_update",
  &_FirmwareUpdate_Request_message_typesupport_ids.typesupport_identifier[0],
  &_FirmwareUpdate_Request_message_typesupport_symbol_names.symbol_name[0],
  &_FirmwareUpdate_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FirmwareUpdate_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FirmwareUpdate_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tftp_update

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_tftp_update
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tftp_update, srv, FirmwareUpdate_Request)() {
  return &::tftp_update::srv::rosidl_typesupport_c::FirmwareUpdate_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "tftp_update/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "tftp_update/srv/detail/firmware_update__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tftp_update
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _FirmwareUpdate_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FirmwareUpdate_Response_type_support_ids_t;

static const _FirmwareUpdate_Response_type_support_ids_t _FirmwareUpdate_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FirmwareUpdate_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FirmwareUpdate_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FirmwareUpdate_Response_type_support_symbol_names_t _FirmwareUpdate_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tftp_update, srv, FirmwareUpdate_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tftp_update, srv, FirmwareUpdate_Response)),
  }
};

typedef struct _FirmwareUpdate_Response_type_support_data_t
{
  void * data[2];
} _FirmwareUpdate_Response_type_support_data_t;

static _FirmwareUpdate_Response_type_support_data_t _FirmwareUpdate_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FirmwareUpdate_Response_message_typesupport_map = {
  2,
  "tftp_update",
  &_FirmwareUpdate_Response_message_typesupport_ids.typesupport_identifier[0],
  &_FirmwareUpdate_Response_message_typesupport_symbol_names.symbol_name[0],
  &_FirmwareUpdate_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t FirmwareUpdate_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FirmwareUpdate_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tftp_update

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_tftp_update
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tftp_update, srv, FirmwareUpdate_Response)() {
  return &::tftp_update::srv::rosidl_typesupport_c::FirmwareUpdate_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "tftp_update/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace tftp_update
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _FirmwareUpdate_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _FirmwareUpdate_type_support_ids_t;

static const _FirmwareUpdate_type_support_ids_t _FirmwareUpdate_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _FirmwareUpdate_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _FirmwareUpdate_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _FirmwareUpdate_type_support_symbol_names_t _FirmwareUpdate_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tftp_update, srv, FirmwareUpdate)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tftp_update, srv, FirmwareUpdate)),
  }
};

typedef struct _FirmwareUpdate_type_support_data_t
{
  void * data[2];
} _FirmwareUpdate_type_support_data_t;

static _FirmwareUpdate_type_support_data_t _FirmwareUpdate_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _FirmwareUpdate_service_typesupport_map = {
  2,
  "tftp_update",
  &_FirmwareUpdate_service_typesupport_ids.typesupport_identifier[0],
  &_FirmwareUpdate_service_typesupport_symbol_names.symbol_name[0],
  &_FirmwareUpdate_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t FirmwareUpdate_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_FirmwareUpdate_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace tftp_update

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_tftp_update
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, tftp_update, srv, FirmwareUpdate)() {
  return &::tftp_update::srv::rosidl_typesupport_c::FirmwareUpdate_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
