// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mybot_interfaces:srv/Rotate.idl
// generated code does not contain a copyright notice

#ifndef MYBOT_INTERFACES__SRV__DETAIL__ROTATE__STRUCT_H_
#define MYBOT_INTERFACES__SRV__DETAIL__ROTATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Rotate in the package mybot_interfaces.
typedef struct mybot_interfaces__srv__Rotate_Request
{
  /// joint_1_1 winkel
  double angle_motor_1_1;
  /// joint_1_2 winkel
  double angle_motor_1_2;
  /// joint_1_3 winkel
  double angle_motor_1_3;
  /// joint_1_4 winkel
  double angle_motor_1_4;
  /// joint_1_5 winkel
  double angle_motor_1_5;
  /// joint_1_6 winkel
  double angle_motor_1_6;
  /// joint_2_1 winkel
  double angle_motor_2_1;
  /// joint_2_2 winkel
  double angle_motor_2_2;
  /// joint_2_3 winkel
  double angle_motor_2_3;
  /// joint_2_4 winkel
  double angle_motor_2_4;
  /// joint_2_5 winkel
  double angle_motor_2_5;
  /// joint_2_6 winkel
  double angle_motor_2_6;
  /// joint_3_1 winkel
  double angle_motor_3_1;
  /// joint_3_2 winkel
  double angle_motor_3_2;
  /// joint_3_3 winkel
  double angle_motor_3_3;
  /// joint_1_1 gesetzt?
  double angle_motor_1_1_set;
  /// joint_1_2 gesetzt?
  double angle_motor_1_2_set;
  /// joint_1_3 gesetzt?
  double angle_motor_1_3_set;
  /// joint_1_4 gesetzt?
  double angle_motor_1_4_set;
  /// joint_1_5 gesetzt?
  double angle_motor_1_5_set;
  /// joint_1_6 gesetzt?
  double angle_motor_1_6_set;
  /// joint_2_1 gesetzt?
  double angle_motor_2_1_set;
  /// joint_2_2 gesetzt?
  double angle_motor_2_2_set;
  /// joint_2_3 gesetzt?
  double angle_motor_2_3_set;
  /// joint_2_4 gesetzt?
  double angle_motor_2_4_set;
  /// joint_2_5 gesetzt?
  double angle_motor_2_5_set;
  /// joint_2_6 gesetzt?
  double angle_motor_2_6_set;
  /// joint_3_1 gesetzt?
  double angle_motor_3_1_set;
  /// joint_3_2 gesetzt?
  double angle_motor_3_2_set;
  /// joint_3_3 gesetzt?
  double angle_motor_3_3_set;
} mybot_interfaces__srv__Rotate_Request;

// Struct for a sequence of mybot_interfaces__srv__Rotate_Request.
typedef struct mybot_interfaces__srv__Rotate_Request__Sequence
{
  mybot_interfaces__srv__Rotate_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mybot_interfaces__srv__Rotate_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Rotate in the package mybot_interfaces.
typedef struct mybot_interfaces__srv__Rotate_Response
{
  /// 返回是否成功
  bool success;
} mybot_interfaces__srv__Rotate_Response;

// Struct for a sequence of mybot_interfaces__srv__Rotate_Response.
typedef struct mybot_interfaces__srv__Rotate_Response__Sequence
{
  mybot_interfaces__srv__Rotate_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mybot_interfaces__srv__Rotate_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYBOT_INTERFACES__SRV__DETAIL__ROTATE__STRUCT_H_
