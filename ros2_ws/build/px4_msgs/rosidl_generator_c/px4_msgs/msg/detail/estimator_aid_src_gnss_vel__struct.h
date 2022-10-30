// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorAidSrcGnssVel.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SRC_GNSS_VEL__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SRC_GNSS_VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/EstimatorAidSrcGnssVel in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorAidSrcGnssVel
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  uint8_t estimator_instance;
  uint32_t device_id;
  uint64_t time_last_fuse[3];
  float observation[3];
  float observation_variance[3];
  float innovation[3];
  float innovation_variance[3];
  float test_ratio[3];
  bool fusion_enabled[3];
  bool innovation_rejected[3];
  bool fused[3];
} px4_msgs__msg__EstimatorAidSrcGnssVel;

// Struct for a sequence of px4_msgs__msg__EstimatorAidSrcGnssVel.
typedef struct px4_msgs__msg__EstimatorAidSrcGnssVel__Sequence
{
  px4_msgs__msg__EstimatorAidSrcGnssVel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorAidSrcGnssVel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_AID_SRC_GNSS_VEL__STRUCT_H_
