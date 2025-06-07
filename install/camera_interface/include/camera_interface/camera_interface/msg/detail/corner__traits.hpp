// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from camera_interface:msg/Corner.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__DETAIL__CORNER__TRAITS_HPP_
#define CAMERA_INTERFACE__MSG__DETAIL__CORNER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "camera_interface/msg/detail/corner__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace camera_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Corner & msg,
  std::ostream & out)
{
  out << "{";
  // member: corner_x
  {
    if (msg.corner_x.size() == 0) {
      out << "corner_x: []";
    } else {
      out << "corner_x: [";
      size_t pending_items = msg.corner_x.size();
      for (auto item : msg.corner_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: corner_y
  {
    if (msg.corner_y.size() == 0) {
      out << "corner_y: []";
    } else {
      out << "corner_y: [";
      size_t pending_items = msg.corner_y.size();
      for (auto item : msg.corner_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Corner & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: corner_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corner_x.size() == 0) {
      out << "corner_x: []\n";
    } else {
      out << "corner_x:\n";
      for (auto item : msg.corner_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: corner_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.corner_y.size() == 0) {
      out << "corner_y: []\n";
    } else {
      out << "corner_y:\n";
      for (auto item : msg.corner_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Corner & msg, bool use_flow_style = false)
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
  const camera_interface::msg::Corner & msg,
  std::ostream & out, size_t indentation = 0)
{
  camera_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use camera_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const camera_interface::msg::Corner & msg)
{
  return camera_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<camera_interface::msg::Corner>()
{
  return "camera_interface::msg::Corner";
}

template<>
inline const char * name<camera_interface::msg::Corner>()
{
  return "camera_interface/msg/Corner";
}

template<>
struct has_fixed_size<camera_interface::msg::Corner>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<camera_interface::msg::Corner>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<camera_interface::msg::Corner>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // CAMERA_INTERFACE__MSG__DETAIL__CORNER__TRAITS_HPP_
