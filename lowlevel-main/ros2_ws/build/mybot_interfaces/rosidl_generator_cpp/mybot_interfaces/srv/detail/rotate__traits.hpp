// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mybot_interfaces:srv/Rotate.idl
// generated code does not contain a copyright notice

#ifndef MYBOT_INTERFACES__SRV__DETAIL__ROTATE__TRAITS_HPP_
#define MYBOT_INTERFACES__SRV__DETAIL__ROTATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mybot_interfaces/srv/detail/rotate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mybot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rotate_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: angle_motor_1_1
  {
    out << "angle_motor_1_1: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_1, out);
    out << ", ";
  }

  // member: angle_motor_1_2
  {
    out << "angle_motor_1_2: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_2, out);
    out << ", ";
  }

  // member: angle_motor_1_3
  {
    out << "angle_motor_1_3: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_3, out);
    out << ", ";
  }

  // member: angle_motor_1_4
  {
    out << "angle_motor_1_4: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_4, out);
    out << ", ";
  }

  // member: angle_motor_1_5
  {
    out << "angle_motor_1_5: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_5, out);
    out << ", ";
  }

  // member: angle_motor_1_6
  {
    out << "angle_motor_1_6: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_6, out);
    out << ", ";
  }

  // member: angle_motor_2_1
  {
    out << "angle_motor_2_1: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_1, out);
    out << ", ";
  }

  // member: angle_motor_2_2
  {
    out << "angle_motor_2_2: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_2, out);
    out << ", ";
  }

  // member: angle_motor_2_3
  {
    out << "angle_motor_2_3: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_3, out);
    out << ", ";
  }

  // member: angle_motor_2_4
  {
    out << "angle_motor_2_4: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_4, out);
    out << ", ";
  }

  // member: angle_motor_2_5
  {
    out << "angle_motor_2_5: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_5, out);
    out << ", ";
  }

  // member: angle_motor_2_6
  {
    out << "angle_motor_2_6: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_6, out);
    out << ", ";
  }

  // member: angle_motor_3_1
  {
    out << "angle_motor_3_1: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_3_1, out);
    out << ", ";
  }

  // member: angle_motor_3_2
  {
    out << "angle_motor_3_2: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_3_2, out);
    out << ", ";
  }

  // member: angle_motor_3_3
  {
    out << "angle_motor_3_3: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_3_3, out);
    out << ", ";
  }

  // member: angle_motor_1_1_set
  {
    out << "angle_motor_1_1_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_1_set, out);
    out << ", ";
  }

  // member: angle_motor_1_2_set
  {
    out << "angle_motor_1_2_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_2_set, out);
    out << ", ";
  }

  // member: angle_motor_1_3_set
  {
    out << "angle_motor_1_3_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_3_set, out);
    out << ", ";
  }

  // member: angle_motor_1_4_set
  {
    out << "angle_motor_1_4_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_4_set, out);
    out << ", ";
  }

  // member: angle_motor_1_5_set
  {
    out << "angle_motor_1_5_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_5_set, out);
    out << ", ";
  }

  // member: angle_motor_1_6_set
  {
    out << "angle_motor_1_6_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_6_set, out);
    out << ", ";
  }

  // member: angle_motor_2_1_set
  {
    out << "angle_motor_2_1_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_1_set, out);
    out << ", ";
  }

  // member: angle_motor_2_2_set
  {
    out << "angle_motor_2_2_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_2_set, out);
    out << ", ";
  }

  // member: angle_motor_2_3_set
  {
    out << "angle_motor_2_3_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_3_set, out);
    out << ", ";
  }

  // member: angle_motor_2_4_set
  {
    out << "angle_motor_2_4_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_4_set, out);
    out << ", ";
  }

  // member: angle_motor_2_5_set
  {
    out << "angle_motor_2_5_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_5_set, out);
    out << ", ";
  }

  // member: angle_motor_2_6_set
  {
    out << "angle_motor_2_6_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_6_set, out);
    out << ", ";
  }

  // member: angle_motor_3_1_set
  {
    out << "angle_motor_3_1_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_3_1_set, out);
    out << ", ";
  }

  // member: angle_motor_3_2_set
  {
    out << "angle_motor_3_2_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_3_2_set, out);
    out << ", ";
  }

  // member: angle_motor_3_3_set
  {
    out << "angle_motor_3_3_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_3_3_set, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Rotate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: angle_motor_1_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_1_1: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_1, out);
    out << "\n";
  }

  // member: angle_motor_1_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_1_2: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_2, out);
    out << "\n";
  }

  // member: angle_motor_1_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_1_3: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_3, out);
    out << "\n";
  }

  // member: angle_motor_1_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_1_4: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_4, out);
    out << "\n";
  }

  // member: angle_motor_1_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_1_5: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_5, out);
    out << "\n";
  }

  // member: angle_motor_1_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_1_6: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_6, out);
    out << "\n";
  }

  // member: angle_motor_2_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_2_1: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_1, out);
    out << "\n";
  }

  // member: angle_motor_2_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_2_2: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_2, out);
    out << "\n";
  }

  // member: angle_motor_2_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_2_3: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_3, out);
    out << "\n";
  }

  // member: angle_motor_2_4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_2_4: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_4, out);
    out << "\n";
  }

  // member: angle_motor_2_5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_2_5: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_5, out);
    out << "\n";
  }

  // member: angle_motor_2_6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_2_6: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_6, out);
    out << "\n";
  }

  // member: angle_motor_3_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_3_1: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_3_1, out);
    out << "\n";
  }

  // member: angle_motor_3_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_3_2: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_3_2, out);
    out << "\n";
  }

  // member: angle_motor_3_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_3_3: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_3_3, out);
    out << "\n";
  }

  // member: angle_motor_1_1_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_1_1_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_1_set, out);
    out << "\n";
  }

  // member: angle_motor_1_2_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_1_2_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_2_set, out);
    out << "\n";
  }

  // member: angle_motor_1_3_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_1_3_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_3_set, out);
    out << "\n";
  }

  // member: angle_motor_1_4_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_1_4_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_4_set, out);
    out << "\n";
  }

  // member: angle_motor_1_5_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_1_5_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_5_set, out);
    out << "\n";
  }

  // member: angle_motor_1_6_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_1_6_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_1_6_set, out);
    out << "\n";
  }

  // member: angle_motor_2_1_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_2_1_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_1_set, out);
    out << "\n";
  }

  // member: angle_motor_2_2_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_2_2_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_2_set, out);
    out << "\n";
  }

  // member: angle_motor_2_3_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_2_3_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_3_set, out);
    out << "\n";
  }

  // member: angle_motor_2_4_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_2_4_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_4_set, out);
    out << "\n";
  }

  // member: angle_motor_2_5_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_2_5_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_5_set, out);
    out << "\n";
  }

  // member: angle_motor_2_6_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_2_6_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_2_6_set, out);
    out << "\n";
  }

  // member: angle_motor_3_1_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_3_1_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_3_1_set, out);
    out << "\n";
  }

  // member: angle_motor_3_2_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_3_2_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_3_2_set, out);
    out << "\n";
  }

  // member: angle_motor_3_3_set
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_motor_3_3_set: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_motor_3_3_set, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Rotate_Request & msg, bool use_flow_style = false)
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
  const mybot_interfaces::srv::Rotate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  mybot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mybot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mybot_interfaces::srv::Rotate_Request & msg)
{
  return mybot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mybot_interfaces::srv::Rotate_Request>()
{
  return "mybot_interfaces::srv::Rotate_Request";
}

template<>
inline const char * name<mybot_interfaces::srv::Rotate_Request>()
{
  return "mybot_interfaces/srv/Rotate_Request";
}

template<>
struct has_fixed_size<mybot_interfaces::srv::Rotate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mybot_interfaces::srv::Rotate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mybot_interfaces::srv::Rotate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace mybot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Rotate_Response & msg,
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
  const Rotate_Response & msg,
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

inline std::string to_yaml(const Rotate_Response & msg, bool use_flow_style = false)
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
  const mybot_interfaces::srv::Rotate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  mybot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mybot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const mybot_interfaces::srv::Rotate_Response & msg)
{
  return mybot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<mybot_interfaces::srv::Rotate_Response>()
{
  return "mybot_interfaces::srv::Rotate_Response";
}

template<>
inline const char * name<mybot_interfaces::srv::Rotate_Response>()
{
  return "mybot_interfaces/srv/Rotate_Response";
}

template<>
struct has_fixed_size<mybot_interfaces::srv::Rotate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mybot_interfaces::srv::Rotate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mybot_interfaces::srv::Rotate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mybot_interfaces::srv::Rotate>()
{
  return "mybot_interfaces::srv::Rotate";
}

template<>
inline const char * name<mybot_interfaces::srv::Rotate>()
{
  return "mybot_interfaces/srv/Rotate";
}

template<>
struct has_fixed_size<mybot_interfaces::srv::Rotate>
  : std::integral_constant<
    bool,
    has_fixed_size<mybot_interfaces::srv::Rotate_Request>::value &&
    has_fixed_size<mybot_interfaces::srv::Rotate_Response>::value
  >
{
};

template<>
struct has_bounded_size<mybot_interfaces::srv::Rotate>
  : std::integral_constant<
    bool,
    has_bounded_size<mybot_interfaces::srv::Rotate_Request>::value &&
    has_bounded_size<mybot_interfaces::srv::Rotate_Response>::value
  >
{
};

template<>
struct is_service<mybot_interfaces::srv::Rotate>
  : std::true_type
{
};

template<>
struct is_service_request<mybot_interfaces::srv::Rotate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mybot_interfaces::srv::Rotate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYBOT_INTERFACES__SRV__DETAIL__ROTATE__TRAITS_HPP_
