// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from darknet_ros_msgs:msg/BoundingBoxes.idl
// generated code does not contain a copyright notice
#include "darknet_ros_msgs/msg/detail/bounding_boxes__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
// Member `image_header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `bounding_boxes`
#include "darknet_ros_msgs/msg/detail/bounding_box__functions.h"

bool
darknet_ros_msgs__msg__BoundingBoxes__init(darknet_ros_msgs__msg__BoundingBoxes * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    darknet_ros_msgs__msg__BoundingBoxes__fini(msg);
    return false;
  }
  // image_header
  if (!std_msgs__msg__Header__init(&msg->image_header)) {
    darknet_ros_msgs__msg__BoundingBoxes__fini(msg);
    return false;
  }
  // bounding_boxes
  if (!darknet_ros_msgs__msg__BoundingBox__Sequence__init(&msg->bounding_boxes, 0)) {
    darknet_ros_msgs__msg__BoundingBoxes__fini(msg);
    return false;
  }
  return true;
}

void
darknet_ros_msgs__msg__BoundingBoxes__fini(darknet_ros_msgs__msg__BoundingBoxes * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // image_header
  std_msgs__msg__Header__fini(&msg->image_header);
  // bounding_boxes
  darknet_ros_msgs__msg__BoundingBox__Sequence__fini(&msg->bounding_boxes);
}

darknet_ros_msgs__msg__BoundingBoxes *
darknet_ros_msgs__msg__BoundingBoxes__create()
{
  darknet_ros_msgs__msg__BoundingBoxes * msg = (darknet_ros_msgs__msg__BoundingBoxes *)malloc(sizeof(darknet_ros_msgs__msg__BoundingBoxes));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(darknet_ros_msgs__msg__BoundingBoxes));
  bool success = darknet_ros_msgs__msg__BoundingBoxes__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
darknet_ros_msgs__msg__BoundingBoxes__destroy(darknet_ros_msgs__msg__BoundingBoxes * msg)
{
  if (msg) {
    darknet_ros_msgs__msg__BoundingBoxes__fini(msg);
  }
  free(msg);
}


bool
darknet_ros_msgs__msg__BoundingBoxes__Sequence__init(darknet_ros_msgs__msg__BoundingBoxes__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  darknet_ros_msgs__msg__BoundingBoxes * data = NULL;
  if (size) {
    data = (darknet_ros_msgs__msg__BoundingBoxes *)calloc(size, sizeof(darknet_ros_msgs__msg__BoundingBoxes));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = darknet_ros_msgs__msg__BoundingBoxes__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        darknet_ros_msgs__msg__BoundingBoxes__fini(&data[i - 1]);
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
darknet_ros_msgs__msg__BoundingBoxes__Sequence__fini(darknet_ros_msgs__msg__BoundingBoxes__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      darknet_ros_msgs__msg__BoundingBoxes__fini(&array->data[i]);
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

darknet_ros_msgs__msg__BoundingBoxes__Sequence *
darknet_ros_msgs__msg__BoundingBoxes__Sequence__create(size_t size)
{
  darknet_ros_msgs__msg__BoundingBoxes__Sequence * array = (darknet_ros_msgs__msg__BoundingBoxes__Sequence *)malloc(sizeof(darknet_ros_msgs__msg__BoundingBoxes__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = darknet_ros_msgs__msg__BoundingBoxes__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
darknet_ros_msgs__msg__BoundingBoxes__Sequence__destroy(darknet_ros_msgs__msg__BoundingBoxes__Sequence * array)
{
  if (array) {
    darknet_ros_msgs__msg__BoundingBoxes__Sequence__fini(array);
  }
  free(array);
}
