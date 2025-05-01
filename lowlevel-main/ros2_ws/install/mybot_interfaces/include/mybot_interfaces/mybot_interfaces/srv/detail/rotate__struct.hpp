// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mybot_interfaces:srv/Rotate.idl
// generated code does not contain a copyright notice

#ifndef MYBOT_INTERFACES__SRV__DETAIL__ROTATE__STRUCT_HPP_
#define MYBOT_INTERFACES__SRV__DETAIL__ROTATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__mybot_interfaces__srv__Rotate_Request __attribute__((deprecated))
#else
# define DEPRECATED__mybot_interfaces__srv__Rotate_Request __declspec(deprecated)
#endif

namespace mybot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Rotate_Request_
{
  using Type = Rotate_Request_<ContainerAllocator>;

  explicit Rotate_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_motor_1_1 = 0.0;
      this->angle_motor_1_2 = 0.0;
      this->angle_motor_1_3 = 0.0;
      this->angle_motor_1_4 = 0.0;
      this->angle_motor_1_5 = 0.0;
      this->angle_motor_1_6 = 0.0;
      this->angle_motor_2_1 = 0.0;
      this->angle_motor_2_2 = 0.0;
      this->angle_motor_2_3 = 0.0;
      this->angle_motor_2_4 = 0.0;
      this->angle_motor_2_5 = 0.0;
      this->angle_motor_2_6 = 0.0;
      this->angle_motor_3_1 = 0.0;
      this->angle_motor_3_2 = 0.0;
      this->angle_motor_3_3 = 0.0;
      this->angle_motor_1_1_set = 0.0;
      this->angle_motor_1_2_set = 0.0;
      this->angle_motor_1_3_set = 0.0;
      this->angle_motor_1_4_set = 0.0;
      this->angle_motor_1_5_set = 0.0;
      this->angle_motor_1_6_set = 0.0;
      this->angle_motor_2_1_set = 0.0;
      this->angle_motor_2_2_set = 0.0;
      this->angle_motor_2_3_set = 0.0;
      this->angle_motor_2_4_set = 0.0;
      this->angle_motor_2_5_set = 0.0;
      this->angle_motor_2_6_set = 0.0;
      this->angle_motor_3_1_set = 0.0;
      this->angle_motor_3_2_set = 0.0;
      this->angle_motor_3_3_set = 0.0;
    }
  }

  explicit Rotate_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->angle_motor_1_1 = 0.0;
      this->angle_motor_1_2 = 0.0;
      this->angle_motor_1_3 = 0.0;
      this->angle_motor_1_4 = 0.0;
      this->angle_motor_1_5 = 0.0;
      this->angle_motor_1_6 = 0.0;
      this->angle_motor_2_1 = 0.0;
      this->angle_motor_2_2 = 0.0;
      this->angle_motor_2_3 = 0.0;
      this->angle_motor_2_4 = 0.0;
      this->angle_motor_2_5 = 0.0;
      this->angle_motor_2_6 = 0.0;
      this->angle_motor_3_1 = 0.0;
      this->angle_motor_3_2 = 0.0;
      this->angle_motor_3_3 = 0.0;
      this->angle_motor_1_1_set = 0.0;
      this->angle_motor_1_2_set = 0.0;
      this->angle_motor_1_3_set = 0.0;
      this->angle_motor_1_4_set = 0.0;
      this->angle_motor_1_5_set = 0.0;
      this->angle_motor_1_6_set = 0.0;
      this->angle_motor_2_1_set = 0.0;
      this->angle_motor_2_2_set = 0.0;
      this->angle_motor_2_3_set = 0.0;
      this->angle_motor_2_4_set = 0.0;
      this->angle_motor_2_5_set = 0.0;
      this->angle_motor_2_6_set = 0.0;
      this->angle_motor_3_1_set = 0.0;
      this->angle_motor_3_2_set = 0.0;
      this->angle_motor_3_3_set = 0.0;
    }
  }

  // field types and members
  using _angle_motor_1_1_type =
    double;
  _angle_motor_1_1_type angle_motor_1_1;
  using _angle_motor_1_2_type =
    double;
  _angle_motor_1_2_type angle_motor_1_2;
  using _angle_motor_1_3_type =
    double;
  _angle_motor_1_3_type angle_motor_1_3;
  using _angle_motor_1_4_type =
    double;
  _angle_motor_1_4_type angle_motor_1_4;
  using _angle_motor_1_5_type =
    double;
  _angle_motor_1_5_type angle_motor_1_5;
  using _angle_motor_1_6_type =
    double;
  _angle_motor_1_6_type angle_motor_1_6;
  using _angle_motor_2_1_type =
    double;
  _angle_motor_2_1_type angle_motor_2_1;
  using _angle_motor_2_2_type =
    double;
  _angle_motor_2_2_type angle_motor_2_2;
  using _angle_motor_2_3_type =
    double;
  _angle_motor_2_3_type angle_motor_2_3;
  using _angle_motor_2_4_type =
    double;
  _angle_motor_2_4_type angle_motor_2_4;
  using _angle_motor_2_5_type =
    double;
  _angle_motor_2_5_type angle_motor_2_5;
  using _angle_motor_2_6_type =
    double;
  _angle_motor_2_6_type angle_motor_2_6;
  using _angle_motor_3_1_type =
    double;
  _angle_motor_3_1_type angle_motor_3_1;
  using _angle_motor_3_2_type =
    double;
  _angle_motor_3_2_type angle_motor_3_2;
  using _angle_motor_3_3_type =
    double;
  _angle_motor_3_3_type angle_motor_3_3;
  using _angle_motor_1_1_set_type =
    double;
  _angle_motor_1_1_set_type angle_motor_1_1_set;
  using _angle_motor_1_2_set_type =
    double;
  _angle_motor_1_2_set_type angle_motor_1_2_set;
  using _angle_motor_1_3_set_type =
    double;
  _angle_motor_1_3_set_type angle_motor_1_3_set;
  using _angle_motor_1_4_set_type =
    double;
  _angle_motor_1_4_set_type angle_motor_1_4_set;
  using _angle_motor_1_5_set_type =
    double;
  _angle_motor_1_5_set_type angle_motor_1_5_set;
  using _angle_motor_1_6_set_type =
    double;
  _angle_motor_1_6_set_type angle_motor_1_6_set;
  using _angle_motor_2_1_set_type =
    double;
  _angle_motor_2_1_set_type angle_motor_2_1_set;
  using _angle_motor_2_2_set_type =
    double;
  _angle_motor_2_2_set_type angle_motor_2_2_set;
  using _angle_motor_2_3_set_type =
    double;
  _angle_motor_2_3_set_type angle_motor_2_3_set;
  using _angle_motor_2_4_set_type =
    double;
  _angle_motor_2_4_set_type angle_motor_2_4_set;
  using _angle_motor_2_5_set_type =
    double;
  _angle_motor_2_5_set_type angle_motor_2_5_set;
  using _angle_motor_2_6_set_type =
    double;
  _angle_motor_2_6_set_type angle_motor_2_6_set;
  using _angle_motor_3_1_set_type =
    double;
  _angle_motor_3_1_set_type angle_motor_3_1_set;
  using _angle_motor_3_2_set_type =
    double;
  _angle_motor_3_2_set_type angle_motor_3_2_set;
  using _angle_motor_3_3_set_type =
    double;
  _angle_motor_3_3_set_type angle_motor_3_3_set;

  // setters for named parameter idiom
  Type & set__angle_motor_1_1(
    const double & _arg)
  {
    this->angle_motor_1_1 = _arg;
    return *this;
  }
  Type & set__angle_motor_1_2(
    const double & _arg)
  {
    this->angle_motor_1_2 = _arg;
    return *this;
  }
  Type & set__angle_motor_1_3(
    const double & _arg)
  {
    this->angle_motor_1_3 = _arg;
    return *this;
  }
  Type & set__angle_motor_1_4(
    const double & _arg)
  {
    this->angle_motor_1_4 = _arg;
    return *this;
  }
  Type & set__angle_motor_1_5(
    const double & _arg)
  {
    this->angle_motor_1_5 = _arg;
    return *this;
  }
  Type & set__angle_motor_1_6(
    const double & _arg)
  {
    this->angle_motor_1_6 = _arg;
    return *this;
  }
  Type & set__angle_motor_2_1(
    const double & _arg)
  {
    this->angle_motor_2_1 = _arg;
    return *this;
  }
  Type & set__angle_motor_2_2(
    const double & _arg)
  {
    this->angle_motor_2_2 = _arg;
    return *this;
  }
  Type & set__angle_motor_2_3(
    const double & _arg)
  {
    this->angle_motor_2_3 = _arg;
    return *this;
  }
  Type & set__angle_motor_2_4(
    const double & _arg)
  {
    this->angle_motor_2_4 = _arg;
    return *this;
  }
  Type & set__angle_motor_2_5(
    const double & _arg)
  {
    this->angle_motor_2_5 = _arg;
    return *this;
  }
  Type & set__angle_motor_2_6(
    const double & _arg)
  {
    this->angle_motor_2_6 = _arg;
    return *this;
  }
  Type & set__angle_motor_3_1(
    const double & _arg)
  {
    this->angle_motor_3_1 = _arg;
    return *this;
  }
  Type & set__angle_motor_3_2(
    const double & _arg)
  {
    this->angle_motor_3_2 = _arg;
    return *this;
  }
  Type & set__angle_motor_3_3(
    const double & _arg)
  {
    this->angle_motor_3_3 = _arg;
    return *this;
  }
  Type & set__angle_motor_1_1_set(
    const double & _arg)
  {
    this->angle_motor_1_1_set = _arg;
    return *this;
  }
  Type & set__angle_motor_1_2_set(
    const double & _arg)
  {
    this->angle_motor_1_2_set = _arg;
    return *this;
  }
  Type & set__angle_motor_1_3_set(
    const double & _arg)
  {
    this->angle_motor_1_3_set = _arg;
    return *this;
  }
  Type & set__angle_motor_1_4_set(
    const double & _arg)
  {
    this->angle_motor_1_4_set = _arg;
    return *this;
  }
  Type & set__angle_motor_1_5_set(
    const double & _arg)
  {
    this->angle_motor_1_5_set = _arg;
    return *this;
  }
  Type & set__angle_motor_1_6_set(
    const double & _arg)
  {
    this->angle_motor_1_6_set = _arg;
    return *this;
  }
  Type & set__angle_motor_2_1_set(
    const double & _arg)
  {
    this->angle_motor_2_1_set = _arg;
    return *this;
  }
  Type & set__angle_motor_2_2_set(
    const double & _arg)
  {
    this->angle_motor_2_2_set = _arg;
    return *this;
  }
  Type & set__angle_motor_2_3_set(
    const double & _arg)
  {
    this->angle_motor_2_3_set = _arg;
    return *this;
  }
  Type & set__angle_motor_2_4_set(
    const double & _arg)
  {
    this->angle_motor_2_4_set = _arg;
    return *this;
  }
  Type & set__angle_motor_2_5_set(
    const double & _arg)
  {
    this->angle_motor_2_5_set = _arg;
    return *this;
  }
  Type & set__angle_motor_2_6_set(
    const double & _arg)
  {
    this->angle_motor_2_6_set = _arg;
    return *this;
  }
  Type & set__angle_motor_3_1_set(
    const double & _arg)
  {
    this->angle_motor_3_1_set = _arg;
    return *this;
  }
  Type & set__angle_motor_3_2_set(
    const double & _arg)
  {
    this->angle_motor_3_2_set = _arg;
    return *this;
  }
  Type & set__angle_motor_3_3_set(
    const double & _arg)
  {
    this->angle_motor_3_3_set = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mybot_interfaces::srv::Rotate_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mybot_interfaces::srv::Rotate_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mybot_interfaces::srv::Rotate_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mybot_interfaces::srv::Rotate_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mybot_interfaces::srv::Rotate_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mybot_interfaces::srv::Rotate_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mybot_interfaces::srv::Rotate_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mybot_interfaces::srv::Rotate_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mybot_interfaces::srv::Rotate_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mybot_interfaces::srv::Rotate_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mybot_interfaces__srv__Rotate_Request
    std::shared_ptr<mybot_interfaces::srv::Rotate_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mybot_interfaces__srv__Rotate_Request
    std::shared_ptr<mybot_interfaces::srv::Rotate_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rotate_Request_ & other) const
  {
    if (this->angle_motor_1_1 != other.angle_motor_1_1) {
      return false;
    }
    if (this->angle_motor_1_2 != other.angle_motor_1_2) {
      return false;
    }
    if (this->angle_motor_1_3 != other.angle_motor_1_3) {
      return false;
    }
    if (this->angle_motor_1_4 != other.angle_motor_1_4) {
      return false;
    }
    if (this->angle_motor_1_5 != other.angle_motor_1_5) {
      return false;
    }
    if (this->angle_motor_1_6 != other.angle_motor_1_6) {
      return false;
    }
    if (this->angle_motor_2_1 != other.angle_motor_2_1) {
      return false;
    }
    if (this->angle_motor_2_2 != other.angle_motor_2_2) {
      return false;
    }
    if (this->angle_motor_2_3 != other.angle_motor_2_3) {
      return false;
    }
    if (this->angle_motor_2_4 != other.angle_motor_2_4) {
      return false;
    }
    if (this->angle_motor_2_5 != other.angle_motor_2_5) {
      return false;
    }
    if (this->angle_motor_2_6 != other.angle_motor_2_6) {
      return false;
    }
    if (this->angle_motor_3_1 != other.angle_motor_3_1) {
      return false;
    }
    if (this->angle_motor_3_2 != other.angle_motor_3_2) {
      return false;
    }
    if (this->angle_motor_3_3 != other.angle_motor_3_3) {
      return false;
    }
    if (this->angle_motor_1_1_set != other.angle_motor_1_1_set) {
      return false;
    }
    if (this->angle_motor_1_2_set != other.angle_motor_1_2_set) {
      return false;
    }
    if (this->angle_motor_1_3_set != other.angle_motor_1_3_set) {
      return false;
    }
    if (this->angle_motor_1_4_set != other.angle_motor_1_4_set) {
      return false;
    }
    if (this->angle_motor_1_5_set != other.angle_motor_1_5_set) {
      return false;
    }
    if (this->angle_motor_1_6_set != other.angle_motor_1_6_set) {
      return false;
    }
    if (this->angle_motor_2_1_set != other.angle_motor_2_1_set) {
      return false;
    }
    if (this->angle_motor_2_2_set != other.angle_motor_2_2_set) {
      return false;
    }
    if (this->angle_motor_2_3_set != other.angle_motor_2_3_set) {
      return false;
    }
    if (this->angle_motor_2_4_set != other.angle_motor_2_4_set) {
      return false;
    }
    if (this->angle_motor_2_5_set != other.angle_motor_2_5_set) {
      return false;
    }
    if (this->angle_motor_2_6_set != other.angle_motor_2_6_set) {
      return false;
    }
    if (this->angle_motor_3_1_set != other.angle_motor_3_1_set) {
      return false;
    }
    if (this->angle_motor_3_2_set != other.angle_motor_3_2_set) {
      return false;
    }
    if (this->angle_motor_3_3_set != other.angle_motor_3_3_set) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rotate_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rotate_Request_

// alias to use template instance with default allocator
using Rotate_Request =
  mybot_interfaces::srv::Rotate_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mybot_interfaces


#ifndef _WIN32
# define DEPRECATED__mybot_interfaces__srv__Rotate_Response __attribute__((deprecated))
#else
# define DEPRECATED__mybot_interfaces__srv__Rotate_Response __declspec(deprecated)
#endif

namespace mybot_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Rotate_Response_
{
  using Type = Rotate_Response_<ContainerAllocator>;

  explicit Rotate_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit Rotate_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mybot_interfaces::srv::Rotate_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mybot_interfaces::srv::Rotate_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mybot_interfaces::srv::Rotate_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mybot_interfaces::srv::Rotate_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mybot_interfaces::srv::Rotate_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mybot_interfaces::srv::Rotate_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mybot_interfaces::srv::Rotate_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mybot_interfaces::srv::Rotate_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mybot_interfaces::srv::Rotate_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mybot_interfaces::srv::Rotate_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mybot_interfaces__srv__Rotate_Response
    std::shared_ptr<mybot_interfaces::srv::Rotate_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mybot_interfaces__srv__Rotate_Response
    std::shared_ptr<mybot_interfaces::srv::Rotate_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rotate_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rotate_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rotate_Response_

// alias to use template instance with default allocator
using Rotate_Response =
  mybot_interfaces::srv::Rotate_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mybot_interfaces

namespace mybot_interfaces
{

namespace srv
{

struct Rotate
{
  using Request = mybot_interfaces::srv::Rotate_Request;
  using Response = mybot_interfaces::srv::Rotate_Response;
};

}  // namespace srv

}  // namespace mybot_interfaces

#endif  // MYBOT_INTERFACES__SRV__DETAIL__ROTATE__STRUCT_HPP_
