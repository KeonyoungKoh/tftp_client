// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tftp_update:srv/FirmwareUpdate.idl
// generated code does not contain a copyright notice
#include "tftp_update/srv/detail/firmware_update__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `host`
// Member `filename`
#include "rosidl_runtime_c/string_functions.h"

bool
tftp_update__srv__FirmwareUpdate_Request__init(tftp_update__srv__FirmwareUpdate_Request * msg)
{
  if (!msg) {
    return false;
  }
  // will_update
  // host
  if (!rosidl_runtime_c__String__init(&msg->host)) {
    tftp_update__srv__FirmwareUpdate_Request__fini(msg);
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__init(&msg->filename)) {
    tftp_update__srv__FirmwareUpdate_Request__fini(msg);
    return false;
  }
  return true;
}

void
tftp_update__srv__FirmwareUpdate_Request__fini(tftp_update__srv__FirmwareUpdate_Request * msg)
{
  if (!msg) {
    return;
  }
  // will_update
  // host
  rosidl_runtime_c__String__fini(&msg->host);
  // filename
  rosidl_runtime_c__String__fini(&msg->filename);
}

tftp_update__srv__FirmwareUpdate_Request *
tftp_update__srv__FirmwareUpdate_Request__create()
{
  tftp_update__srv__FirmwareUpdate_Request * msg = (tftp_update__srv__FirmwareUpdate_Request *)malloc(sizeof(tftp_update__srv__FirmwareUpdate_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tftp_update__srv__FirmwareUpdate_Request));
  bool success = tftp_update__srv__FirmwareUpdate_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tftp_update__srv__FirmwareUpdate_Request__destroy(tftp_update__srv__FirmwareUpdate_Request * msg)
{
  if (msg) {
    tftp_update__srv__FirmwareUpdate_Request__fini(msg);
  }
  free(msg);
}


bool
tftp_update__srv__FirmwareUpdate_Request__Sequence__init(tftp_update__srv__FirmwareUpdate_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tftp_update__srv__FirmwareUpdate_Request * data = NULL;
  if (size) {
    data = (tftp_update__srv__FirmwareUpdate_Request *)calloc(size, sizeof(tftp_update__srv__FirmwareUpdate_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tftp_update__srv__FirmwareUpdate_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tftp_update__srv__FirmwareUpdate_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tftp_update__srv__FirmwareUpdate_Request__Sequence__fini(tftp_update__srv__FirmwareUpdate_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tftp_update__srv__FirmwareUpdate_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tftp_update__srv__FirmwareUpdate_Request__Sequence *
tftp_update__srv__FirmwareUpdate_Request__Sequence__create(size_t size)
{
  tftp_update__srv__FirmwareUpdate_Request__Sequence * array = (tftp_update__srv__FirmwareUpdate_Request__Sequence *)malloc(sizeof(tftp_update__srv__FirmwareUpdate_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tftp_update__srv__FirmwareUpdate_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tftp_update__srv__FirmwareUpdate_Request__Sequence__destroy(tftp_update__srv__FirmwareUpdate_Request__Sequence * array)
{
  if (array) {
    tftp_update__srv__FirmwareUpdate_Request__Sequence__fini(array);
  }
  free(array);
}


bool
tftp_update__srv__FirmwareUpdate_Response__init(tftp_update__srv__FirmwareUpdate_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
tftp_update__srv__FirmwareUpdate_Response__fini(tftp_update__srv__FirmwareUpdate_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

tftp_update__srv__FirmwareUpdate_Response *
tftp_update__srv__FirmwareUpdate_Response__create()
{
  tftp_update__srv__FirmwareUpdate_Response * msg = (tftp_update__srv__FirmwareUpdate_Response *)malloc(sizeof(tftp_update__srv__FirmwareUpdate_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tftp_update__srv__FirmwareUpdate_Response));
  bool success = tftp_update__srv__FirmwareUpdate_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tftp_update__srv__FirmwareUpdate_Response__destroy(tftp_update__srv__FirmwareUpdate_Response * msg)
{
  if (msg) {
    tftp_update__srv__FirmwareUpdate_Response__fini(msg);
  }
  free(msg);
}


bool
tftp_update__srv__FirmwareUpdate_Response__Sequence__init(tftp_update__srv__FirmwareUpdate_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tftp_update__srv__FirmwareUpdate_Response * data = NULL;
  if (size) {
    data = (tftp_update__srv__FirmwareUpdate_Response *)calloc(size, sizeof(tftp_update__srv__FirmwareUpdate_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tftp_update__srv__FirmwareUpdate_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tftp_update__srv__FirmwareUpdate_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tftp_update__srv__FirmwareUpdate_Response__Sequence__fini(tftp_update__srv__FirmwareUpdate_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tftp_update__srv__FirmwareUpdate_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tftp_update__srv__FirmwareUpdate_Response__Sequence *
tftp_update__srv__FirmwareUpdate_Response__Sequence__create(size_t size)
{
  tftp_update__srv__FirmwareUpdate_Response__Sequence * array = (tftp_update__srv__FirmwareUpdate_Response__Sequence *)malloc(sizeof(tftp_update__srv__FirmwareUpdate_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tftp_update__srv__FirmwareUpdate_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tftp_update__srv__FirmwareUpdate_Response__Sequence__destroy(tftp_update__srv__FirmwareUpdate_Response__Sequence * array)
{
  if (array) {
    tftp_update__srv__FirmwareUpdate_Response__Sequence__fini(array);
  }
  free(array);
}
