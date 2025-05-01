// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from message:msg/Emotion.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__DETAIL__EMOTION__TRAITS_HPP_
#define MESSAGE__MSG__DETAIL__EMOTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "message/msg/detail/emotion__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace message
{

namespace msg
{

inline void to_flow_style_yaml(
  const Emotion & msg,
  std::ostream & out)
{
  out << "{";
  // member: emotion
  {
    out << "emotion: ";
    rosidl_generator_traits::value_to_yaml(msg.emotion, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Emotion & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: emotion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emotion: ";
    rosidl_generator_traits::value_to_yaml(msg.emotion, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Emotion & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace message

namespace rosidl_generator_traits
{

[[deprecated("use message::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const message::msg::Emotion & msg,
  std::ostream & out, size_t indentation = 0)
{
  message::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use message::msg::to_yaml() instead")]]
inline std::string to_yaml(const message::msg::Emotion & msg)
{
  return message::msg::to_yaml(msg);
}

template<>
inline const char * data_type<message::msg::Emotion>()
{
  return "message::msg::Emotion";
}

template<>
inline const char * name<message::msg::Emotion>()
{
  return "message/msg/Emotion";
}

template<>
struct has_fixed_size<message::msg::Emotion>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<message::msg::Emotion>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<message::msg::Emotion>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MESSAGE__MSG__DETAIL__EMOTION__TRAITS_HPP_
