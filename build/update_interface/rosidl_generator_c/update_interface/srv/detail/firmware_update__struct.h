// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from update_interface:srv/FirmwareUpdate.idl
// generated code does not contain a copyright notice

#ifndef UPDATE_INTERFACE__SRV__DETAIL__FIRMWARE_UPDATE__STRUCT_H_
#define UPDATE_INTERFACE__SRV__DETAIL__FIRMWARE_UPDATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'host'
// Member 'filename'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/FirmwareUpdate in the package update_interface.
typedef struct update_interface__srv__FirmwareUpdate_Request
{
  int64_t will_update;
  rosidl_runtime_c__String host;
  rosidl_runtime_c__String filename;
} update_interface__srv__FirmwareUpdate_Request;

// Struct for a sequence of update_interface__srv__FirmwareUpdate_Request.
typedef struct update_interface__srv__FirmwareUpdate_Request__Sequence
{
  update_interface__srv__FirmwareUpdate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} update_interface__srv__FirmwareUpdate_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/FirmwareUpdate in the package update_interface.
typedef struct update_interface__srv__FirmwareUpdate_Response
{
  int64_t success;
} update_interface__srv__FirmwareUpdate_Response;

// Struct for a sequence of update_interface__srv__FirmwareUpdate_Response.
typedef struct update_interface__srv__FirmwareUpdate_Response__Sequence
{
  update_interface__srv__FirmwareUpdate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} update_interface__srv__FirmwareUpdate_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UPDATE_INTERFACE__SRV__DETAIL__FIRMWARE_UPDATE__STRUCT_H_
