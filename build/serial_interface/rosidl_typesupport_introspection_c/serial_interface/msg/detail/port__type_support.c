// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from serial_interface:msg/Port.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "serial_interface/msg/detail/port__rosidl_typesupport_introspection_c.h"
#include "serial_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "serial_interface/msg/detail/port__functions.h"
#include "serial_interface/msg/detail/port__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void serial_interface__msg__Port__rosidl_typesupport_introspection_c__Port_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  serial_interface__msg__Port__init(message_memory);
}

void serial_interface__msg__Port__rosidl_typesupport_introspection_c__Port_fini_function(void * message_memory)
{
  serial_interface__msg__Port__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember serial_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_member_array[3] = {
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(serial_interface__msg__Port, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(serial_interface__msg__Port, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(serial_interface__msg__Port, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers serial_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_members = {
  "serial_interface__msg",  // message namespace
  "Port",  // message name
  3,  // number of fields
  sizeof(serial_interface__msg__Port),
  serial_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_member_array,  // message members
  serial_interface__msg__Port__rosidl_typesupport_introspection_c__Port_init_function,  // function to initialize message memory (memory has to be allocated)
  serial_interface__msg__Port__rosidl_typesupport_introspection_c__Port_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t serial_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_type_support_handle = {
  0,
  &serial_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_serial_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, serial_interface, msg, Port)() {
  if (!serial_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_type_support_handle.typesupport_identifier) {
    serial_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &serial_interface__msg__Port__rosidl_typesupport_introspection_c__Port_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
