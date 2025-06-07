// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from camera_interface:msg/Corner.idl
// generated code does not contain a copyright notice
#include "camera_interface/msg/detail/corner__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "camera_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "camera_interface/msg/detail/corner__struct.h"
#include "camera_interface/msg/detail/corner__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // corner_x, corner_y
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // corner_x, corner_y

// forward declare type support functions


using _Corner__ros_msg_type = camera_interface__msg__Corner;

static bool _Corner__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Corner__ros_msg_type * ros_message = static_cast<const _Corner__ros_msg_type *>(untyped_ros_message);
  // Field name: corner_x
  {
    size_t size = ros_message->corner_x.size;
    auto array_ptr = ros_message->corner_x.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: corner_y
  {
    size_t size = ros_message->corner_y.size;
    auto array_ptr = ros_message->corner_y.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Corner__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Corner__ros_msg_type * ros_message = static_cast<_Corner__ros_msg_type *>(untyped_ros_message);
  // Field name: corner_x
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->corner_x.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->corner_x);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->corner_x, size)) {
      fprintf(stderr, "failed to create array for field 'corner_x'");
      return false;
    }
    auto array_ptr = ros_message->corner_x.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: corner_y
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->corner_y.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->corner_y);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->corner_y, size)) {
      fprintf(stderr, "failed to create array for field 'corner_y'");
      return false;
    }
    auto array_ptr = ros_message->corner_y.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_camera_interface
size_t get_serialized_size_camera_interface__msg__Corner(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Corner__ros_msg_type * ros_message = static_cast<const _Corner__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name corner_x
  {
    size_t array_size = ros_message->corner_x.size;
    auto array_ptr = ros_message->corner_x.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name corner_y
  {
    size_t array_size = ros_message->corner_y.size;
    auto array_ptr = ros_message->corner_y.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Corner__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_camera_interface__msg__Corner(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_camera_interface
size_t max_serialized_size_camera_interface__msg__Corner(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: corner_x
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: corner_y
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = camera_interface__msg__Corner;
    is_plain =
      (
      offsetof(DataType, corner_y) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Corner__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_camera_interface__msg__Corner(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Corner = {
  "camera_interface::msg",
  "Corner",
  _Corner__cdr_serialize,
  _Corner__cdr_deserialize,
  _Corner__get_serialized_size,
  _Corner__max_serialized_size
};

static rosidl_message_type_support_t _Corner__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Corner,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, camera_interface, msg, Corner)() {
  return &_Corner__type_support;
}

#if defined(__cplusplus)
}
#endif
