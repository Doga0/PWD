// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from darknet_ros_msgs:msg/ObjectCount.idl
// generated code does not contain a copyright notice

#ifndef DARKNET_ROS_MSGS__MSG__DETAIL__OBJECT_COUNT__FUNCTIONS_H_
#define DARKNET_ROS_MSGS__MSG__DETAIL__OBJECT_COUNT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "darknet_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "darknet_ros_msgs/msg/detail/object_count__struct.h"

/// Initialize msg/ObjectCount message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * darknet_ros_msgs__msg__ObjectCount
 * )) before or use
 * darknet_ros_msgs__msg__ObjectCount__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__msg__ObjectCount__init(darknet_ros_msgs__msg__ObjectCount * msg);

/// Finalize msg/ObjectCount message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__msg__ObjectCount__fini(darknet_ros_msgs__msg__ObjectCount * msg);

/// Create msg/ObjectCount message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * darknet_ros_msgs__msg__ObjectCount__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__msg__ObjectCount *
darknet_ros_msgs__msg__ObjectCount__create();

/// Destroy msg/ObjectCount message.
/**
 * It calls
 * darknet_ros_msgs__msg__ObjectCount__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__msg__ObjectCount__destroy(darknet_ros_msgs__msg__ObjectCount * msg);


/// Initialize array of msg/ObjectCount messages.
/**
 * It allocates the memory for the number of elements and calls
 * darknet_ros_msgs__msg__ObjectCount__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
bool
darknet_ros_msgs__msg__ObjectCount__Sequence__init(darknet_ros_msgs__msg__ObjectCount__Sequence * array, size_t size);

/// Finalize array of msg/ObjectCount messages.
/**
 * It calls
 * darknet_ros_msgs__msg__ObjectCount__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__msg__ObjectCount__Sequence__fini(darknet_ros_msgs__msg__ObjectCount__Sequence * array);

/// Create array of msg/ObjectCount messages.
/**
 * It allocates the memory for the array and calls
 * darknet_ros_msgs__msg__ObjectCount__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
darknet_ros_msgs__msg__ObjectCount__Sequence *
darknet_ros_msgs__msg__ObjectCount__Sequence__create(size_t size);

/// Destroy array of msg/ObjectCount messages.
/**
 * It calls
 * darknet_ros_msgs__msg__ObjectCount__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_darknet_ros_msgs
void
darknet_ros_msgs__msg__ObjectCount__Sequence__destroy(darknet_ros_msgs__msg__ObjectCount__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // DARKNET_ROS_MSGS__MSG__DETAIL__OBJECT_COUNT__FUNCTIONS_H_
