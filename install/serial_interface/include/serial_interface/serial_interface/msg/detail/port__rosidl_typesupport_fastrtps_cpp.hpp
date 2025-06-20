// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from serial_interface:msg/Port.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_INTERFACE__MSG__DETAIL__PORT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define SERIAL_INTERFACE__MSG__DETAIL__PORT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "serial_interface/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "serial_interface/msg/detail/port__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace serial_interface
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_serial_interface
cdr_serialize(
  const serial_interface::msg::Port & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_serial_interface
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  serial_interface::msg::Port & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_serial_interface
get_serialized_size(
  const serial_interface::msg::Port & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_serial_interface
max_serialized_size_Port(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace serial_interface

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_serial_interface
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, serial_interface, msg, Port)();

#ifdef __cplusplus
}
#endif

#endif  // SERIAL_INTERFACE__MSG__DETAIL__PORT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
