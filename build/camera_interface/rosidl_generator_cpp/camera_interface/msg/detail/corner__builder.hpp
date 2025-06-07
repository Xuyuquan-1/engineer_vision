// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_interface:msg/Corner.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__DETAIL__CORNER__BUILDER_HPP_
#define CAMERA_INTERFACE__MSG__DETAIL__CORNER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_interface/msg/detail/corner__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_interface
{

namespace msg
{

namespace builder
{

class Init_Corner_corner_y
{
public:
  explicit Init_Corner_corner_y(::camera_interface::msg::Corner & msg)
  : msg_(msg)
  {}
  ::camera_interface::msg::Corner corner_y(::camera_interface::msg::Corner::_corner_y_type arg)
  {
    msg_.corner_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_interface::msg::Corner msg_;
};

class Init_Corner_corner_x
{
public:
  Init_Corner_corner_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Corner_corner_y corner_x(::camera_interface::msg::Corner::_corner_x_type arg)
  {
    msg_.corner_x = std::move(arg);
    return Init_Corner_corner_y(msg_);
  }

private:
  ::camera_interface::msg::Corner msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_interface::msg::Corner>()
{
  return camera_interface::msg::builder::Init_Corner_corner_x();
}

}  // namespace camera_interface

#endif  // CAMERA_INTERFACE__MSG__DETAIL__CORNER__BUILDER_HPP_
