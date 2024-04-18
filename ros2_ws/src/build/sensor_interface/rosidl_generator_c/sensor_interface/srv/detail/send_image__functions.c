// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensor_interface:srv/SendImage.idl
// generated code does not contain a copyright notice
#include "sensor_interface/srv/detail/send_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
sensor_interface__srv__SendImage_Request__init(sensor_interface__srv__SendImage_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
sensor_interface__srv__SendImage_Request__fini(sensor_interface__srv__SendImage_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
sensor_interface__srv__SendImage_Request__are_equal(const sensor_interface__srv__SendImage_Request * lhs, const sensor_interface__srv__SendImage_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
sensor_interface__srv__SendImage_Request__copy(
  const sensor_interface__srv__SendImage_Request * input,
  sensor_interface__srv__SendImage_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

sensor_interface__srv__SendImage_Request *
sensor_interface__srv__SendImage_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interface__srv__SendImage_Request * msg = (sensor_interface__srv__SendImage_Request *)allocator.allocate(sizeof(sensor_interface__srv__SendImage_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_interface__srv__SendImage_Request));
  bool success = sensor_interface__srv__SendImage_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensor_interface__srv__SendImage_Request__destroy(sensor_interface__srv__SendImage_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensor_interface__srv__SendImage_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensor_interface__srv__SendImage_Request__Sequence__init(sensor_interface__srv__SendImage_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interface__srv__SendImage_Request * data = NULL;

  if (size) {
    data = (sensor_interface__srv__SendImage_Request *)allocator.zero_allocate(size, sizeof(sensor_interface__srv__SendImage_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_interface__srv__SendImage_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_interface__srv__SendImage_Request__fini(&data[i - 1]);
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
sensor_interface__srv__SendImage_Request__Sequence__fini(sensor_interface__srv__SendImage_Request__Sequence * array)
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
      sensor_interface__srv__SendImage_Request__fini(&array->data[i]);
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

sensor_interface__srv__SendImage_Request__Sequence *
sensor_interface__srv__SendImage_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interface__srv__SendImage_Request__Sequence * array = (sensor_interface__srv__SendImage_Request__Sequence *)allocator.allocate(sizeof(sensor_interface__srv__SendImage_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensor_interface__srv__SendImage_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensor_interface__srv__SendImage_Request__Sequence__destroy(sensor_interface__srv__SendImage_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensor_interface__srv__SendImage_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensor_interface__srv__SendImage_Request__Sequence__are_equal(const sensor_interface__srv__SendImage_Request__Sequence * lhs, const sensor_interface__srv__SendImage_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensor_interface__srv__SendImage_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensor_interface__srv__SendImage_Request__Sequence__copy(
  const sensor_interface__srv__SendImage_Request__Sequence * input,
  sensor_interface__srv__SendImage_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensor_interface__srv__SendImage_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensor_interface__srv__SendImage_Request * data =
      (sensor_interface__srv__SendImage_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensor_interface__srv__SendImage_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sensor_interface__srv__SendImage_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensor_interface__srv__SendImage_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `cropped`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
sensor_interface__srv__SendImage_Response__init(sensor_interface__srv__SendImage_Response * msg)
{
  if (!msg) {
    return false;
  }
  // cropped
  if (!sensor_msgs__msg__Image__init(&msg->cropped)) {
    sensor_interface__srv__SendImage_Response__fini(msg);
    return false;
  }
  return true;
}

void
sensor_interface__srv__SendImage_Response__fini(sensor_interface__srv__SendImage_Response * msg)
{
  if (!msg) {
    return;
  }
  // cropped
  sensor_msgs__msg__Image__fini(&msg->cropped);
}

bool
sensor_interface__srv__SendImage_Response__are_equal(const sensor_interface__srv__SendImage_Response * lhs, const sensor_interface__srv__SendImage_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cropped
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->cropped), &(rhs->cropped)))
  {
    return false;
  }
  return true;
}

bool
sensor_interface__srv__SendImage_Response__copy(
  const sensor_interface__srv__SendImage_Response * input,
  sensor_interface__srv__SendImage_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // cropped
  if (!sensor_msgs__msg__Image__copy(
      &(input->cropped), &(output->cropped)))
  {
    return false;
  }
  return true;
}

sensor_interface__srv__SendImage_Response *
sensor_interface__srv__SendImage_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interface__srv__SendImage_Response * msg = (sensor_interface__srv__SendImage_Response *)allocator.allocate(sizeof(sensor_interface__srv__SendImage_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensor_interface__srv__SendImage_Response));
  bool success = sensor_interface__srv__SendImage_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensor_interface__srv__SendImage_Response__destroy(sensor_interface__srv__SendImage_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensor_interface__srv__SendImage_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensor_interface__srv__SendImage_Response__Sequence__init(sensor_interface__srv__SendImage_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interface__srv__SendImage_Response * data = NULL;

  if (size) {
    data = (sensor_interface__srv__SendImage_Response *)allocator.zero_allocate(size, sizeof(sensor_interface__srv__SendImage_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensor_interface__srv__SendImage_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensor_interface__srv__SendImage_Response__fini(&data[i - 1]);
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
sensor_interface__srv__SendImage_Response__Sequence__fini(sensor_interface__srv__SendImage_Response__Sequence * array)
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
      sensor_interface__srv__SendImage_Response__fini(&array->data[i]);
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

sensor_interface__srv__SendImage_Response__Sequence *
sensor_interface__srv__SendImage_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensor_interface__srv__SendImage_Response__Sequence * array = (sensor_interface__srv__SendImage_Response__Sequence *)allocator.allocate(sizeof(sensor_interface__srv__SendImage_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensor_interface__srv__SendImage_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensor_interface__srv__SendImage_Response__Sequence__destroy(sensor_interface__srv__SendImage_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensor_interface__srv__SendImage_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensor_interface__srv__SendImage_Response__Sequence__are_equal(const sensor_interface__srv__SendImage_Response__Sequence * lhs, const sensor_interface__srv__SendImage_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensor_interface__srv__SendImage_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensor_interface__srv__SendImage_Response__Sequence__copy(
  const sensor_interface__srv__SendImage_Response__Sequence * input,
  sensor_interface__srv__SendImage_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(sensor_interface__srv__SendImage_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensor_interface__srv__SendImage_Response * data =
      (sensor_interface__srv__SendImage_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensor_interface__srv__SendImage_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sensor_interface__srv__SendImage_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensor_interface__srv__SendImage_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
