// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mybot_interfaces:srv/SetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef MYBOT_INTERFACES__SRV__DETAIL__SET_COORDINATES__TRAITS_HPP_
#define MYBOT_INTERFACES__SRV__DETAIL__SET_COORDINATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mybot_interfaces/srv/detail/set_coordinates__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'coordinates'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace mybot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCoordinates_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: coordinates
  {
    out << "coordinates: ";
    to_flow_style_yaml(msg.coordinates, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCoordinates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: coordinates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "coordinates:\n";
    to_block_style_yaml(msg.coordinates, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCoordinates_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mybot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mybot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mybot_interfaces::srv::SetCoordinates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mybot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mybot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mybot_interfaces::srv::SetCoordinates_Request & msg)
{
  return mybot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mybot_interfaces::srv::SetCoordinates_Request>()
{
  return "mybot_interfaces::srv::SetCoordinates_Request";
}

template<>
inline const char * name<mybot_interfaces::srv::SetCoordinates_Request>()
{
  return "mybot_interfaces/srv/SetCoordinates_Request";
}

template<>
struct has_fixed_size<mybot_interfaces::srv::SetCoordinates_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<mybot_interfaces::srv::SetCoordinates_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<mybot_interfaces::srv::SetCoordinates_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mybot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetCoordinates_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetCoordinates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetCoordinates_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace mybot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use mybot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mybot_interfaces::srv::SetCoordinates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mybot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mybot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mybot_interfaces::srv::SetCoordinates_Response & msg)
{
  return mybot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mybot_interfaces::srv::SetCoordinates_Response>()
{
  return "mybot_interfaces::srv::SetCoordinates_Response";
}

template<>
inline const char * name<mybot_interfaces::srv::SetCoordinates_Response>()
{
  return "mybot_interfaces/srv/SetCoordinates_Response";
}

template<>
struct has_fixed_size<mybot_interfaces::srv::SetCoordinates_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mybot_interfaces::srv::SetCoordinates_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mybot_interfaces::srv::SetCoordinates_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mybot_interfaces::srv::SetCoordinates>()
{
  return "mybot_interfaces::srv::SetCoordinates";
}

template<>
inline const char * name<mybot_interfaces::srv::SetCoordinates>()
{
  return "mybot_interfaces/srv/SetCoordinates";
}

template<>
struct has_fixed_size<mybot_interfaces::srv::SetCoordinates>
  : std::integral_constant<
    bool,
    has_fixed_size<mybot_interfaces::srv::SetCoordinates_Request>::value &&
    has_fixed_size<mybot_interfaces::srv::SetCoordinates_Response>::value
  >
{
};

template<>
struct has_bounded_size<mybot_interfaces::srv::SetCoordinates>
  : std::integral_constant<
    bool,
    has_bounded_size<mybot_interfaces::srv::SetCoordinates_Request>::value &&
    has_bounded_size<mybot_interfaces::srv::SetCoordinates_Response>::value
  >
{
};

template<>
struct is_service<mybot_interfaces::srv::SetCoordinates>
  : std::true_type
{
};

template<>
struct is_service_request<mybot_interfaces::srv::SetCoordinates_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mybot_interfaces::srv::SetCoordinates_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYBOT_INTERFACES__SRV__DETAIL__SET_COORDINATES__TRAITS_HPP_
