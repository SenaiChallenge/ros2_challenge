// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_interface:msg/Nums.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACE__MSG__DETAIL__NUMS__TRAITS_HPP_
#define SENSOR_INTERFACE__MSG__DETAIL__NUMS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensor_interface/msg/detail/nums__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sensor_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Nums & msg,
  std::ostream & out)
{
  out << "{";
  // member: num1
  {
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << ", ";
  }

  // member: num2
  {
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Nums & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num1: ";
    rosidl_generator_traits::value_to_yaml(msg.num1, out);
    out << "\n";
  }

  // member: num2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num2: ";
    rosidl_generator_traits::value_to_yaml(msg.num2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Nums & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace sensor_interface

namespace rosidl_generator_traits
{

[[deprecated("use sensor_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_interface::msg::Nums & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const sensor_interface::msg::Nums & msg)
{
  return sensor_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_interface::msg::Nums>()
{
  return "sensor_interface::msg::Nums";
}

template<>
inline const char * name<sensor_interface::msg::Nums>()
{
  return "sensor_interface/msg/Nums";
}

template<>
struct has_fixed_size<sensor_interface::msg::Nums>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sensor_interface::msg::Nums>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sensor_interface::msg::Nums>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_INTERFACE__MSG__DETAIL__NUMS__TRAITS_HPP_
