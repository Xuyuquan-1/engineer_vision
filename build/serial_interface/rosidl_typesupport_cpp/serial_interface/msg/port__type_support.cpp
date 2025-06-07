// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from serial_interface:msg/Port.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "serial_interface/msg/detail/port__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace serial_interface
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _Port_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Port_type_support_ids_t;

static const _Port_type_support_ids_t _Port_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Port_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Port_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Port_type_support_symbol_names_t _Port_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, serial_interface, msg, Port)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, serial_interface, msg, Port)),
  }
};

typedef struct _Port_type_support_data_t
{
  void * data[2];
} _Port_type_support_data_t;

static _Port_type_support_data_t _Port_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Port_message_typesupport_map = {
  2,
  "serial_interface",
  &_Port_message_typesupport_ids.typesupport_identifier[0],
  &_Port_message_typesupport_symbol_names.symbol_name[0],
  &_Port_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Port_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Port_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace serial_interface

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<serial_interface::msg::Port>()
{
  return &::serial_interface::msg::rosidl_typesupport_cpp::Port_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, serial_interface, msg, Port)() {
  return get_message_type_support_handle<serial_interface::msg::Port>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
