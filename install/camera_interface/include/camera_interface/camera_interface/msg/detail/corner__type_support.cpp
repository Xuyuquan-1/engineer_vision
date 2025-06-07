// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from camera_interface:msg/Corner.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "camera_interface/msg/detail/corner__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace camera_interface
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Corner_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) camera_interface::msg::Corner(_init);
}

void Corner_fini_function(void * message_memory)
{
  auto typed_message = static_cast<camera_interface::msg::Corner *>(message_memory);
  typed_message->~Corner();
}

size_t size_function__Corner__corner_x(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Corner__corner_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Corner__corner_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Corner__corner_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Corner__corner_x(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Corner__corner_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Corner__corner_x(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Corner__corner_x(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Corner__corner_y(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Corner__corner_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__Corner__corner_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__Corner__corner_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__Corner__corner_y(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__Corner__corner_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__Corner__corner_y(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__Corner__corner_y(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Corner_message_member_array[2] = {
  {
    "corner_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface::msg::Corner, corner_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__Corner__corner_x,  // size() function pointer
    get_const_function__Corner__corner_x,  // get_const(index) function pointer
    get_function__Corner__corner_x,  // get(index) function pointer
    fetch_function__Corner__corner_x,  // fetch(index, &value) function pointer
    assign_function__Corner__corner_x,  // assign(index, value) function pointer
    resize_function__Corner__corner_x  // resize(index) function pointer
  },
  {
    "corner_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface::msg::Corner, corner_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__Corner__corner_y,  // size() function pointer
    get_const_function__Corner__corner_y,  // get_const(index) function pointer
    get_function__Corner__corner_y,  // get(index) function pointer
    fetch_function__Corner__corner_y,  // fetch(index, &value) function pointer
    assign_function__Corner__corner_y,  // assign(index, value) function pointer
    resize_function__Corner__corner_y  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Corner_message_members = {
  "camera_interface::msg",  // message namespace
  "Corner",  // message name
  2,  // number of fields
  sizeof(camera_interface::msg::Corner),
  Corner_message_member_array,  // message members
  Corner_init_function,  // function to initialize message memory (memory has to be allocated)
  Corner_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Corner_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Corner_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace camera_interface


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<camera_interface::msg::Corner>()
{
  return &::camera_interface::msg::rosidl_typesupport_introspection_cpp::Corner_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, camera_interface, msg, Corner)() {
  return &::camera_interface::msg::rosidl_typesupport_introspection_cpp::Corner_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
