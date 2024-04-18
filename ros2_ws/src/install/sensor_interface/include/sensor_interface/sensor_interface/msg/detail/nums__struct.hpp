// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_interface:msg/Nums.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACE__MSG__DETAIL__NUMS__STRUCT_HPP_
#define SENSOR_INTERFACE__MSG__DETAIL__NUMS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sensor_interface__msg__Nums __attribute__((deprecated))
#else
# define DEPRECATED__sensor_interface__msg__Nums __declspec(deprecated)
#endif

namespace sensor_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Nums_
{
  using Type = Nums_<ContainerAllocator>;

  explicit Nums_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num1 = 0.0;
      this->num2 = 0.0;
    }
  }

  explicit Nums_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num1 = 0.0;
      this->num2 = 0.0;
    }
  }

  // field types and members
  using _num1_type =
    double;
  _num1_type num1;
  using _num2_type =
    double;
  _num2_type num2;

  // setters for named parameter idiom
  Type & set__num1(
    const double & _arg)
  {
    this->num1 = _arg;
    return *this;
  }
  Type & set__num2(
    const double & _arg)
  {
    this->num2 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_interface::msg::Nums_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_interface::msg::Nums_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_interface::msg::Nums_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_interface::msg::Nums_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_interface::msg::Nums_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_interface::msg::Nums_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_interface::msg::Nums_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_interface::msg::Nums_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_interface::msg::Nums_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_interface::msg::Nums_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_interface__msg__Nums
    std::shared_ptr<sensor_interface::msg::Nums_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_interface__msg__Nums
    std::shared_ptr<sensor_interface::msg::Nums_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Nums_ & other) const
  {
    if (this->num1 != other.num1) {
      return false;
    }
    if (this->num2 != other.num2) {
      return false;
    }
    return true;
  }
  bool operator!=(const Nums_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Nums_

// alias to use template instance with default allocator
using Nums =
  sensor_interface::msg::Nums_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensor_interface

#endif  // SENSOR_INTERFACE__MSG__DETAIL__NUMS__STRUCT_HPP_
