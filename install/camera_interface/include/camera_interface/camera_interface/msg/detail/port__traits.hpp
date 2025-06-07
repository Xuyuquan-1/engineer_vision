// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_interface:msg/Port.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__DETAIL__PORT__TRAITS_HPP_
#define CAMERA_INTERFACE__MSG__DETAIL__PORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_interface/msg/detail/port__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace camera_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Port & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Port & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
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

}  // namespace camera_interface

namespace rosidl_generator_traits
{

[[deprecated("use camera_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const camera_interface::msg::Port & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const camera_interface::msg::Port & msg)
{
  return camera_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<camera_interface::msg::Port>()
{
  return "camera_interface::msg::Port";
}

template<>
inline const char * name<camera_interface::msg::Port>()
{
  return "camera_interface/msg/Port";
}

template<>
struct has_fixed_size<camera_interface::msg::Port>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<camera_interface::msg::Port>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<camera_interface::msg::Port>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_INTERFACE__MSG__DETAIL__PORT__TRAITS_HPP_
