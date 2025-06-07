// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from camera_interface:msg/Port.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__DETAIL__PORT__STRUCT_H_
#define CAMERA_INTERFACE__MSG__DETAIL__PORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Port in the package camera_interface.
typedef struct camera_interface__msg__Port
{
  float x;
  float y;
  float z;
} camera_interface__msg__Port;

// Struct for a sequence of camera_interface__msg__Port.
typedef struct camera_interface__msg__Port__Sequence
{
  camera_interface__msg__Port * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} camera_interface__msg__Port__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE__MSG__DETAIL__PORT__STRUCT_H_
