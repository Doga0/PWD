// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorAidSource2D.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE2_D__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/EstimatorAidSource2D in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorAidSource2D
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  uint8_t estimator_instance;
  uint32_t device_id;
  uint64_t time_last_fuse[2];
  float observation[2];
  float observation_variance[2];
  float innovation[2];
  float innovation_variance[2];
  float test_ratio[2];
  bool fusion_enabled[2];
  bool innovation_rejected[2];
  bool fused[2];
} px4_msgs__msg__EstimatorAidSource2D;

// Struct for a sequence of px4_msgs__msg__EstimatorAidSource2D.
typedef struct px4_msgs__msg__EstimatorAidSource2D__Sequence
{
  px4_msgs__msg__EstimatorAidSource2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorAidSource2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SOURCE2_D__STRUCT_H_
