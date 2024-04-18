// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensor_interface:srv/SendImage.idl
// generated code does not contain a copyright notice

#ifndef SENSOR_INTERFACE__SRV__DETAIL__SEND_IMAGE__STRUCT_HPP_
#define SENSOR_INTERFACE__SRV__DETAIL__SEND_IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__sensor_interface__srv__SendImage_Request __attribute__((deprecated))
#else
# define DEPRECATED__sensor_interface__srv__SendImage_Request __declspec(deprecated)
#endif

namespace sensor_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendImage_Request_
{
  using Type = SendImage_Request_<ContainerAllocator>;

  explicit SendImage_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit SendImage_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    sensor_interface::srv::SendImage_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_interface::srv::SendImage_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_interface::srv::SendImage_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_interface::srv::SendImage_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_interface::srv::SendImage_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_interface::srv::SendImage_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_interface::srv::SendImage_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_interface::srv::SendImage_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_interface::srv::SendImage_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_interface::srv::SendImage_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_interface__srv__SendImage_Request
    std::shared_ptr<sensor_interface::srv::SendImage_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_interface__srv__SendImage_Request
    std::shared_ptr<sensor_interface::srv::SendImage_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendImage_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendImage_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendImage_Request_

// alias to use template instance with default allocator
using SendImage_Request =
  sensor_interface::srv::SendImage_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sensor_interface


// Include directives for member types
// Member 'cropped'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sensor_interface__srv__SendImage_Response __attribute__((deprecated))
#else
# define DEPRECATED__sensor_interface__srv__SendImage_Response __declspec(deprecated)
#endif

namespace sensor_interface
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SendImage_Response_
{
  using Type = SendImage_Response_<ContainerAllocator>;

  explicit SendImage_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cropped(_init)
  {
    (void)_init;
  }

  explicit SendImage_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cropped(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _cropped_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _cropped_type cropped;

  // setters for named parameter idiom
  Type & set__cropped(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->cropped = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensor_interface::srv::SendImage_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensor_interface::srv::SendImage_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensor_interface::srv::SendImage_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensor_interface::srv::SendImage_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensor_interface::srv::SendImage_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensor_interface::srv::SendImage_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensor_interface::srv::SendImage_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensor_interface::srv::SendImage_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensor_interface::srv::SendImage_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensor_interface::srv::SendImage_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensor_interface__srv__SendImage_Response
    std::shared_ptr<sensor_interface::srv::SendImage_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensor_interface__srv__SendImage_Response
    std::shared_ptr<sensor_interface::srv::SendImage_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SendImage_Response_ & other) const
  {
    if (this->cropped != other.cropped) {
      return false;
    }
    return true;
  }
  bool operator!=(const SendImage_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SendImage_Response_

// alias to use template instance with default allocator
using SendImage_Response =
  sensor_interface::srv::SendImage_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace sensor_interface

namespace sensor_interface
{

namespace srv
{

struct SendImage
{
  using Request = sensor_interface::srv::SendImage_Request;
  using Response = sensor_interface::srv::SendImage_Response;
};

}  // namespace srv

}  // namespace sensor_interface

#endif  // SENSOR_INTERFACE__SRV__DETAIL__SEND_IMAGE__STRUCT_HPP_
