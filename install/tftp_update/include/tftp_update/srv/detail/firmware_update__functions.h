// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tftp_update:srv/FirmwareUpdate.idl
// generated code does not contain a copyright notice

#ifndef TFTP_UPDATE__SRV__DETAIL__FIRMWARE_UPDATE__FUNCTIONS_H_
#define TFTP_UPDATE__SRV__DETAIL__FIRMWARE_UPDATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tftp_update/msg/rosidl_generator_c__visibility_control.h"

#include "tftp_update/srv/detail/firmware_update__struct.h"

/// Initialize srv/FirmwareUpdate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tftp_update__srv__FirmwareUpdate_Request
 * )) before or use
 * tftp_update__srv__FirmwareUpdate_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
bool
tftp_update__srv__FirmwareUpdate_Request__init(tftp_update__srv__FirmwareUpdate_Request * msg);

/// Finalize srv/FirmwareUpdate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
void
tftp_update__srv__FirmwareUpdate_Request__fini(tftp_update__srv__FirmwareUpdate_Request * msg);

/// Create srv/FirmwareUpdate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tftp_update__srv__FirmwareUpdate_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
tftp_update__srv__FirmwareUpdate_Request *
tftp_update__srv__FirmwareUpdate_Request__create();

/// Destroy srv/FirmwareUpdate message.
/**
 * It calls
 * tftp_update__srv__FirmwareUpdate_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
void
tftp_update__srv__FirmwareUpdate_Request__destroy(tftp_update__srv__FirmwareUpdate_Request * msg);


/// Initialize array of srv/FirmwareUpdate messages.
/**
 * It allocates the memory for the number of elements and calls
 * tftp_update__srv__FirmwareUpdate_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
bool
tftp_update__srv__FirmwareUpdate_Request__Sequence__init(tftp_update__srv__FirmwareUpdate_Request__Sequence * array, size_t size);

/// Finalize array of srv/FirmwareUpdate messages.
/**
 * It calls
 * tftp_update__srv__FirmwareUpdate_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
void
tftp_update__srv__FirmwareUpdate_Request__Sequence__fini(tftp_update__srv__FirmwareUpdate_Request__Sequence * array);

/// Create array of srv/FirmwareUpdate messages.
/**
 * It allocates the memory for the array and calls
 * tftp_update__srv__FirmwareUpdate_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
tftp_update__srv__FirmwareUpdate_Request__Sequence *
tftp_update__srv__FirmwareUpdate_Request__Sequence__create(size_t size);

/// Destroy array of srv/FirmwareUpdate messages.
/**
 * It calls
 * tftp_update__srv__FirmwareUpdate_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
void
tftp_update__srv__FirmwareUpdate_Request__Sequence__destroy(tftp_update__srv__FirmwareUpdate_Request__Sequence * array);

/// Initialize srv/FirmwareUpdate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tftp_update__srv__FirmwareUpdate_Response
 * )) before or use
 * tftp_update__srv__FirmwareUpdate_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
bool
tftp_update__srv__FirmwareUpdate_Response__init(tftp_update__srv__FirmwareUpdate_Response * msg);

/// Finalize srv/FirmwareUpdate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
void
tftp_update__srv__FirmwareUpdate_Response__fini(tftp_update__srv__FirmwareUpdate_Response * msg);

/// Create srv/FirmwareUpdate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tftp_update__srv__FirmwareUpdate_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
tftp_update__srv__FirmwareUpdate_Response *
tftp_update__srv__FirmwareUpdate_Response__create();

/// Destroy srv/FirmwareUpdate message.
/**
 * It calls
 * tftp_update__srv__FirmwareUpdate_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
void
tftp_update__srv__FirmwareUpdate_Response__destroy(tftp_update__srv__FirmwareUpdate_Response * msg);


/// Initialize array of srv/FirmwareUpdate messages.
/**
 * It allocates the memory for the number of elements and calls
 * tftp_update__srv__FirmwareUpdate_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
bool
tftp_update__srv__FirmwareUpdate_Response__Sequence__init(tftp_update__srv__FirmwareUpdate_Response__Sequence * array, size_t size);

/// Finalize array of srv/FirmwareUpdate messages.
/**
 * It calls
 * tftp_update__srv__FirmwareUpdate_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
void
tftp_update__srv__FirmwareUpdate_Response__Sequence__fini(tftp_update__srv__FirmwareUpdate_Response__Sequence * array);

/// Create array of srv/FirmwareUpdate messages.
/**
 * It allocates the memory for the array and calls
 * tftp_update__srv__FirmwareUpdate_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
tftp_update__srv__FirmwareUpdate_Response__Sequence *
tftp_update__srv__FirmwareUpdate_Response__Sequence__create(size_t size);

/// Destroy array of srv/FirmwareUpdate messages.
/**
 * It calls
 * tftp_update__srv__FirmwareUpdate_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tftp_update
void
tftp_update__srv__FirmwareUpdate_Response__Sequence__destroy(tftp_update__srv__FirmwareUpdate_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // TFTP_UPDATE__SRV__DETAIL__FIRMWARE_UPDATE__FUNCTIONS_H_
