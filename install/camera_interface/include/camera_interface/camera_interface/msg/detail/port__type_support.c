// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from camera_interface:msg/Port.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "camera_interface/msg/detail/port__rosidl_typesupport_introspection_c.h"
#include "camera_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "camera_interface/msg/detail/port__functions.h"
#include "camera_interface/msg/detail/port__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void camera_interface__msg__Port__rosidl_typesupport_introspection_c__Port_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  camera_interface__msg__Port__init(message_memory);
}

void camera_interface__msg__Port__rosidl_typesupport_introspection_c__Port_fini_function(void * message_memory)
{
  camera_interface__msg__Port__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember camera_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Port, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Port, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(camera_interface__msg__Port, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers camera_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_members = {
  "camera_interface__msg",  // message namespace
  "Port",  // message name
  3,  // number of fields
  sizeof(camera_interface__msg__Port),
  camera_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_member_array,  // message members
  camera_interface__msg__Port__rosidl_typesupport_introspection_c__Port_init_function,  // function to initialize message memory (memory has to be allocated)
  camera_interface__msg__Port__rosidl_typesupport_introspection_c__Port_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t camera_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_type_support_handle = {
  0,
  &camera_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_camera_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, camera_interface, msg, Port)() {
  if (!camera_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_type_support_handle.typesupport_identifier) {
    camera_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &camera_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
