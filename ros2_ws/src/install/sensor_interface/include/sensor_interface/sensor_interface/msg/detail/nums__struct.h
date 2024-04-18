// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensor_interface:msg/Nums.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACE__MSG__DETAIL__NUMS__STRUCT_H_
#define SENSOR_INTERFACE__MSG__DETAIL__NUMS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Nums in the package sensor_interface.
typedef struct sensor_interface__msg__Nums
{
  double num1;
  double num2;
} sensor_interface__msg__Nums;

// Struct for a sequence of sensor_interface__msg__Nums.
typedef struct sensor_interface__msg__Nums__Sequence
{
  sensor_interface__msg__Nums * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensor_interface__msg__Nums__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSOR_INTERFACE__MSG__DETAIL__NUMS__STRUCT_H_
