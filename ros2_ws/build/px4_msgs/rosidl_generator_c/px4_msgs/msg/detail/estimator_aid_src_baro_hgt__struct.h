// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorAidSrcBaroHgt.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SRC_BARO_HGT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SRC_BARO_HGT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/EstimatorAidSrcBaroHgt in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorAidSrcBaroHgt
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
} px4_msgs__msg__EstimatorAidSrcBaroHgt;

// Struct for a sequence of px4_msgs__msg__EstimatorAidSrcBaroHgt.
typedef struct px4_msgs__msg__EstimatorAidSrcBaroHgt__Sequence
{
  px4_msgs__msg__EstimatorAidSrcBaroHgt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorAidSrcBaroHgt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SRC_BARO_HGT__STRUCT_H_
