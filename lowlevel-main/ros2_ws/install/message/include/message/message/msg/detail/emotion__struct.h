// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from message:msg/Emotion.idl
// generated code does not contain a copyright notice

#ifndef MESSAGE__MSG__DETAIL__EMOTION__STRUCT_H_
#define MESSAGE__MSG__DETAIL__EMOTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'emotion'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Emotion in the package message.
typedef struct message__msg__Emotion
{
  /// emotion
  rosidl_runtime_c__String emotion;
  /// distance
  float x;
  /// relative verschiebung in x richtung
  float y;
  /// relative verschiebung in y richtung
  float z;
} message__msg__Emotion;

// Struct for a sequence of message__msg__Emotion.
typedef struct message__msg__Emotion__Sequence
{
  message__msg__Emotion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} message__msg__Emotion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MESSAGE__MSG__DETAIL__EMOTION__STRUCT_H_
