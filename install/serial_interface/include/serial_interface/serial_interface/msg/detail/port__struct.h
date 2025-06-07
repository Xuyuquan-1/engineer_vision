// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from serial_interface:msg/Port.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_INTERFACE__MSG__DETAIL__PORT__STRUCT_H_
#define SERIAL_INTERFACE__MSG__DETAIL__PORT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Port in the package serial_interface.
typedef struct serial_interface__msg__Port
{
  float roll;
  float pitch;
  float yaw;
} serial_interface__msg__Port;

// Struct for a sequence of serial_interface__msg__Port.
typedef struct serial_interface__msg__Port__Sequence
{
  serial_interface__msg__Port * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} serial_interface__msg__Port__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SERIAL_INTERFACE__MSG__DETAIL__PORT__STRUCT_H_
