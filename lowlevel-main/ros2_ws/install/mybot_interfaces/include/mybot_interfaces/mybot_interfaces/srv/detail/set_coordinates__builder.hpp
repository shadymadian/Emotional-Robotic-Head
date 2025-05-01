// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mybot_interfaces:srv/SetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef MYBOT_INTERFACES__SRV__DETAIL__SET_COORDINATES__BUILDER_HPP_
#define MYBOT_INTERFACES__SRV__DETAIL__SET_COORDINATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mybot_interfaces/srv/detail/set_coordinates__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mybot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCoordinates_Request_coordinates
{
public:
  Init_SetCoordinates_Request_coordinates()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mybot_interfaces::srv::SetCoordinates_Request coordinates(::mybot_interfaces::srv::SetCoordinates_Request::_coordinates_type arg)
  {
    msg_.coordinates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mybot_interfaces::srv::SetCoordinates_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mybot_interfaces::srv::SetCoordinates_Request>()
{
  return mybot_interfaces::srv::builder::Init_SetCoordinates_Request_coordinates();
}

}  // namespace mybot_interfaces


namespace mybot_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetCoordinates_Response_success
{
public:
  Init_SetCoordinates_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mybot_interfaces::srv::SetCoordinates_Response success(::mybot_interfaces::srv::SetCoordinates_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mybot_interfaces::srv::SetCoordinates_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mybot_interfaces::srv::SetCoordinates_Response>()
{
  return mybot_interfaces::srv::builder::Init_SetCoordinates_Response_success();
}

}  // namespace mybot_interfaces

#endif  // MYBOT_INTERFACES__SRV__DETAIL__SET_COORDINATES__BUILDER_HPP_
