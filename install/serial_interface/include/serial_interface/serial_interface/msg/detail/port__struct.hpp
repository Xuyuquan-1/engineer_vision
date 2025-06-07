// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from serial_interface:msg/Port.idl
// generated code does not contain a copyright notice

#ifndef SERIAL_INTERFACE__MSG__DETAIL__PORT__STRUCT_HPP_
#define SERIAL_INTERFACE__MSG__DETAIL__PORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__serial_interface__msg__Port __attribute__((deprecated))
#else
# define DEPRECATED__serial_interface__msg__Port __declspec(deprecated)
#endif

namespace serial_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Port_
{
  using Type = Port_<ContainerAllocator>;

  explicit Port_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  explicit Port_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->yaw = 0.0f;
    }
  }

  // field types and members
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _yaw_type =
    float;
  _yaw_type yaw;

  // setters for named parameter idiom
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    serial_interface::msg::Port_<ContainerAllocator> *;
  using ConstRawPtr =
    const serial_interface::msg::Port_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<serial_interface::msg::Port_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<serial_interface::msg::Port_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      serial_interface::msg::Port_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<serial_interface::msg::Port_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      serial_interface::msg::Port_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<serial_interface::msg::Port_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<serial_interface::msg::Port_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<serial_interface::msg::Port_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__serial_interface__msg__Port
    std::shared_ptr<serial_interface::msg::Port_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__serial_interface__msg__Port
    std::shared_ptr<serial_interface::msg::Port_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Port_ & other) const
  {
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->yaw != other.yaw) {
      return false;
    }
    return true;
  }
  bool operator!=(const Port_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Port_

// alias to use template instance with default allocator
using Port =
  serial_interface::msg::Port_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace serial_interface

#endif  // SERIAL_INTERFACE__MSG__DETAIL__PORT__STRUCT_HPP_
