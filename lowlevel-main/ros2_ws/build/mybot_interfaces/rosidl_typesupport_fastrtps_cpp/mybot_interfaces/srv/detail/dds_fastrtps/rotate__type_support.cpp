// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mybot_interfaces:srv/Rotate.idl
// generated code does not contain a copyright notice
#include "mybot_interfaces/srv/detail/rotate__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mybot_interfaces/srv/detail/rotate__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mybot_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mybot_interfaces
cdr_serialize(
  const mybot_interfaces::srv::Rotate_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: angle_motor_1_1
  cdr << ros_message.angle_motor_1_1;
  // Member: angle_motor_1_2
  cdr << ros_message.angle_motor_1_2;
  // Member: angle_motor_1_3
  cdr << ros_message.angle_motor_1_3;
  // Member: angle_motor_1_4
  cdr << ros_message.angle_motor_1_4;
  // Member: angle_motor_1_5
  cdr << ros_message.angle_motor_1_5;
  // Member: angle_motor_1_6
  cdr << ros_message.angle_motor_1_6;
  // Member: angle_motor_2_1
  cdr << ros_message.angle_motor_2_1;
  // Member: angle_motor_2_2
  cdr << ros_message.angle_motor_2_2;
  // Member: angle_motor_2_3
  cdr << ros_message.angle_motor_2_3;
  // Member: angle_motor_2_4
  cdr << ros_message.angle_motor_2_4;
  // Member: angle_motor_2_5
  cdr << ros_message.angle_motor_2_5;
  // Member: angle_motor_2_6
  cdr << ros_message.angle_motor_2_6;
  // Member: angle_motor_3_1
  cdr << ros_message.angle_motor_3_1;
  // Member: angle_motor_3_2
  cdr << ros_message.angle_motor_3_2;
  // Member: angle_motor_3_3
  cdr << ros_message.angle_motor_3_3;
  // Member: angle_motor_1_1_set
  cdr << ros_message.angle_motor_1_1_set;
  // Member: angle_motor_1_2_set
  cdr << ros_message.angle_motor_1_2_set;
  // Member: angle_motor_1_3_set
  cdr << ros_message.angle_motor_1_3_set;
  // Member: angle_motor_1_4_set
  cdr << ros_message.angle_motor_1_4_set;
  // Member: angle_motor_1_5_set
  cdr << ros_message.angle_motor_1_5_set;
  // Member: angle_motor_1_6_set
  cdr << ros_message.angle_motor_1_6_set;
  // Member: angle_motor_2_1_set
  cdr << ros_message.angle_motor_2_1_set;
  // Member: angle_motor_2_2_set
  cdr << ros_message.angle_motor_2_2_set;
  // Member: angle_motor_2_3_set
  cdr << ros_message.angle_motor_2_3_set;
  // Member: angle_motor_2_4_set
  cdr << ros_message.angle_motor_2_4_set;
  // Member: angle_motor_2_5_set
  cdr << ros_message.angle_motor_2_5_set;
  // Member: angle_motor_2_6_set
  cdr << ros_message.angle_motor_2_6_set;
  // Member: angle_motor_3_1_set
  cdr << ros_message.angle_motor_3_1_set;
  // Member: angle_motor_3_2_set
  cdr << ros_message.angle_motor_3_2_set;
  // Member: angle_motor_3_3_set
  cdr << ros_message.angle_motor_3_3_set;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mybot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mybot_interfaces::srv::Rotate_Request & ros_message)
{
  // Member: angle_motor_1_1
  cdr >> ros_message.angle_motor_1_1;

  // Member: angle_motor_1_2
  cdr >> ros_message.angle_motor_1_2;

  // Member: angle_motor_1_3
  cdr >> ros_message.angle_motor_1_3;

  // Member: angle_motor_1_4
  cdr >> ros_message.angle_motor_1_4;

  // Member: angle_motor_1_5
  cdr >> ros_message.angle_motor_1_5;

  // Member: angle_motor_1_6
  cdr >> ros_message.angle_motor_1_6;

  // Member: angle_motor_2_1
  cdr >> ros_message.angle_motor_2_1;

  // Member: angle_motor_2_2
  cdr >> ros_message.angle_motor_2_2;

  // Member: angle_motor_2_3
  cdr >> ros_message.angle_motor_2_3;

  // Member: angle_motor_2_4
  cdr >> ros_message.angle_motor_2_4;

  // Member: angle_motor_2_5
  cdr >> ros_message.angle_motor_2_5;

  // Member: angle_motor_2_6
  cdr >> ros_message.angle_motor_2_6;

  // Member: angle_motor_3_1
  cdr >> ros_message.angle_motor_3_1;

  // Member: angle_motor_3_2
  cdr >> ros_message.angle_motor_3_2;

  // Member: angle_motor_3_3
  cdr >> ros_message.angle_motor_3_3;

  // Member: angle_motor_1_1_set
  cdr >> ros_message.angle_motor_1_1_set;

  // Member: angle_motor_1_2_set
  cdr >> ros_message.angle_motor_1_2_set;

  // Member: angle_motor_1_3_set
  cdr >> ros_message.angle_motor_1_3_set;

  // Member: angle_motor_1_4_set
  cdr >> ros_message.angle_motor_1_4_set;

  // Member: angle_motor_1_5_set
  cdr >> ros_message.angle_motor_1_5_set;

  // Member: angle_motor_1_6_set
  cdr >> ros_message.angle_motor_1_6_set;

  // Member: angle_motor_2_1_set
  cdr >> ros_message.angle_motor_2_1_set;

  // Member: angle_motor_2_2_set
  cdr >> ros_message.angle_motor_2_2_set;

  // Member: angle_motor_2_3_set
  cdr >> ros_message.angle_motor_2_3_set;

  // Member: angle_motor_2_4_set
  cdr >> ros_message.angle_motor_2_4_set;

  // Member: angle_motor_2_5_set
  cdr >> ros_message.angle_motor_2_5_set;

  // Member: angle_motor_2_6_set
  cdr >> ros_message.angle_motor_2_6_set;

  // Member: angle_motor_3_1_set
  cdr >> ros_message.angle_motor_3_1_set;

  // Member: angle_motor_3_2_set
  cdr >> ros_message.angle_motor_3_2_set;

  // Member: angle_motor_3_3_set
  cdr >> ros_message.angle_motor_3_3_set;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mybot_interfaces
get_serialized_size(
  const mybot_interfaces::srv::Rotate_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: angle_motor_1_1
  {
    size_t item_size = sizeof(ros_message.angle_motor_1_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_1_2
  {
    size_t item_size = sizeof(ros_message.angle_motor_1_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_1_3
  {
    size_t item_size = sizeof(ros_message.angle_motor_1_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_1_4
  {
    size_t item_size = sizeof(ros_message.angle_motor_1_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_1_5
  {
    size_t item_size = sizeof(ros_message.angle_motor_1_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_1_6
  {
    size_t item_size = sizeof(ros_message.angle_motor_1_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_2_1
  {
    size_t item_size = sizeof(ros_message.angle_motor_2_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_2_2
  {
    size_t item_size = sizeof(ros_message.angle_motor_2_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_2_3
  {
    size_t item_size = sizeof(ros_message.angle_motor_2_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_2_4
  {
    size_t item_size = sizeof(ros_message.angle_motor_2_4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_2_5
  {
    size_t item_size = sizeof(ros_message.angle_motor_2_5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_2_6
  {
    size_t item_size = sizeof(ros_message.angle_motor_2_6);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_3_1
  {
    size_t item_size = sizeof(ros_message.angle_motor_3_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_3_2
  {
    size_t item_size = sizeof(ros_message.angle_motor_3_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_3_3
  {
    size_t item_size = sizeof(ros_message.angle_motor_3_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_1_1_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_1_1_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_1_2_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_1_2_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_1_3_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_1_3_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_1_4_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_1_4_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_1_5_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_1_5_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_1_6_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_1_6_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_2_1_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_2_1_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_2_2_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_2_2_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_2_3_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_2_3_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_2_4_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_2_4_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_2_5_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_2_5_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_2_6_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_2_6_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_3_1_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_3_1_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_3_2_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_3_2_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angle_motor_3_3_set
  {
    size_t item_size = sizeof(ros_message.angle_motor_3_3_set);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mybot_interfaces
max_serialized_size_Rotate_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: angle_motor_1_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_1_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_1_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_1_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_1_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_1_6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_2_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_2_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_2_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_2_4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_2_5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_2_6
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_3_1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_3_2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_3_3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_1_1_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_1_2_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_1_3_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_1_4_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_1_5_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_1_6_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_2_1_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_2_2_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_2_3_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_2_4_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_2_5_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_2_6_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_3_1_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_3_2_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: angle_motor_3_3_set
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mybot_interfaces::srv::Rotate_Request;
    is_plain =
      (
      offsetof(DataType, angle_motor_3_3_set) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Rotate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mybot_interfaces::srv::Rotate_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Rotate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mybot_interfaces::srv::Rotate_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Rotate_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mybot_interfaces::srv::Rotate_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Rotate_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Rotate_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Rotate_Request__callbacks = {
  "mybot_interfaces::srv",
  "Rotate_Request",
  _Rotate_Request__cdr_serialize,
  _Rotate_Request__cdr_deserialize,
  _Rotate_Request__get_serialized_size,
  _Rotate_Request__max_serialized_size
};

static rosidl_message_type_support_t _Rotate_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Rotate_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace mybot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mybot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mybot_interfaces::srv::Rotate_Request>()
{
  return &mybot_interfaces::srv::typesupport_fastrtps_cpp::_Rotate_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mybot_interfaces, srv, Rotate_Request)() {
  return &mybot_interfaces::srv::typesupport_fastrtps_cpp::_Rotate_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mybot_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mybot_interfaces
cdr_serialize(
  const mybot_interfaces::srv::Rotate_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: success
  cdr << (ros_message.success ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mybot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mybot_interfaces::srv::Rotate_Response & ros_message)
{
  // Member: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.success = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mybot_interfaces
get_serialized_size(
  const mybot_interfaces::srv::Rotate_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: success
  {
    size_t item_size = sizeof(ros_message.success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mybot_interfaces
max_serialized_size_Rotate_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mybot_interfaces::srv::Rotate_Response;
    is_plain =
      (
      offsetof(DataType, success) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Rotate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mybot_interfaces::srv::Rotate_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Rotate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mybot_interfaces::srv::Rotate_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Rotate_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mybot_interfaces::srv::Rotate_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Rotate_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Rotate_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Rotate_Response__callbacks = {
  "mybot_interfaces::srv",
  "Rotate_Response",
  _Rotate_Response__cdr_serialize,
  _Rotate_Response__cdr_deserialize,
  _Rotate_Response__get_serialized_size,
  _Rotate_Response__max_serialized_size
};

static rosidl_message_type_support_t _Rotate_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Rotate_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace mybot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mybot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mybot_interfaces::srv::Rotate_Response>()
{
  return &mybot_interfaces::srv::typesupport_fastrtps_cpp::_Rotate_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mybot_interfaces, srv, Rotate_Response)() {
  return &mybot_interfaces::srv::typesupport_fastrtps_cpp::_Rotate_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace mybot_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Rotate__callbacks = {
  "mybot_interfaces::srv",
  "Rotate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mybot_interfaces, srv, Rotate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mybot_interfaces, srv, Rotate_Response)(),
};

static rosidl_service_type_support_t _Rotate__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Rotate__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace mybot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mybot_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<mybot_interfaces::srv::Rotate>()
{
  return &mybot_interfaces::srv::typesupport_fastrtps_cpp::_Rotate__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mybot_interfaces, srv, Rotate)() {
  return &mybot_interfaces::srv::typesupport_fastrtps_cpp::_Rotate__handle;
}

#ifdef __cplusplus
}
#endif
