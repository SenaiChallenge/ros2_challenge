// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensor_interface:srv/SendImage.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACE__SRV__DETAIL__SEND_IMAGE__TRAITS_HPP_
#define SENSOR_INTERFACE__SRV__DETAIL__SEND_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensor_interface/srv/detail/send_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace sensor_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendImage_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendImage_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sensor_interface

namespace rosidl_generator_traits
{

[[deprecated("use sensor_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_interface::srv::SendImage_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const sensor_interface::srv::SendImage_Request & msg)
{
  return sensor_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_interface::srv::SendImage_Request>()
{
  return "sensor_interface::srv::SendImage_Request";
}

template<>
inline const char * name<sensor_interface::srv::SendImage_Request>()
{
  return "sensor_interface/srv/SendImage_Request";
}

template<>
struct has_fixed_size<sensor_interface::srv::SendImage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<sensor_interface::srv::SendImage_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<sensor_interface::srv::SendImage_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'cropped'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace sensor_interface
{

namespace srv
{

inline void to_flow_style_yaml(
  const SendImage_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: cropped
  {
    out << "cropped: ";
    to_flow_style_yaml(msg.cropped, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SendImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cropped
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cropped:\n";
    to_block_style_yaml(msg.cropped, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SendImage_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace sensor_interface

namespace rosidl_generator_traits
{

[[deprecated("use sensor_interface::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensor_interface::srv::SendImage_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensor_interface::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensor_interface::srv::to_yaml() instead")]]
inline std::string to_yaml(const sensor_interface::srv::SendImage_Response & msg)
{
  return sensor_interface::srv::to_yaml(msg);
}

template<>
inline const char * data_type<sensor_interface::srv::SendImage_Response>()
{
  return "sensor_interface::srv::SendImage_Response";
}

template<>
inline const char * name<sensor_interface::srv::SendImage_Response>()
{
  return "sensor_interface/srv/SendImage_Response";
}

template<>
struct has_fixed_size<sensor_interface::srv::SendImage_Response>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::Image>::value> {};

template<>
struct has_bounded_size<sensor_interface::srv::SendImage_Response>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::Image>::value> {};

template<>
struct is_message<sensor_interface::srv::SendImage_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<sensor_interface::srv::SendImage>()
{
  return "sensor_interface::srv::SendImage";
}

template<>
inline const char * name<sensor_interface::srv::SendImage>()
{
  return "sensor_interface/srv/SendImage";
}

template<>
struct has_fixed_size<sensor_interface::srv::SendImage>
  : std::integral_constant<
    bool,
    has_fixed_size<sensor_interface::srv::SendImage_Request>::value &&
    has_fixed_size<sensor_interface::srv::SendImage_Response>::value
  >
{
};

template<>
struct has_bounded_size<sensor_interface::srv::SendImage>
  : std::integral_constant<
    bool,
    has_bounded_size<sensor_interface::srv::SendImage_Request>::value &&
    has_bounded_size<sensor_interface::srv::SendImage_Response>::value
  >
{
};

template<>
struct is_service<sensor_interface::srv::SendImage>
  : std::true_type
{
};

template<>
struct is_service_request<sensor_interface::srv::SendImage_Request>
  : std::true_type
{
};

template<>
struct is_service_response<sensor_interface::srv::SendImage_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_INTERFACE__SRV__DETAIL__SEND_IMAGE__TRAITS_HPP_
