// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from serial_interface:msg/Port.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_INTERFACE__MSG__DETAIL__PORT__TRAITS_HPP_
#define SERIAL_INTERFACE__MSG__DETAIL__PORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "serial_interface/msg/detail/port__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace serial_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Port & msg,
  std::ostream & out)
{
  out << "{";
  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << ", ";
  }

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Port & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
    out << "\n";
  }

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Port & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace serial_interface

namespace rosidl_generator_traits
{

[[deprecated("use serial_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const serial_interface::msg::Port & msg,
  std::ostream & out, size_t indentation = 0)
{
  serial_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use serial_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const serial_interface::msg::Port & msg)
{
  return serial_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<serial_interface::msg::Port>()
{
  return "serial_interface::msg::Port";
}

template<>
inline const char * name<serial_interface::msg::Port>()
{
  return "serial_interface/msg/Port";
}

template<>
struct has_fixed_size<serial_interface::msg::Port>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<serial_interface::msg::Port>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<serial_interface::msg::Port>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SERIAL_INTERFACE__MSG__DETAIL__PORT__TRAITS_HPP_
