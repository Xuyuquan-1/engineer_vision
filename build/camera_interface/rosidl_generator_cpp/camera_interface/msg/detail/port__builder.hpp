// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from camera_interface:msg/Port.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__DETAIL__PORT__BUILDER_HPP_
#define CAMERA_INTERFACE__MSG__DETAIL__PORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "camera_interface/msg/detail/port__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace camera_interface
{

namespace msg
{

namespace builder
{

class Init_Port_z
{
public:
  explicit Init_Port_z(::camera_interface::msg::Port & msg)
  : msg_(msg)
  {}
  ::camera_interface::msg::Port z(::camera_interface::msg::Port::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::camera_interface::msg::Port msg_;
};

class Init_Port_y
{
public:
  explicit Init_Port_y(::camera_interface::msg::Port & msg)
  : msg_(msg)
  {}
  Init_Port_z y(::camera_interface::msg::Port::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Port_z(msg_);
  }

private:
  ::camera_interface::msg::Port msg_;
};

class Init_Port_x
{
public:
  Init_Port_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Port_y x(::camera_interface::msg::Port::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Port_y(msg_);
  }

private:
  ::camera_interface::msg::Port msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::camera_interface::msg::Port>()
{
  return camera_interface::msg::builder::Init_Port_x();
}

}  // namespace camera_interface

#endif  // CAMERA_INTERFACE__MSG__DETAIL__PORT__BUILDER_HPP_
