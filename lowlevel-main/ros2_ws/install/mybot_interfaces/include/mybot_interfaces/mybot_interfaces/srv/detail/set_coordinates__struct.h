// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mybot_interfaces:srv/SetCoordinates.idl
// generated code does not contain a copyright notice

#ifndef MYBOT_INTERFACES__SRV__DETAIL__SET_COORDINATES__STRUCT_H_
#define MYBOT_INTERFACES__SRV__DETAIL__SET_COORDINATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'coordinates'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/SetCoordinates in the package mybot_interfaces.
typedef struct mybot_interfaces__srv__SetCoordinates_Request
{
  geometry_msgs__msg__Point coordinates;
} mybot_interfaces__srv__SetCoordinates_Request;

// Struct for a sequence of mybot_interfaces__srv__SetCoordinates_Request.
typedef struct mybot_interfaces__srv__SetCoordinates_Request__Sequence
{
  mybot_interfaces__srv__SetCoordinates_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mybot_interfaces__srv__SetCoordinates_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SetCoordinates in the package mybot_interfaces.
typedef struct mybot_interfaces__srv__SetCoordinates_Response
{
  bool success;
} mybot_interfaces__srv__SetCoordinates_Response;

// Struct for a sequence of mybot_interfaces__srv__SetCoordinates_Response.
typedef struct mybot_interfaces__srv__SetCoordinates_Response__Sequence
{
  mybot_interfaces__srv__SetCoordinates_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mybot_interfaces__srv__SetCoordinates_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYBOT_INTERFACES__SRV__DETAIL__SET_COORDINATES__STRUCT_H_
