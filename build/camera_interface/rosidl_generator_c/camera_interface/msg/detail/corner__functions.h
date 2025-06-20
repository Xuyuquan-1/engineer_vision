// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from camera_interface:msg/Corner.idl
// generated code does not contain a copyright notice

#ifndef CAMERA_INTERFACE__MSG__DETAIL__CORNER__FUNCTIONS_H_
#define CAMERA_INTERFACE__MSG__DETAIL__CORNER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "camera_interface/msg/rosidl_generator_c__visibility_control.h"

#include "camera_interface/msg/detail/corner__struct.h"

/// Initialize msg/Corner message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * camera_interface__msg__Corner
 * )) before or use
 * camera_interface__msg__Corner__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
bool
camera_interface__msg__Corner__init(camera_interface__msg__Corner * msg);

/// Finalize msg/Corner message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
void
camera_interface__msg__Corner__fini(camera_interface__msg__Corner * msg);

/// Create msg/Corner message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * camera_interface__msg__Corner__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
camera_interface__msg__Corner *
camera_interface__msg__Corner__create();

/// Destroy msg/Corner message.
/**
 * It calls
 * camera_interface__msg__Corner__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
void
camera_interface__msg__Corner__destroy(camera_interface__msg__Corner * msg);

/// Check for msg/Corner message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
bool
camera_interface__msg__Corner__are_equal(const camera_interface__msg__Corner * lhs, const camera_interface__msg__Corner * rhs);

/// Copy a msg/Corner message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
bool
camera_interface__msg__Corner__copy(
  const camera_interface__msg__Corner * input,
  camera_interface__msg__Corner * output);

/// Initialize array of msg/Corner messages.
/**
 * It allocates the memory for the number of elements and calls
 * camera_interface__msg__Corner__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
bool
camera_interface__msg__Corner__Sequence__init(camera_interface__msg__Corner__Sequence * array, size_t size);

/// Finalize array of msg/Corner messages.
/**
 * It calls
 * camera_interface__msg__Corner__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
void
camera_interface__msg__Corner__Sequence__fini(camera_interface__msg__Corner__Sequence * array);

/// Create array of msg/Corner messages.
/**
 * It allocates the memory for the array and calls
 * camera_interface__msg__Corner__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
camera_interface__msg__Corner__Sequence *
camera_interface__msg__Corner__Sequence__create(size_t size);

/// Destroy array of msg/Corner messages.
/**
 * It calls
 * camera_interface__msg__Corner__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
void
camera_interface__msg__Corner__Sequence__destroy(camera_interface__msg__Corner__Sequence * array);

/// Check for msg/Corner message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
bool
camera_interface__msg__Corner__Sequence__are_equal(const camera_interface__msg__Corner__Sequence * lhs, const camera_interface__msg__Corner__Sequence * rhs);

/// Copy an array of msg/Corner messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_camera_interface
bool
camera_interface__msg__Corner__Sequence__copy(
  const camera_interface__msg__Corner__Sequence * input,
  camera_interface__msg__Corner__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CAMERA_INTERFACE__MSG__DETAIL__CORNER__FUNCTIONS_H_
