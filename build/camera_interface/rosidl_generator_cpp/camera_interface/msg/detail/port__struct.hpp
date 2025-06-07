// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_interface:msg/Port.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__DETAIL__PORT__STRUCT_HPP_
#define CAMERA_INTERFACE__MSG__DETAIL__PORT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__camera_interface__msg__Port __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface__msg__Port __declspec(deprecated)
#endif

namespace camera_interface
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
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  explicit Port_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;

  // setters for named parameter idiom
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_interface::msg::Port_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface::msg::Port_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface::msg::Port_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface::msg::Port_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface::msg::Port_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface::msg::Port_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface::msg::Port_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface::msg::Port_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface::msg::Port_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface::msg::Port_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface__msg__Port
    std::shared_ptr<camera_interface::msg::Port_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface__msg__Port
    std::shared_ptr<camera_interface::msg::Port_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Port_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
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
  camera_interface::msg::Port_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace camera_interface

#endif  // CAMERA_INTERFACE__MSG__DETAIL__PORT__STRUCT_HPP_
