// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from update_interface:srv/FirmwareUpdate.idl
// generated code does not contain a copyright notice
#include "update_interface/srv/detail/firmware_update__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `host`
// Member `filename`
#include "rosidl_runtime_c/string_functions.h"

bool
update_interface__srv__FirmwareUpdate_Request__init(update_interface__srv__FirmwareUpdate_Request * msg)
{
  if (!msg) {
    return false;
  }
  // will_update
  // host
  if (!rosidl_runtime_c__String__init(&msg->host)) {
    update_interface__srv__FirmwareUpdate_Request__fini(msg);
    return false;
  }
  // filename
  if (!rosidl_runtime_c__String__init(&msg->filename)) {
    update_interface__srv__FirmwareUpdate_Request__fini(msg);
    return false;
  }
  return true;
}

void
update_interface__srv__FirmwareUpdate_Request__fini(update_interface__srv__FirmwareUpdate_Request * msg)
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

update_interface__srv__FirmwareUpdate_Request *
update_interface__srv__FirmwareUpdate_Request__create()
{
  update_interface__srv__FirmwareUpdate_Request * msg = (update_interface__srv__FirmwareUpdate_Request *)malloc(sizeof(update_interface__srv__FirmwareUpdate_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(update_interface__srv__FirmwareUpdate_Request));
  bool success = update_interface__srv__FirmwareUpdate_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
update_interface__srv__FirmwareUpdate_Request__destroy(update_interface__srv__FirmwareUpdate_Request * msg)
{
  if (msg) {
    update_interface__srv__FirmwareUpdate_Request__fini(msg);
  }
  free(msg);
}


bool
update_interface__srv__FirmwareUpdate_Request__Sequence__init(update_interface__srv__FirmwareUpdate_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  update_interface__srv__FirmwareUpdate_Request * data = NULL;
  if (size) {
    data = (update_interface__srv__FirmwareUpdate_Request *)calloc(size, sizeof(update_interface__srv__FirmwareUpdate_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = update_interface__srv__FirmwareUpdate_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        update_interface__srv__FirmwareUpdate_Request__fini(&data[i - 1]);
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
update_interface__srv__FirmwareUpdate_Request__Sequence__fini(update_interface__srv__FirmwareUpdate_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      update_interface__srv__FirmwareUpdate_Request__fini(&array->data[i]);
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

update_interface__srv__FirmwareUpdate_Request__Sequence *
update_interface__srv__FirmwareUpdate_Request__Sequence__create(size_t size)
{
  update_interface__srv__FirmwareUpdate_Request__Sequence * array = (update_interface__srv__FirmwareUpdate_Request__Sequence *)malloc(sizeof(update_interface__srv__FirmwareUpdate_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = update_interface__srv__FirmwareUpdate_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
update_interface__srv__FirmwareUpdate_Request__Sequence__destroy(update_interface__srv__FirmwareUpdate_Request__Sequence * array)
{
  if (array) {
    update_interface__srv__FirmwareUpdate_Request__Sequence__fini(array);
  }
  free(array);
}


bool
update_interface__srv__FirmwareUpdate_Response__init(update_interface__srv__FirmwareUpdate_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
update_interface__srv__FirmwareUpdate_Response__fini(update_interface__srv__FirmwareUpdate_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

update_interface__srv__FirmwareUpdate_Response *
update_interface__srv__FirmwareUpdate_Response__create()
{
  update_interface__srv__FirmwareUpdate_Response * msg = (update_interface__srv__FirmwareUpdate_Response *)malloc(sizeof(update_interface__srv__FirmwareUpdate_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(update_interface__srv__FirmwareUpdate_Response));
  bool success = update_interface__srv__FirmwareUpdate_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
update_interface__srv__FirmwareUpdate_Response__destroy(update_interface__srv__FirmwareUpdate_Response * msg)
{
  if (msg) {
    update_interface__srv__FirmwareUpdate_Response__fini(msg);
  }
  free(msg);
}


bool
update_interface__srv__FirmwareUpdate_Response__Sequence__init(update_interface__srv__FirmwareUpdate_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  update_interface__srv__FirmwareUpdate_Response * data = NULL;
  if (size) {
    data = (update_interface__srv__FirmwareUpdate_Response *)calloc(size, sizeof(update_interface__srv__FirmwareUpdate_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = update_interface__srv__FirmwareUpdate_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        update_interface__srv__FirmwareUpdate_Response__fini(&data[i - 1]);
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
update_interface__srv__FirmwareUpdate_Response__Sequence__fini(update_interface__srv__FirmwareUpdate_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      update_interface__srv__FirmwareUpdate_Response__fini(&array->data[i]);
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

update_interface__srv__FirmwareUpdate_Response__Sequence *
update_interface__srv__FirmwareUpdate_Response__Sequence__create(size_t size)
{
  update_interface__srv__FirmwareUpdate_Response__Sequence * array = (update_interface__srv__FirmwareUpdate_Response__Sequence *)malloc(sizeof(update_interface__srv__FirmwareUpdate_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = update_interface__srv__FirmwareUpdate_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
update_interface__srv__FirmwareUpdate_Response__Sequence__destroy(update_interface__srv__FirmwareUpdate_Response__Sequence * array)
{
  if (array) {
    update_interface__srv__FirmwareUpdate_Response__Sequence__fini(array);
  }
  free(array);
}
