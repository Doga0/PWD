// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__BUILDER_HPP_

#include "px4_msgs/msg/detail/position_setpoint__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionSetpoint_disable_weather_vane
{
public:
  explicit Init_PositionSetpoint_disable_weather_vane(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::PositionSetpoint disable_weather_vane(::px4_msgs::msg::PositionSetpoint::_disable_weather_vane_type arg)
  {
    msg_.disable_weather_vane = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_cruising_throttle
{
public:
  explicit Init_PositionSetpoint_cruising_throttle(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_disable_weather_vane cruising_throttle(::px4_msgs::msg::PositionSetpoint::_cruising_throttle_type arg)
  {
    msg_.cruising_throttle = std::move(arg);
    return Init_PositionSetpoint_disable_weather_vane(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_cruising_speed
{
public:
  explicit Init_PositionSetpoint_cruising_speed(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_cruising_throttle cruising_speed(::px4_msgs::msg::PositionSetpoint::_cruising_speed_type arg)
  {
    msg_.cruising_speed = std::move(arg);
    return Init_PositionSetpoint_cruising_throttle(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_acceptance_radius
{
public:
  explicit Init_PositionSetpoint_acceptance_radius(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_cruising_speed acceptance_radius(::px4_msgs::msg::PositionSetpoint::_acceptance_radius_type arg)
  {
    msg_.acceptance_radius = std::move(arg);
    return Init_PositionSetpoint_cruising_speed(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_loiter_direction
{
public:
  explicit Init_PositionSetpoint_loiter_direction(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_acceptance_radius loiter_direction(::px4_msgs::msg::PositionSetpoint::_loiter_direction_type arg)
  {
    msg_.loiter_direction = std::move(arg);
    return Init_PositionSetpoint_acceptance_radius(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_loiter_radius
{
public:
  explicit Init_PositionSetpoint_loiter_radius(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_loiter_direction loiter_radius(::px4_msgs::msg::PositionSetpoint::_loiter_radius_type arg)
  {
    msg_.loiter_radius = std::move(arg);
    return Init_PositionSetpoint_loiter_direction(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_landing_gear
{
public:
  explicit Init_PositionSetpoint_landing_gear(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_loiter_radius landing_gear(::px4_msgs::msg::PositionSetpoint::_landing_gear_type arg)
  {
    msg_.landing_gear = std::move(arg);
    return Init_PositionSetpoint_loiter_radius(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_yawspeed_valid
{
public:
  explicit Init_PositionSetpoint_yawspeed_valid(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_landing_gear yawspeed_valid(::px4_msgs::msg::PositionSetpoint::_yawspeed_valid_type arg)
  {
    msg_.yawspeed_valid = std::move(arg);
    return Init_PositionSetpoint_landing_gear(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_yawspeed
{
public:
  explicit Init_PositionSetpoint_yawspeed(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_yawspeed_valid yawspeed(::px4_msgs::msg::PositionSetpoint::_yawspeed_type arg)
  {
    msg_.yawspeed = std::move(arg);
    return Init_PositionSetpoint_yawspeed_valid(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_yaw_valid
{
public:
  explicit Init_PositionSetpoint_yaw_valid(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_yawspeed yaw_valid(::px4_msgs::msg::PositionSetpoint::_yaw_valid_type arg)
  {
    msg_.yaw_valid = std::move(arg);
    return Init_PositionSetpoint_yawspeed(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_yaw
{
public:
  explicit Init_PositionSetpoint_yaw(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_yaw_valid yaw(::px4_msgs::msg::PositionSetpoint::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_PositionSetpoint_yaw_valid(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_alt
{
public:
  explicit Init_PositionSetpoint_alt(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_yaw alt(::px4_msgs::msg::PositionSetpoint::_alt_type arg)
  {
    msg_.alt = std::move(arg);
    return Init_PositionSetpoint_yaw(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_lon
{
public:
  explicit Init_PositionSetpoint_lon(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_alt lon(::px4_msgs::msg::PositionSetpoint::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_PositionSetpoint_alt(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_lat
{
public:
  explicit Init_PositionSetpoint_lat(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_lon lat(::px4_msgs::msg::PositionSetpoint::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_PositionSetpoint_lon(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_alt_valid
{
public:
  explicit Init_PositionSetpoint_alt_valid(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_lat alt_valid(::px4_msgs::msg::PositionSetpoint::_alt_valid_type arg)
  {
    msg_.alt_valid = std::move(arg);
    return Init_PositionSetpoint_lat(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_velocity_frame
{
public:
  explicit Init_PositionSetpoint_velocity_frame(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_alt_valid velocity_frame(::px4_msgs::msg::PositionSetpoint::_velocity_frame_type arg)
  {
    msg_.velocity_frame = std::move(arg);
    return Init_PositionSetpoint_alt_valid(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_velocity_valid
{
public:
  explicit Init_PositionSetpoint_velocity_valid(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_velocity_frame velocity_valid(::px4_msgs::msg::PositionSetpoint::_velocity_valid_type arg)
  {
    msg_.velocity_valid = std::move(arg);
    return Init_PositionSetpoint_velocity_frame(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_vz
{
public:
  explicit Init_PositionSetpoint_vz(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_velocity_valid vz(::px4_msgs::msg::PositionSetpoint::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_PositionSetpoint_velocity_valid(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_vy
{
public:
  explicit Init_PositionSetpoint_vy(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_vz vy(::px4_msgs::msg::PositionSetpoint::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_PositionSetpoint_vz(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_vx
{
public:
  explicit Init_PositionSetpoint_vx(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_vy vx(::px4_msgs::msg::PositionSetpoint::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_PositionSetpoint_vy(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_type
{
public:
  explicit Init_PositionSetpoint_type(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_vx type(::px4_msgs::msg::PositionSetpoint::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_PositionSetpoint_vx(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_valid
{
public:
  explicit Init_PositionSetpoint_valid(::px4_msgs::msg::PositionSetpoint & msg)
  : msg_(msg)
  {}
  Init_PositionSetpoint_type valid(::px4_msgs::msg::PositionSetpoint::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_PositionSetpoint_type(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

class Init_PositionSetpoint_timestamp
{
public:
  Init_PositionSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionSetpoint_valid timestamp(::px4_msgs::msg::PositionSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PositionSetpoint_valid(msg_);
  }

private:
  ::px4_msgs::msg::PositionSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::PositionSetpoint>()
{
  return px4_msgs::msg::builder::Init_PositionSetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__BUILDER_HPP_
