// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from serial_interface:msg/Port.idl
// generated code does not contain a copyright notice
#include "serial_interface/msg/detail/port__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
serial_interface__msg__Port__init(serial_interface__msg__Port * msg)
{
  if (!msg) {
    return false;
  }
  // roll
  // pitch
  // yaw
  return true;
}

void
serial_interface__msg__Port__fini(serial_interface__msg__Port * msg)
{
  if (!msg) {
    return;
  }
  // roll
  // pitch
  // yaw
}

bool
serial_interface__msg__Port__are_equal(const serial_interface__msg__Port * lhs, const serial_interface__msg__Port * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  return true;
}

bool
serial_interface__msg__Port__copy(
  const serial_interface__msg__Port * input,
  serial_interface__msg__Port * output)
{
  if (!input || !output) {
    return false;
  }
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  return true;
}

serial_interface__msg__Port *
serial_interface__msg__Port__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial_interface__msg__Port * msg = (serial_interface__msg__Port *)allocator.allocate(sizeof(serial_interface__msg__Port), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(serial_interface__msg__Port));
  bool success = serial_interface__msg__Port__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
serial_interface__msg__Port__destroy(serial_interface__msg__Port * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    serial_interface__msg__Port__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
serial_interface__msg__Port__Sequence__init(serial_interface__msg__Port__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial_interface__msg__Port * data = NULL;

  if (size) {
    data = (serial_interface__msg__Port *)allocator.zero_allocate(size, sizeof(serial_interface__msg__Port), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = serial_interface__msg__Port__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        serial_interface__msg__Port__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
serial_interface__msg__Port__Sequence__fini(serial_interface__msg__Port__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      serial_interface__msg__Port__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

serial_interface__msg__Port__Sequence *
serial_interface__msg__Port__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  serial_interface__msg__Port__Sequence * array = (serial_interface__msg__Port__Sequence *)allocator.allocate(sizeof(serial_interface__msg__Port__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = serial_interface__msg__Port__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
serial_interface__msg__Port__Sequence__destroy(serial_interface__msg__Port__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    serial_interface__msg__Port__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
serial_interface__msg__Port__Sequence__are_equal(const serial_interface__msg__Port__Sequence * lhs, const serial_interface__msg__Port__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!serial_interface__msg__Port__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
serial_interface__msg__Port__Sequence__copy(
  const serial_interface__msg__Port__Sequence * input,
  serial_interface__msg__Port__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(serial_interface__msg__Port);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    serial_interface__msg__Port * data =
      (serial_interface__msg__Port *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!serial_interface__msg__Port__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          serial_interface__msg__Port__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!serial_interface__msg__Port__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
