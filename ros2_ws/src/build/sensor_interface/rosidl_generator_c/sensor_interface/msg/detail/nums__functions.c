// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_interface:msg/Nums.idl
// generated code does not contain a copyright notice
#include "sensor_interface/msg/detail/nums__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
sensor_interface__msg__Nums__init(sensor_interface__msg__Nums * msg)
{
  if (!msg) {
    return false;
  }
  // num1
  // num2
  return true;
}

void
sensor_interface__msg__Nums__fini(sensor_interface__msg__Nums * msg)
{
  if (!msg) {
    return;
  }
  // num1
  // num2
}

bool
sensor_interface__msg__Nums__are_equal(const sensor_interface__msg__Nums * lhs, const sensor_interface__msg__Nums * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num1
  if (lhs->num1 != rhs->num1) {
    return false;
  }
  // num2
  if (lhs->num2 != rhs->num2) {
    return false;
  }
  return true;
}

bool
sensor_interface__msg__Nums__copy(
  const sensor_interface__msg__Nums * input,
  sensor_interface__msg__Nums * output)
{
  if (!input || !output) {
    return false;
  }
  // num1
  output->num1 = input->num1;
  // num2
  output->num2 = input->num2;
  return true;
}

sensor_interface__msg__Nums *
sensor_interface__msg__Nums__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interface__msg__Nums * msg = (sensor_interface__msg__Nums *)allocator.allocate(sizeof(sensor_interface__msg__Nums), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_interface__msg__Nums));
  bool success = sensor_interface__msg__Nums__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensor_interface__msg__Nums__destroy(sensor_interface__msg__Nums * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensor_interface__msg__Nums__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensor_interface__msg__Nums__Sequence__init(sensor_interface__msg__Nums__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interface__msg__Nums * data = NULL;

  if (size) {
    data = (sensor_interface__msg__Nums *)allocator.zero_allocate(size, sizeof(sensor_interface__msg__Nums), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_interface__msg__Nums__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_interface__msg__Nums__fini(&data[i - 1]);
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
sensor_interface__msg__Nums__Sequence__fini(sensor_interface__msg__Nums__Sequence * array)
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
      sensor_interface__msg__Nums__fini(&array->data[i]);
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

sensor_interface__msg__Nums__Sequence *
sensor_interface__msg__Nums__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interface__msg__Nums__Sequence * array = (sensor_interface__msg__Nums__Sequence *)allocator.allocate(sizeof(sensor_interface__msg__Nums__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensor_interface__msg__Nums__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensor_interface__msg__Nums__Sequence__destroy(sensor_interface__msg__Nums__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensor_interface__msg__Nums__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensor_interface__msg__Nums__Sequence__are_equal(const sensor_interface__msg__Nums__Sequence * lhs, const sensor_interface__msg__Nums__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensor_interface__msg__Nums__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensor_interface__msg__Nums__Sequence__copy(
  const sensor_interface__msg__Nums__Sequence * input,
  sensor_interface__msg__Nums__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensor_interface__msg__Nums);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensor_interface__msg__Nums * data =
      (sensor_interface__msg__Nums *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensor_interface__msg__Nums__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sensor_interface__msg__Nums__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensor_interface__msg__Nums__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
