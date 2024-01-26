// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fake_ar_publisher:msg/ARMarker.idl
// generated code does not contain a copyright notice

#ifndef FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__STRUCT_HPP_
#define FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fake_ar_publisher__msg__ARMarker __attribute__((deprecated))
#else
# define DEPRECATED__fake_ar_publisher__msg__ARMarker __declspec(deprecated)
#endif

namespace fake_ar_publisher
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ARMarker_
{
  using Type = ARMarker_<ContainerAllocator>;

  explicit ARMarker_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->confidence = 0ul;
    }
  }

  explicit ARMarker_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = 0ul;
      this->confidence = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    uint32_t;
  _id_type id;
  using _pose_type =
    geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator>;
  _pose_type pose;
  using _confidence_type =
    uint32_t;
  _confidence_type confidence;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__id(
    const uint32_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::PoseWithCovariance_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__confidence(
    const uint32_t & _arg)
  {
    this->confidence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fake_ar_publisher::msg::ARMarker_<ContainerAllocator> *;
  using ConstRawPtr =
    const fake_ar_publisher::msg::ARMarker_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fake_ar_publisher::msg::ARMarker_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fake_ar_publisher::msg::ARMarker_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fake_ar_publisher::msg::ARMarker_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fake_ar_publisher::msg::ARMarker_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fake_ar_publisher::msg::ARMarker_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fake_ar_publisher::msg::ARMarker_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fake_ar_publisher::msg::ARMarker_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fake_ar_publisher::msg::ARMarker_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fake_ar_publisher__msg__ARMarker
    std::shared_ptr<fake_ar_publisher::msg::ARMarker_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fake_ar_publisher__msg__ARMarker
    std::shared_ptr<fake_ar_publisher::msg::ARMarker_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ARMarker_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    return true;
  }
  bool operator!=(const ARMarker_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ARMarker_

// alias to use template instance with default allocator
using ARMarker =
  fake_ar_publisher::msg::ARMarker_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fake_ar_publisher

#endif  // FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__STRUCT_HPP_
