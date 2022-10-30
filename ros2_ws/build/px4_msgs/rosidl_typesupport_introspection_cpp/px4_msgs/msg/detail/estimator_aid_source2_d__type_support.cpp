// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EstimatorAidSource2D.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/estimator_aid_source2_d__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EstimatorAidSource2D_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::EstimatorAidSource2D(_init);
}

void EstimatorAidSource2D_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::EstimatorAidSource2D *>(message_memory);
  typed_message->~EstimatorAidSource2D();
}

size_t size_function__EstimatorAidSource2D__time_last_fuse(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EstimatorAidSource2D__time_last_fuse(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint64_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorAidSource2D__time_last_fuse(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint64_t, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorAidSource2D__observation(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EstimatorAidSource2D__observation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorAidSource2D__observation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorAidSource2D__observation_variance(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EstimatorAidSource2D__observation_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorAidSource2D__observation_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorAidSource2D__innovation(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EstimatorAidSource2D__innovation(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorAidSource2D__innovation(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorAidSource2D__innovation_variance(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EstimatorAidSource2D__innovation_variance(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorAidSource2D__innovation_variance(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorAidSource2D__test_ratio(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EstimatorAidSource2D__test_ratio(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorAidSource2D__test_ratio(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorAidSource2D__fusion_enabled(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EstimatorAidSource2D__fusion_enabled(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorAidSource2D__fusion_enabled(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorAidSource2D__innovation_rejected(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EstimatorAidSource2D__innovation_rejected(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorAidSource2D__innovation_rejected(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 2> *>(untyped_member);
  return &member[index];
}

size_t size_function__EstimatorAidSource2D__fused(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__EstimatorAidSource2D__fused(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorAidSource2D__fused(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 2> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EstimatorAidSource2D_message_member_array[13] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorAidSource2D, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorAidSource2D, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "estimator_instance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorAidSource2D, estimator_instance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "device_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorAidSource2D, device_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "time_last_fuse",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorAidSource2D, time_last_fuse),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorAidSource2D__time_last_fuse,  // size() function pointer
    get_const_function__EstimatorAidSource2D__time_last_fuse,  // get_const(index) function pointer
    get_function__EstimatorAidSource2D__time_last_fuse,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "observation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorAidSource2D, observation),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorAidSource2D__observation,  // size() function pointer
    get_const_function__EstimatorAidSource2D__observation,  // get_const(index) function pointer
    get_function__EstimatorAidSource2D__observation,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "observation_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorAidSource2D, observation_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorAidSource2D__observation_variance,  // size() function pointer
    get_const_function__EstimatorAidSource2D__observation_variance,  // get_const(index) function pointer
    get_function__EstimatorAidSource2D__observation_variance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "innovation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorAidSource2D, innovation),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorAidSource2D__innovation,  // size() function pointer
    get_const_function__EstimatorAidSource2D__innovation,  // get_const(index) function pointer
    get_function__EstimatorAidSource2D__innovation,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "innovation_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorAidSource2D, innovation_variance),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorAidSource2D__innovation_variance,  // size() function pointer
    get_const_function__EstimatorAidSource2D__innovation_variance,  // get_const(index) function pointer
    get_function__EstimatorAidSource2D__innovation_variance,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "test_ratio",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorAidSource2D, test_ratio),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorAidSource2D__test_ratio,  // size() function pointer
    get_const_function__EstimatorAidSource2D__test_ratio,  // get_const(index) function pointer
    get_function__EstimatorAidSource2D__test_ratio,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fusion_enabled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorAidSource2D, fusion_enabled),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorAidSource2D__fusion_enabled,  // size() function pointer
    get_const_function__EstimatorAidSource2D__fusion_enabled,  // get_const(index) function pointer
    get_function__EstimatorAidSource2D__fusion_enabled,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "innovation_rejected",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorAidSource2D, innovation_rejected),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorAidSource2D__innovation_rejected,  // size() function pointer
    get_const_function__EstimatorAidSource2D__innovation_rejected,  // get_const(index) function pointer
    get_function__EstimatorAidSource2D__innovation_rejected,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fused",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorAidSource2D, fused),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorAidSource2D__fused,  // size() function pointer
    get_const_function__EstimatorAidSource2D__fused,  // get_const(index) function pointer
    get_function__EstimatorAidSource2D__fused,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EstimatorAidSource2D_message_members = {
  "px4_msgs::msg",  // message namespace
  "EstimatorAidSource2D",  // message name
  13,  // number of fields
  sizeof(px4_msgs::msg::EstimatorAidSource2D),
  EstimatorAidSource2D_message_member_array,  // message members
  EstimatorAidSource2D_init_function,  // function to initialize message memory (memory has to be allocated)
  EstimatorAidSource2D_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EstimatorAidSource2D_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EstimatorAidSource2D_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::EstimatorAidSource2D>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorAidSource2D_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, EstimatorAidSource2D)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorAidSource2D_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
