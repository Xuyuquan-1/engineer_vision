// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from camera_interface:msg/Corner.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__DETAIL__CORNER__STRUCT_HPP_
#define CAMERA_INTERFACE__MSG__DETAIL__CORNER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__camera_interface__msg__Corner __attribute__((deprecated))
#else
# define DEPRECATED__camera_interface__msg__Corner __declspec(deprecated)
#endif

namespace camera_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Corner_
{
  using Type = Corner_<ContainerAllocator>;

  explicit Corner_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit Corner_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _corner_x_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _corner_x_type corner_x;
  using _corner_y_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _corner_y_type corner_y;

  // setters for named parameter idiom
  Type & set__corner_x(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->corner_x = _arg;
    return *this;
  }
  Type & set__corner_y(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->corner_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    camera_interface::msg::Corner_<ContainerAllocator> *;
  using ConstRawPtr =
    const camera_interface::msg::Corner_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<camera_interface::msg::Corner_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<camera_interface::msg::Corner_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      camera_interface::msg::Corner_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<camera_interface::msg::Corner_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      camera_interface::msg::Corner_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<camera_interface::msg::Corner_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<camera_interface::msg::Corner_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<camera_interface::msg::Corner_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__camera_interface__msg__Corner
    std::shared_ptr<camera_interface::msg::Corner_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__camera_interface__msg__Corner
    std::shared_ptr<camera_interface::msg::Corner_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Corner_ & other) const
  {
    if (this->corner_x != other.corner_x) {
      return false;
    }
    if (this->corner_y != other.corner_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Corner_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Corner_

// alias to use template instance with default allocator
using Corner =
  camera_interface::msg::Corner_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace camera_interface

#endif  // CAMERA_INTERFACE__MSG__DETAIL__CORNER__STRUCT_HPP_
