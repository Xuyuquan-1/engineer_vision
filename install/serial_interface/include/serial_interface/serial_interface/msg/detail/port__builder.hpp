// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from serial_interface:msg/Port.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_INTERFACE__MSG__DETAIL__PORT__BUILDER_HPP_
#define SERIAL_INTERFACE__MSG__DETAIL__PORT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "serial_interface/msg/detail/port__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace serial_interface
{

namespace msg
{

namespace builder
{

class Init_Port_yaw
{
public:
  explicit Init_Port_yaw(::serial_interface::msg::Port & msg)
  : msg_(msg)
  {}
  ::serial_interface::msg::Port yaw(::serial_interface::msg::Port::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::serial_interface::msg::Port msg_;
};

class Init_Port_pitch
{
public:
  explicit Init_Port_pitch(::serial_interface::msg::Port & msg)
  : msg_(msg)
  {}
  Init_Port_yaw pitch(::serial_interface::msg::Port::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_Port_yaw(msg_);
  }

private:
  ::serial_interface::msg::Port msg_;
};

class Init_Port_roll
{
public:
  Init_Port_roll()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Port_pitch roll(::serial_interface::msg::Port::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_Port_pitch(msg_);
  }

private:
  ::serial_interface::msg::Port msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::serial_interface::msg::Port>()
{
  return serial_interface::msg::builder::Init_Port_roll();
}

}  // namespace serial_interface

#endif  // SERIAL_INTERFACE__MSG__DETAIL__PORT__BUILDER_HPP_
