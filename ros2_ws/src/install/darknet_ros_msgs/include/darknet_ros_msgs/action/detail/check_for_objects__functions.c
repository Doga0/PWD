// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from darknet_ros_msgs:action/CheckForObjects.idl
// generated code does not contain a copyright notice
#include "darknet_ros_msgs/action/detail/check_for_objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
darknet_ros_msgs__action__CheckForObjects_Goal__init(darknet_ros_msgs__action__CheckForObjects_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    darknet_ros_msgs__action__CheckForObjects_Goal__fini(msg);
    return false;
  }
  return true;
}

void
darknet_ros_msgs__action__CheckForObjects_Goal__fini(darknet_ros_msgs__action__CheckForObjects_Goal * msg)
{
  if (!msg) {
    return;
  }
  // id
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

darknet_ros_msgs__action__CheckForObjects_Goal *
darknet_ros_msgs__action__CheckForObjects_Goal__create()
{
  darknet_ros_msgs__action__CheckForObjects_Goal * msg = (darknet_ros_msgs__action__CheckForObjects_Goal *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(darknet_ros_msgs__action__CheckForObjects_Goal));
  bool success = darknet_ros_msgs__action__CheckForObjects_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
darknet_ros_msgs__action__CheckForObjects_Goal__destroy(darknet_ros_msgs__action__CheckForObjects_Goal * msg)
{
  if (msg) {
    darknet_ros_msgs__action__CheckForObjects_Goal__fini(msg);
  }
  free(msg);
}


bool
darknet_ros_msgs__action__CheckForObjects_Goal__Sequence__init(darknet_ros_msgs__action__CheckForObjects_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  darknet_ros_msgs__action__CheckForObjects_Goal * data = NULL;
  if (size) {
    data = (darknet_ros_msgs__action__CheckForObjects_Goal *)calloc(size, sizeof(darknet_ros_msgs__action__CheckForObjects_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = darknet_ros_msgs__action__CheckForObjects_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        darknet_ros_msgs__action__CheckForObjects_Goal__fini(&data[i - 1]);
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
darknet_ros_msgs__action__CheckForObjects_Goal__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      darknet_ros_msgs__action__CheckForObjects_Goal__fini(&array->data[i]);
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

darknet_ros_msgs__action__CheckForObjects_Goal__Sequence *
darknet_ros_msgs__action__CheckForObjects_Goal__Sequence__create(size_t size)
{
  darknet_ros_msgs__action__CheckForObjects_Goal__Sequence * array = (darknet_ros_msgs__action__CheckForObjects_Goal__Sequence *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = darknet_ros_msgs__action__CheckForObjects_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
darknet_ros_msgs__action__CheckForObjects_Goal__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_Goal__Sequence * array)
{
  if (array) {
    darknet_ros_msgs__action__CheckForObjects_Goal__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `bounding_boxes`
#include "darknet_ros_msgs/msg/detail/bounding_boxes__functions.h"

bool
darknet_ros_msgs__action__CheckForObjects_Result__init(darknet_ros_msgs__action__CheckForObjects_Result * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // bounding_boxes
  if (!darknet_ros_msgs__msg__BoundingBoxes__init(&msg->bounding_boxes)) {
    darknet_ros_msgs__action__CheckForObjects_Result__fini(msg);
    return false;
  }
  return true;
}

void
darknet_ros_msgs__action__CheckForObjects_Result__fini(darknet_ros_msgs__action__CheckForObjects_Result * msg)
{
  if (!msg) {
    return;
  }
  // id
  // bounding_boxes
  darknet_ros_msgs__msg__BoundingBoxes__fini(&msg->bounding_boxes);
}

darknet_ros_msgs__action__CheckForObjects_Result *
darknet_ros_msgs__action__CheckForObjects_Result__create()
{
  darknet_ros_msgs__action__CheckForObjects_Result * msg = (darknet_ros_msgs__action__CheckForObjects_Result *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(darknet_ros_msgs__action__CheckForObjects_Result));
  bool success = darknet_ros_msgs__action__CheckForObjects_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
darknet_ros_msgs__action__CheckForObjects_Result__destroy(darknet_ros_msgs__action__CheckForObjects_Result * msg)
{
  if (msg) {
    darknet_ros_msgs__action__CheckForObjects_Result__fini(msg);
  }
  free(msg);
}


bool
darknet_ros_msgs__action__CheckForObjects_Result__Sequence__init(darknet_ros_msgs__action__CheckForObjects_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  darknet_ros_msgs__action__CheckForObjects_Result * data = NULL;
  if (size) {
    data = (darknet_ros_msgs__action__CheckForObjects_Result *)calloc(size, sizeof(darknet_ros_msgs__action__CheckForObjects_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = darknet_ros_msgs__action__CheckForObjects_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        darknet_ros_msgs__action__CheckForObjects_Result__fini(&data[i - 1]);
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
darknet_ros_msgs__action__CheckForObjects_Result__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      darknet_ros_msgs__action__CheckForObjects_Result__fini(&array->data[i]);
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

darknet_ros_msgs__action__CheckForObjects_Result__Sequence *
darknet_ros_msgs__action__CheckForObjects_Result__Sequence__create(size_t size)
{
  darknet_ros_msgs__action__CheckForObjects_Result__Sequence * array = (darknet_ros_msgs__action__CheckForObjects_Result__Sequence *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = darknet_ros_msgs__action__CheckForObjects_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
darknet_ros_msgs__action__CheckForObjects_Result__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_Result__Sequence * array)
{
  if (array) {
    darknet_ros_msgs__action__CheckForObjects_Result__Sequence__fini(array);
  }
  free(array);
}


bool
darknet_ros_msgs__action__CheckForObjects_Feedback__init(darknet_ros_msgs__action__CheckForObjects_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
darknet_ros_msgs__action__CheckForObjects_Feedback__fini(darknet_ros_msgs__action__CheckForObjects_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

darknet_ros_msgs__action__CheckForObjects_Feedback *
darknet_ros_msgs__action__CheckForObjects_Feedback__create()
{
  darknet_ros_msgs__action__CheckForObjects_Feedback * msg = (darknet_ros_msgs__action__CheckForObjects_Feedback *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(darknet_ros_msgs__action__CheckForObjects_Feedback));
  bool success = darknet_ros_msgs__action__CheckForObjects_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
darknet_ros_msgs__action__CheckForObjects_Feedback__destroy(darknet_ros_msgs__action__CheckForObjects_Feedback * msg)
{
  if (msg) {
    darknet_ros_msgs__action__CheckForObjects_Feedback__fini(msg);
  }
  free(msg);
}


bool
darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence__init(darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  darknet_ros_msgs__action__CheckForObjects_Feedback * data = NULL;
  if (size) {
    data = (darknet_ros_msgs__action__CheckForObjects_Feedback *)calloc(size, sizeof(darknet_ros_msgs__action__CheckForObjects_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = darknet_ros_msgs__action__CheckForObjects_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        darknet_ros_msgs__action__CheckForObjects_Feedback__fini(&data[i - 1]);
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
darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      darknet_ros_msgs__action__CheckForObjects_Feedback__fini(&array->data[i]);
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

darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence *
darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence__create(size_t size)
{
  darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence * array = (darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence * array)
{
  if (array) {
    darknet_ros_msgs__action__CheckForObjects_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "darknet_ros_msgs/action/detail/check_for_objects__functions.h"

bool
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__init(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!darknet_ros_msgs__action__CheckForObjects_Goal__init(&msg->goal)) {
    darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__fini(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  darknet_ros_msgs__action__CheckForObjects_Goal__fini(&msg->goal);
}

darknet_ros_msgs__action__CheckForObjects_SendGoal_Request *
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__create()
{
  darknet_ros_msgs__action__CheckForObjects_SendGoal_Request * msg = (darknet_ros_msgs__action__CheckForObjects_SendGoal_Request *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request));
  bool success = darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__destroy(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request * msg)
{
  if (msg) {
    darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence__init(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  darknet_ros_msgs__action__CheckForObjects_SendGoal_Request * data = NULL;
  if (size) {
    data = (darknet_ros_msgs__action__CheckForObjects_SendGoal_Request *)calloc(size, sizeof(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__fini(&data[i - 1]);
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
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__fini(&array->data[i]);
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

darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence *
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence__create(size_t size)
{
  darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence * array = (darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence * array)
{
  if (array) {
    darknet_ros_msgs__action__CheckForObjects_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__init(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__fini(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

darknet_ros_msgs__action__CheckForObjects_SendGoal_Response *
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__create()
{
  darknet_ros_msgs__action__CheckForObjects_SendGoal_Response * msg = (darknet_ros_msgs__action__CheckForObjects_SendGoal_Response *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response));
  bool success = darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__destroy(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response * msg)
{
  if (msg) {
    darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence__init(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  darknet_ros_msgs__action__CheckForObjects_SendGoal_Response * data = NULL;
  if (size) {
    data = (darknet_ros_msgs__action__CheckForObjects_SendGoal_Response *)calloc(size, sizeof(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__fini(&data[i - 1]);
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
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__fini(&array->data[i]);
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

darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence *
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence__create(size_t size)
{
  darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence * array = (darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence * array)
{
  if (array) {
    darknet_ros_msgs__action__CheckForObjects_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__init(darknet_ros_msgs__action__CheckForObjects_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    darknet_ros_msgs__action__CheckForObjects_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__fini(darknet_ros_msgs__action__CheckForObjects_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

darknet_ros_msgs__action__CheckForObjects_GetResult_Request *
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__create()
{
  darknet_ros_msgs__action__CheckForObjects_GetResult_Request * msg = (darknet_ros_msgs__action__CheckForObjects_GetResult_Request *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(darknet_ros_msgs__action__CheckForObjects_GetResult_Request));
  bool success = darknet_ros_msgs__action__CheckForObjects_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__destroy(darknet_ros_msgs__action__CheckForObjects_GetResult_Request * msg)
{
  if (msg) {
    darknet_ros_msgs__action__CheckForObjects_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence__init(darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  darknet_ros_msgs__action__CheckForObjects_GetResult_Request * data = NULL;
  if (size) {
    data = (darknet_ros_msgs__action__CheckForObjects_GetResult_Request *)calloc(size, sizeof(darknet_ros_msgs__action__CheckForObjects_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = darknet_ros_msgs__action__CheckForObjects_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        darknet_ros_msgs__action__CheckForObjects_GetResult_Request__fini(&data[i - 1]);
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
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      darknet_ros_msgs__action__CheckForObjects_GetResult_Request__fini(&array->data[i]);
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

darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence *
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence__create(size_t size)
{
  darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence * array = (darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence * array)
{
  if (array) {
    darknet_ros_msgs__action__CheckForObjects_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "darknet_ros_msgs/action/detail/check_for_objects__functions.h"

bool
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__init(darknet_ros_msgs__action__CheckForObjects_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!darknet_ros_msgs__action__CheckForObjects_Result__init(&msg->result)) {
    darknet_ros_msgs__action__CheckForObjects_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__fini(darknet_ros_msgs__action__CheckForObjects_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  darknet_ros_msgs__action__CheckForObjects_Result__fini(&msg->result);
}

darknet_ros_msgs__action__CheckForObjects_GetResult_Response *
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__create()
{
  darknet_ros_msgs__action__CheckForObjects_GetResult_Response * msg = (darknet_ros_msgs__action__CheckForObjects_GetResult_Response *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(darknet_ros_msgs__action__CheckForObjects_GetResult_Response));
  bool success = darknet_ros_msgs__action__CheckForObjects_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__destroy(darknet_ros_msgs__action__CheckForObjects_GetResult_Response * msg)
{
  if (msg) {
    darknet_ros_msgs__action__CheckForObjects_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence__init(darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  darknet_ros_msgs__action__CheckForObjects_GetResult_Response * data = NULL;
  if (size) {
    data = (darknet_ros_msgs__action__CheckForObjects_GetResult_Response *)calloc(size, sizeof(darknet_ros_msgs__action__CheckForObjects_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = darknet_ros_msgs__action__CheckForObjects_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        darknet_ros_msgs__action__CheckForObjects_GetResult_Response__fini(&data[i - 1]);
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
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      darknet_ros_msgs__action__CheckForObjects_GetResult_Response__fini(&array->data[i]);
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

darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence *
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence__create(size_t size)
{
  darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence * array = (darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence * array)
{
  if (array) {
    darknet_ros_msgs__action__CheckForObjects_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "darknet_ros_msgs/action/detail/check_for_objects__functions.h"

bool
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__init(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!darknet_ros_msgs__action__CheckForObjects_Feedback__init(&msg->feedback)) {
    darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__fini(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  darknet_ros_msgs__action__CheckForObjects_Feedback__fini(&msg->feedback);
}

darknet_ros_msgs__action__CheckForObjects_FeedbackMessage *
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__create()
{
  darknet_ros_msgs__action__CheckForObjects_FeedbackMessage * msg = (darknet_ros_msgs__action__CheckForObjects_FeedbackMessage *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage));
  bool success = darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__destroy(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage * msg)
{
  if (msg) {
    darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence__init(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  darknet_ros_msgs__action__CheckForObjects_FeedbackMessage * data = NULL;
  if (size) {
    data = (darknet_ros_msgs__action__CheckForObjects_FeedbackMessage *)calloc(size, sizeof(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__fini(&data[i - 1]);
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
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence__fini(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__fini(&array->data[i]);
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

darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence *
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence__create(size_t size)
{
  darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence * array = (darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence *)malloc(sizeof(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence__destroy(darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence * array)
{
  if (array) {
    darknet_ros_msgs__action__CheckForObjects_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
