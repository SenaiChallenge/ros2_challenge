// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_interface:srv/SendImage.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACE__SRV__DETAIL__SEND_IMAGE__BUILDER_HPP_
#define SENSOR_INTERFACE__SRV__DETAIL__SEND_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_interface/srv/detail/send_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_interface
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_interface::srv::SendImage_Request>()
{
  return ::sensor_interface::srv::SendImage_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace sensor_interface


namespace sensor_interface
{

namespace srv
{

namespace builder
{

class Init_SendImage_Response_cropped
{
public:
  Init_SendImage_Response_cropped()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::sensor_interface::srv::SendImage_Response cropped(::sensor_interface::srv::SendImage_Response::_cropped_type arg)
  {
    msg_.cropped = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_interface::srv::SendImage_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_interface::srv::SendImage_Response>()
{
  return sensor_interface::srv::builder::Init_SendImage_Response_cropped();
}

}  // namespace sensor_interface

#endif  // SENSOR_INTERFACE__SRV__DETAIL__SEND_IMAGE__BUILDER_HPP_
