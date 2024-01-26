// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fake_ar_publisher:msg/ARMarker.idl
// generated code does not contain a copyright notice

#ifndef FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__BUILDER_HPP_
#define FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fake_ar_publisher/msg/detail/ar_marker__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fake_ar_publisher
{

namespace msg
{

namespace builder
{

class Init_ARMarker_confidence
{
public:
  explicit Init_ARMarker_confidence(::fake_ar_publisher::msg::ARMarker & msg)
  : msg_(msg)
  {}
  ::fake_ar_publisher::msg::ARMarker confidence(::fake_ar_publisher::msg::ARMarker::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fake_ar_publisher::msg::ARMarker msg_;
};

class Init_ARMarker_pose
{
public:
  explicit Init_ARMarker_pose(::fake_ar_publisher::msg::ARMarker & msg)
  : msg_(msg)
  {}
  Init_ARMarker_confidence pose(::fake_ar_publisher::msg::ARMarker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_ARMarker_confidence(msg_);
  }

private:
  ::fake_ar_publisher::msg::ARMarker msg_;
};

class Init_ARMarker_id
{
public:
  explicit Init_ARMarker_id(::fake_ar_publisher::msg::ARMarker & msg)
  : msg_(msg)
  {}
  Init_ARMarker_pose id(::fake_ar_publisher::msg::ARMarker::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_ARMarker_pose(msg_);
  }

private:
  ::fake_ar_publisher::msg::ARMarker msg_;
};

class Init_ARMarker_header
{
public:
  Init_ARMarker_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ARMarker_id header(::fake_ar_publisher::msg::ARMarker::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ARMarker_id(msg_);
  }

private:
  ::fake_ar_publisher::msg::ARMarker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fake_ar_publisher::msg::ARMarker>()
{
  return fake_ar_publisher::msg::builder::Init_ARMarker_header();
}

}  // namespace fake_ar_publisher

#endif  // FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__BUILDER_HPP_
