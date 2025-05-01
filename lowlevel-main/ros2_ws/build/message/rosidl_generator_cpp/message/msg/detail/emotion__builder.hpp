// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from message:msg/Emotion.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__DETAIL__EMOTION__BUILDER_HPP_
#define MESSAGE__MSG__DETAIL__EMOTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "message/msg/detail/emotion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace message
{

namespace msg
{

namespace builder
{

class Init_Emotion_z
{
public:
  explicit Init_Emotion_z(::message::msg::Emotion & msg)
  : msg_(msg)
  {}
  ::message::msg::Emotion z(::message::msg::Emotion::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::message::msg::Emotion msg_;
};

class Init_Emotion_y
{
public:
  explicit Init_Emotion_y(::message::msg::Emotion & msg)
  : msg_(msg)
  {}
  Init_Emotion_z y(::message::msg::Emotion::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Emotion_z(msg_);
  }

private:
  ::message::msg::Emotion msg_;
};

class Init_Emotion_x
{
public:
  explicit Init_Emotion_x(::message::msg::Emotion & msg)
  : msg_(msg)
  {}
  Init_Emotion_y x(::message::msg::Emotion::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Emotion_y(msg_);
  }

private:
  ::message::msg::Emotion msg_;
};

class Init_Emotion_emotion
{
public:
  Init_Emotion_emotion()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Emotion_x emotion(::message::msg::Emotion::_emotion_type arg)
  {
    msg_.emotion = std::move(arg);
    return Init_Emotion_x(msg_);
  }

private:
  ::message::msg::Emotion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::message::msg::Emotion>()
{
  return message::msg::builder::Init_Emotion_emotion();
}

}  // namespace message

#endif  // MESSAGE__MSG__DETAIL__EMOTION__BUILDER_HPP_
