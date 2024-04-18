// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensor_interface:msg/Nums.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACE__MSG__DETAIL__NUMS__BUILDER_HPP_
#define SENSOR_INTERFACE__MSG__DETAIL__NUMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensor_interface/msg/detail/nums__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensor_interface
{

namespace msg
{

namespace builder
{

class Init_Nums_num2
{
public:
  explicit Init_Nums_num2(::sensor_interface::msg::Nums & msg)
  : msg_(msg)
  {}
  ::sensor_interface::msg::Nums num2(::sensor_interface::msg::Nums::_num2_type arg)
  {
    msg_.num2 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensor_interface::msg::Nums msg_;
};

class Init_Nums_num1
{
public:
  Init_Nums_num1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Nums_num2 num1(::sensor_interface::msg::Nums::_num1_type arg)
  {
    msg_.num1 = std::move(arg);
    return Init_Nums_num2(msg_);
  }

private:
  ::sensor_interface::msg::Nums msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensor_interface::msg::Nums>()
{
  return sensor_interface::msg::builder::Init_Nums_num1();
}

}  // namespace sensor_interface

#endif  // SENSOR_INTERFACE__MSG__DETAIL__NUMS__BUILDER_HPP_
