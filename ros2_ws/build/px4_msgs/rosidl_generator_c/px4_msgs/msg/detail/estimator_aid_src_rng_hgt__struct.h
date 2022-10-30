// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorAidSrcRngHgt.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SRC_RNG_HGT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SRC_RNG_HGT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/EstimatorAidSrcRngHgt in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorAidSrcRngHgt
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  uint8_t estimator_instance;
  uint32_t device_id;
  uint64_t time_last_fuse;
  float observation;
  float observation_variance;
  float innovation;
  float innovation_variance;
  float test_ratio;
  bool fusion_enabled;
  bool innovation_rejected;
  bool fused;
} px4_msgs__msg__EstimatorAidSrcRngHgt;

// Struct for a sequence of px4_msgs__msg__EstimatorAidSrcRngHgt.
typedef struct px4_msgs__msg__EstimatorAidSrcRngHgt__Sequence
{
  px4_msgs__msg__EstimatorAidSrcRngHgt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorAidSrcRngHgt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SRC_RNG_HGT__STRUCT_H_
