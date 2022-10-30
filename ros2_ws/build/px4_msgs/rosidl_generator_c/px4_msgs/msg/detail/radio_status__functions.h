// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from px4_msgs:msg/RadioStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RADIO_STATUS__FUNCTIONS_H_
#define PX4_MSGS__MSG__DETAIL__RADIO_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "px4_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "px4_msgs/msg/detail/radio_status__struct.h"

/// Initialize msg/RadioStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * px4_msgs__msg__RadioStatus
 * )) before or use
 * px4_msgs__msg__RadioStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__RadioStatus__init(px4_msgs__msg__RadioStatus * msg);

/// Finalize msg/RadioStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__RadioStatus__fini(px4_msgs__msg__RadioStatus * msg);

/// Create msg/RadioStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * px4_msgs__msg__RadioStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__RadioStatus *
px4_msgs__msg__RadioStatus__create();

/// Destroy msg/RadioStatus message.
/**
 * It calls
 * px4_msgs__msg__RadioStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__RadioStatus__destroy(px4_msgs__msg__RadioStatus * msg);


/// Initialize array of msg/RadioStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * px4_msgs__msg__RadioStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__RadioStatus__Sequence__init(px4_msgs__msg__RadioStatus__Sequence * array, size_t size);

/// Finalize array of msg/RadioStatus messages.
/**
 * It calls
 * px4_msgs__msg__RadioStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__RadioStatus__Sequence__fini(px4_msgs__msg__RadioStatus__Sequence * array);

/// Create array of msg/RadioStatus messages.
/**
 * It allocates the memory for the array and calls
 * px4_msgs__msg__RadioStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__RadioStatus__Sequence *
px4_msgs__msg__RadioStatus__Sequence__create(size_t size);

/// Destroy array of msg/RadioStatus messages.
/**
 * It calls
 * px4_msgs__msg__RadioStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__RadioStatus__Sequence__destroy(px4_msgs__msg__RadioStatus__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RADIO_STATUS__FUNCTIONS_H_
