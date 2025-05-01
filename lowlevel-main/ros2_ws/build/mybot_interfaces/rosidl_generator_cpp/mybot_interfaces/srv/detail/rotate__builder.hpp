// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mybot_interfaces:srv/Rotate.idl
// generated code does not contain a copyright notice

#ifndef MYBOT_INTERFACES__SRV__DETAIL__ROTATE__BUILDER_HPP_
#define MYBOT_INTERFACES__SRV__DETAIL__ROTATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mybot_interfaces/srv/detail/rotate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mybot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rotate_Request_angle_motor_3_3_set
{
public:
  explicit Init_Rotate_Request_angle_motor_3_3_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  ::mybot_interfaces::srv::Rotate_Request angle_motor_3_3_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_3_3_set_type arg)
  {
    msg_.angle_motor_3_3_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_3_2_set
{
public:
  explicit Init_Rotate_Request_angle_motor_3_2_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_3_3_set angle_motor_3_2_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_3_2_set_type arg)
  {
    msg_.angle_motor_3_2_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_3_3_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_3_1_set
{
public:
  explicit Init_Rotate_Request_angle_motor_3_1_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_3_2_set angle_motor_3_1_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_3_1_set_type arg)
  {
    msg_.angle_motor_3_1_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_3_2_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_2_6_set
{
public:
  explicit Init_Rotate_Request_angle_motor_2_6_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_3_1_set angle_motor_2_6_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_2_6_set_type arg)
  {
    msg_.angle_motor_2_6_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_3_1_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_2_5_set
{
public:
  explicit Init_Rotate_Request_angle_motor_2_5_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_2_6_set angle_motor_2_5_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_2_5_set_type arg)
  {
    msg_.angle_motor_2_5_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_2_6_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_2_4_set
{
public:
  explicit Init_Rotate_Request_angle_motor_2_4_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_2_5_set angle_motor_2_4_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_2_4_set_type arg)
  {
    msg_.angle_motor_2_4_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_2_5_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_2_3_set
{
public:
  explicit Init_Rotate_Request_angle_motor_2_3_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_2_4_set angle_motor_2_3_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_2_3_set_type arg)
  {
    msg_.angle_motor_2_3_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_2_4_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_2_2_set
{
public:
  explicit Init_Rotate_Request_angle_motor_2_2_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_2_3_set angle_motor_2_2_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_2_2_set_type arg)
  {
    msg_.angle_motor_2_2_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_2_3_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_2_1_set
{
public:
  explicit Init_Rotate_Request_angle_motor_2_1_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_2_2_set angle_motor_2_1_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_2_1_set_type arg)
  {
    msg_.angle_motor_2_1_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_2_2_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_1_6_set
{
public:
  explicit Init_Rotate_Request_angle_motor_1_6_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_2_1_set angle_motor_1_6_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_1_6_set_type arg)
  {
    msg_.angle_motor_1_6_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_2_1_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_1_5_set
{
public:
  explicit Init_Rotate_Request_angle_motor_1_5_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_1_6_set angle_motor_1_5_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_1_5_set_type arg)
  {
    msg_.angle_motor_1_5_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_1_6_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_1_4_set
{
public:
  explicit Init_Rotate_Request_angle_motor_1_4_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_1_5_set angle_motor_1_4_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_1_4_set_type arg)
  {
    msg_.angle_motor_1_4_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_1_5_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_1_3_set
{
public:
  explicit Init_Rotate_Request_angle_motor_1_3_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_1_4_set angle_motor_1_3_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_1_3_set_type arg)
  {
    msg_.angle_motor_1_3_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_1_4_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_1_2_set
{
public:
  explicit Init_Rotate_Request_angle_motor_1_2_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_1_3_set angle_motor_1_2_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_1_2_set_type arg)
  {
    msg_.angle_motor_1_2_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_1_3_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_1_1_set
{
public:
  explicit Init_Rotate_Request_angle_motor_1_1_set(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_1_2_set angle_motor_1_1_set(::mybot_interfaces::srv::Rotate_Request::_angle_motor_1_1_set_type arg)
  {
    msg_.angle_motor_1_1_set = std::move(arg);
    return Init_Rotate_Request_angle_motor_1_2_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_3_3
{
public:
  explicit Init_Rotate_Request_angle_motor_3_3(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_1_1_set angle_motor_3_3(::mybot_interfaces::srv::Rotate_Request::_angle_motor_3_3_type arg)
  {
    msg_.angle_motor_3_3 = std::move(arg);
    return Init_Rotate_Request_angle_motor_1_1_set(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_3_2
{
public:
  explicit Init_Rotate_Request_angle_motor_3_2(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_3_3 angle_motor_3_2(::mybot_interfaces::srv::Rotate_Request::_angle_motor_3_2_type arg)
  {
    msg_.angle_motor_3_2 = std::move(arg);
    return Init_Rotate_Request_angle_motor_3_3(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_3_1
{
public:
  explicit Init_Rotate_Request_angle_motor_3_1(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_3_2 angle_motor_3_1(::mybot_interfaces::srv::Rotate_Request::_angle_motor_3_1_type arg)
  {
    msg_.angle_motor_3_1 = std::move(arg);
    return Init_Rotate_Request_angle_motor_3_2(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_2_6
{
public:
  explicit Init_Rotate_Request_angle_motor_2_6(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_3_1 angle_motor_2_6(::mybot_interfaces::srv::Rotate_Request::_angle_motor_2_6_type arg)
  {
    msg_.angle_motor_2_6 = std::move(arg);
    return Init_Rotate_Request_angle_motor_3_1(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_2_5
{
public:
  explicit Init_Rotate_Request_angle_motor_2_5(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_2_6 angle_motor_2_5(::mybot_interfaces::srv::Rotate_Request::_angle_motor_2_5_type arg)
  {
    msg_.angle_motor_2_5 = std::move(arg);
    return Init_Rotate_Request_angle_motor_2_6(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_2_4
{
public:
  explicit Init_Rotate_Request_angle_motor_2_4(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_2_5 angle_motor_2_4(::mybot_interfaces::srv::Rotate_Request::_angle_motor_2_4_type arg)
  {
    msg_.angle_motor_2_4 = std::move(arg);
    return Init_Rotate_Request_angle_motor_2_5(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_2_3
{
public:
  explicit Init_Rotate_Request_angle_motor_2_3(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_2_4 angle_motor_2_3(::mybot_interfaces::srv::Rotate_Request::_angle_motor_2_3_type arg)
  {
    msg_.angle_motor_2_3 = std::move(arg);
    return Init_Rotate_Request_angle_motor_2_4(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_2_2
{
public:
  explicit Init_Rotate_Request_angle_motor_2_2(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_2_3 angle_motor_2_2(::mybot_interfaces::srv::Rotate_Request::_angle_motor_2_2_type arg)
  {
    msg_.angle_motor_2_2 = std::move(arg);
    return Init_Rotate_Request_angle_motor_2_3(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_2_1
{
public:
  explicit Init_Rotate_Request_angle_motor_2_1(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_2_2 angle_motor_2_1(::mybot_interfaces::srv::Rotate_Request::_angle_motor_2_1_type arg)
  {
    msg_.angle_motor_2_1 = std::move(arg);
    return Init_Rotate_Request_angle_motor_2_2(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_1_6
{
public:
  explicit Init_Rotate_Request_angle_motor_1_6(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_2_1 angle_motor_1_6(::mybot_interfaces::srv::Rotate_Request::_angle_motor_1_6_type arg)
  {
    msg_.angle_motor_1_6 = std::move(arg);
    return Init_Rotate_Request_angle_motor_2_1(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_1_5
{
public:
  explicit Init_Rotate_Request_angle_motor_1_5(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_1_6 angle_motor_1_5(::mybot_interfaces::srv::Rotate_Request::_angle_motor_1_5_type arg)
  {
    msg_.angle_motor_1_5 = std::move(arg);
    return Init_Rotate_Request_angle_motor_1_6(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_1_4
{
public:
  explicit Init_Rotate_Request_angle_motor_1_4(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_1_5 angle_motor_1_4(::mybot_interfaces::srv::Rotate_Request::_angle_motor_1_4_type arg)
  {
    msg_.angle_motor_1_4 = std::move(arg);
    return Init_Rotate_Request_angle_motor_1_5(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_1_3
{
public:
  explicit Init_Rotate_Request_angle_motor_1_3(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_1_4 angle_motor_1_3(::mybot_interfaces::srv::Rotate_Request::_angle_motor_1_3_type arg)
  {
    msg_.angle_motor_1_3 = std::move(arg);
    return Init_Rotate_Request_angle_motor_1_4(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_1_2
{
public:
  explicit Init_Rotate_Request_angle_motor_1_2(::mybot_interfaces::srv::Rotate_Request & msg)
  : msg_(msg)
  {}
  Init_Rotate_Request_angle_motor_1_3 angle_motor_1_2(::mybot_interfaces::srv::Rotate_Request::_angle_motor_1_2_type arg)
  {
    msg_.angle_motor_1_2 = std::move(arg);
    return Init_Rotate_Request_angle_motor_1_3(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

class Init_Rotate_Request_angle_motor_1_1
{
public:
  Init_Rotate_Request_angle_motor_1_1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rotate_Request_angle_motor_1_2 angle_motor_1_1(::mybot_interfaces::srv::Rotate_Request::_angle_motor_1_1_type arg)
  {
    msg_.angle_motor_1_1 = std::move(arg);
    return Init_Rotate_Request_angle_motor_1_2(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mybot_interfaces::srv::Rotate_Request>()
{
  return mybot_interfaces::srv::builder::Init_Rotate_Request_angle_motor_1_1();
}

}  // namespace mybot_interfaces


namespace mybot_interfaces
{

namespace srv
{

namespace builder
{

class Init_Rotate_Response_success
{
public:
  Init_Rotate_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mybot_interfaces::srv::Rotate_Response success(::mybot_interfaces::srv::Rotate_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mybot_interfaces::srv::Rotate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mybot_interfaces::srv::Rotate_Response>()
{
  return mybot_interfaces::srv::builder::Init_Rotate_Response_success();
}

}  // namespace mybot_interfaces

#endif  // MYBOT_INTERFACES__SRV__DETAIL__ROTATE__BUILDER_HPP_
