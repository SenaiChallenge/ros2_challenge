// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_interface:srv/SendImage.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACE__SRV__DETAIL__SEND_IMAGE__STRUCT_H_
#define SENSOR_INTERFACE__SRV__DETAIL__SEND_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SendImage in the package sensor_interface.
typedef struct sensor_interface__srv__SendImage_Request
{
  uint8_t structure_needs_at_least_one_member;
} sensor_interface__srv__SendImage_Request;

// Struct for a sequence of sensor_interface__srv__SendImage_Request.
typedef struct sensor_interface__srv__SendImage_Request__Sequence
{
  sensor_interface__srv__SendImage_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_interface__srv__SendImage_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'cropped'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in srv/SendImage in the package sensor_interface.
typedef struct sensor_interface__srv__SendImage_Response
{
  sensor_msgs__msg__Image cropped;
} sensor_interface__srv__SendImage_Response;

// Struct for a sequence of sensor_interface__srv__SendImage_Response.
typedef struct sensor_interface__srv__SendImage_Response__Sequence
{
  sensor_interface__srv__SendImage_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_interface__srv__SendImage_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_INTERFACE__SRV__DETAIL__SEND_IMAGE__STRUCT_H_
