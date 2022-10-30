// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from darknet_ros_msgs:action/CheckForObjects.idl
// generated code does not contain a copyright notice

#ifndef DARKNET_ROS_MSGS__ACTION__DETAIL__CHECK_FOR_OBJECTS__TRAITS_HPP_
#define DARKNET_ROS_MSGS__ACTION__DETAIL__CHECK_FOR_OBJECTS__TRAITS_HPP_

#include "darknet_ros_msgs/action/detail/check_for_objects__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_Goal>()
{
  return "darknet_ros_msgs::action::CheckForObjects_Goal";
}

template<>
inline const char * name<darknet_ros_msgs::action::CheckForObjects_Goal>()
{
  return "darknet_ros_msgs/action/CheckForObjects_Goal";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_Goal>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_Goal>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<darknet_ros_msgs::action::CheckForObjects_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'bounding_boxes'
#include "darknet_ros_msgs/msg/detail/bounding_boxes__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_Result>()
{
  return "darknet_ros_msgs::action::CheckForObjects_Result";
}

template<>
inline const char * name<darknet_ros_msgs::action::CheckForObjects_Result>()
{
  return "darknet_ros_msgs/action/CheckForObjects_Result";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_Result>
  : std::integral_constant<bool, has_fixed_size<darknet_ros_msgs::msg::BoundingBoxes>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_Result>
  : std::integral_constant<bool, has_bounded_size<darknet_ros_msgs::msg::BoundingBoxes>::value> {};

template<>
struct is_message<darknet_ros_msgs::action::CheckForObjects_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_Feedback>()
{
  return "darknet_ros_msgs::action::CheckForObjects_Feedback";
}

template<>
inline const char * name<darknet_ros_msgs::action::CheckForObjects_Feedback>()
{
  return "darknet_ros_msgs/action/CheckForObjects_Feedback";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<darknet_ros_msgs::action::CheckForObjects_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "darknet_ros_msgs/action/detail/check_for_objects__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request>()
{
  return "darknet_ros_msgs::action::CheckForObjects_SendGoal_Request";
}

template<>
inline const char * name<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request>()
{
  return "darknet_ros_msgs/action/CheckForObjects_SendGoal_Request";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<darknet_ros_msgs::action::CheckForObjects_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<darknet_ros_msgs::action::CheckForObjects_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response>()
{
  return "darknet_ros_msgs::action::CheckForObjects_SendGoal_Response";
}

template<>
inline const char * name<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response>()
{
  return "darknet_ros_msgs/action/CheckForObjects_SendGoal_Response";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_SendGoal>()
{
  return "darknet_ros_msgs::action::CheckForObjects_SendGoal";
}

template<>
inline const char * name<darknet_ros_msgs::action::CheckForObjects_SendGoal>()
{
  return "darknet_ros_msgs/action/CheckForObjects_SendGoal";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request>::value &&
    has_fixed_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request>::value &&
    has_bounded_size<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<darknet_ros_msgs::action::CheckForObjects_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<darknet_ros_msgs::action::CheckForObjects_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<darknet_ros_msgs::action::CheckForObjects_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_GetResult_Request>()
{
  return "darknet_ros_msgs::action::CheckForObjects_GetResult_Request";
}

template<>
inline const char * name<darknet_ros_msgs::action::CheckForObjects_GetResult_Request>()
{
  return "darknet_ros_msgs/action/CheckForObjects_GetResult_Request";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<darknet_ros_msgs::action::CheckForObjects_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "darknet_ros_msgs/action/detail/check_for_objects__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_GetResult_Response>()
{
  return "darknet_ros_msgs::action::CheckForObjects_GetResult_Response";
}

template<>
inline const char * name<darknet_ros_msgs::action::CheckForObjects_GetResult_Response>()
{
  return "darknet_ros_msgs/action/CheckForObjects_GetResult_Response";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<darknet_ros_msgs::action::CheckForObjects_Result>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<darknet_ros_msgs::action::CheckForObjects_Result>::value> {};

template<>
struct is_message<darknet_ros_msgs::action::CheckForObjects_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_GetResult>()
{
  return "darknet_ros_msgs::action::CheckForObjects_GetResult";
}

template<>
inline const char * name<darknet_ros_msgs::action::CheckForObjects_GetResult>()
{
  return "darknet_ros_msgs/action/CheckForObjects_GetResult";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Request>::value &&
    has_fixed_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Request>::value &&
    has_bounded_size<darknet_ros_msgs::action::CheckForObjects_GetResult_Response>::value
  >
{
};

template<>
struct is_service<darknet_ros_msgs::action::CheckForObjects_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<darknet_ros_msgs::action::CheckForObjects_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<darknet_ros_msgs::action::CheckForObjects_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "darknet_ros_msgs/action/detail/check_for_objects__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage>()
{
  return "darknet_ros_msgs::action::CheckForObjects_FeedbackMessage";
}

template<>
inline const char * name<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage>()
{
  return "darknet_ros_msgs/action/CheckForObjects_FeedbackMessage";
}

template<>
struct has_fixed_size<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<darknet_ros_msgs::action::CheckForObjects_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<darknet_ros_msgs::action::CheckForObjects_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<darknet_ros_msgs::action::CheckForObjects_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<darknet_ros_msgs::action::CheckForObjects>
  : std::true_type
{
};

template<>
struct is_action_goal<darknet_ros_msgs::action::CheckForObjects_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<darknet_ros_msgs::action::CheckForObjects_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<darknet_ros_msgs::action::CheckForObjects_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // DARKNET_ROS_MSGS__ACTION__DETAIL__CHECK_FOR_OBJECTS__TRAITS_HPP_
