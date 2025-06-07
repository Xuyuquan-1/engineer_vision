// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_interface:msg/Corner.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__DETAIL__CORNER__STRUCT_H_
#define CAMERA_INTERFACE__MSG__DETAIL__CORNER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'corner_x'
// Member 'corner_y'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Corner in the package camera_interface.
typedef struct camera_interface__msg__Corner
{
  rosidl_runtime_c__double__Sequence corner_x;
  rosidl_runtime_c__double__Sequence corner_y;
} camera_interface__msg__Corner;

// Struct for a sequence of camera_interface__msg__Corner.
typedef struct camera_interface__msg__Corner__Sequence
{
  camera_interface__msg__Corner * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface__msg__Corner__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE__MSG__DETAIL__CORNER__STRUCT_H_
