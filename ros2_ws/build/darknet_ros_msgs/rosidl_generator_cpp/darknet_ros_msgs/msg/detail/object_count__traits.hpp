// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from darknet_ros_msgs:msg/ObjectCount.idl
// generated code does not contain a copyright notice

#ifndef DARKNET_ROS_MSGS__MSG__DETAIL__OBJECT_COUNT__TRAITS_HPP_
#define DARKNET_ROS_MSGS__MSG__DETAIL__OBJECT_COUNT__TRAITS_HPP_

#include "darknet_ros_msgs/msg/detail/object_count__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::msg::ObjectCount>()
{
  return "darknet_ros_msgs::msg::ObjectCount";
}

template<>
inline const char * name<darknet_ros_msgs::msg::ObjectCount>()
{
  return "darknet_ros_msgs/msg/ObjectCount";
}

template<>
struct has_fixed_size<darknet_ros_msgs::msg::ObjectCount>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::msg::ObjectCount>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<darknet_ros_msgs::msg::ObjectCount>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DARKNET_ROS_MSGS__MSG__DETAIL__OBJECT_COUNT__TRAITS_HPP_
