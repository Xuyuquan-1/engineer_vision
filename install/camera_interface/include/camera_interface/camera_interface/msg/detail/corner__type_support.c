// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from camera_interface:msg/Corner.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "camera_interface/msg/detail/corner__rosidl_typesupport_introspection_c.h"
#include "camera_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "camera_interface/msg/detail/corner__functions.h"
#include "camera_interface/msg/detail/corner__struct.h"


// Include directives for member types
// Member `corner_x`
// Member `corner_y`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void camera_interface__msg__Corner__rosidl_typesupport_introspection_c__Corner_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_interface__msg__Corner__init(message_memory);
}

void camera_interface__msg__Corner__rosidl_typesupport_introspection_c__Corner_fini_function(void * message_memory)
{
  camera_interface__msg__Corner__fini(message_memory);
}

size_t camera_interface__msg__Corner__rosidl_typesupport_introspection_c__size_function__Corner__corner_x(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * camera_interface__msg__Corner__rosidl_typesupport_introspection_c__get_const_function__Corner__corner_x(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * camera_interface__msg__Corner__rosidl_typesupport_introspection_c__get_function__Corner__corner_x(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void camera_interface__msg__Corner__rosidl_typesupport_introspection_c__fetch_function__Corner__corner_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__get_const_function__Corner__corner_x(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void camera_interface__msg__Corner__rosidl_typesupport_introspection_c__assign_function__Corner__corner_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__get_function__Corner__corner_x(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool camera_interface__msg__Corner__rosidl_typesupport_introspection_c__resize_function__Corner__corner_x(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t camera_interface__msg__Corner__rosidl_typesupport_introspection_c__size_function__Corner__corner_y(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * camera_interface__msg__Corner__rosidl_typesupport_introspection_c__get_const_function__Corner__corner_y(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * camera_interface__msg__Corner__rosidl_typesupport_introspection_c__get_function__Corner__corner_y(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void camera_interface__msg__Corner__rosidl_typesupport_introspection_c__fetch_function__Corner__corner_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__get_const_function__Corner__corner_y(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void camera_interface__msg__Corner__rosidl_typesupport_introspection_c__assign_function__Corner__corner_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__get_function__Corner__corner_y(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool camera_interface__msg__Corner__rosidl_typesupport_introspection_c__resize_function__Corner__corner_y(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember camera_interface__msg__Corner__rosidl_typesupport_introspection_c__Corner_message_member_array[2] = {
  {
    "corner_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Corner, corner_x),  // bytes offset in struct
    NULL,  // default value
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__size_function__Corner__corner_x,  // size() function pointer
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__get_const_function__Corner__corner_x,  // get_const(index) function pointer
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__get_function__Corner__corner_x,  // get(index) function pointer
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__fetch_function__Corner__corner_x,  // fetch(index, &value) function pointer
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__assign_function__Corner__corner_x,  // assign(index, value) function pointer
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__resize_function__Corner__corner_x  // resize(index) function pointer
  },
  {
    "corner_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Corner, corner_y),  // bytes offset in struct
    NULL,  // default value
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__size_function__Corner__corner_y,  // size() function pointer
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__get_const_function__Corner__corner_y,  // get_const(index) function pointer
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__get_function__Corner__corner_y,  // get(index) function pointer
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__fetch_function__Corner__corner_y,  // fetch(index, &value) function pointer
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__assign_function__Corner__corner_y,  // assign(index, value) function pointer
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__resize_function__Corner__corner_y  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers camera_interface__msg__Corner__rosidl_typesupport_introspection_c__Corner_message_members = {
  "camera_interface__msg",  // message namespace
  "Corner",  // message name
  2,  // number of fields
  sizeof(camera_interface__msg__Corner),
  camera_interface__msg__Corner__rosidl_typesupport_introspection_c__Corner_message_member_array,  // message members
  camera_interface__msg__Corner__rosidl_typesupport_introspection_c__Corner_init_function,  // function to initialize message memory (memory has to be allocated)
  camera_interface__msg__Corner__rosidl_typesupport_introspection_c__Corner_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t camera_interface__msg__Corner__rosidl_typesupport_introspection_c__Corner_message_type_support_handle = {
  0,
  &camera_interface__msg__Corner__rosidl_typesupport_introspection_c__Corner_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface, msg, Corner)() {
  if (!camera_interface__msg__Corner__rosidl_typesupport_introspection_c__Corner_message_type_support_handle.typesupport_identifier) {
    camera_interface__msg__Corner__rosidl_typesupport_introspection_c__Corner_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &camera_interface__msg__Corner__rosidl_typesupport_introspection_c__Corner_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
