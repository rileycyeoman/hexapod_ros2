// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fake_ar_publisher:msg/ARMarker.idl
// generated code does not contain a copyright notice

#ifndef FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__TRAITS_HPP_
#define FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fake_ar_publisher/msg/detail/ar_marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"

namespace fake_ar_publisher
{

namespace msg
{

inline void to_flow_style_yaml(
  const ARMarker & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ARMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ARMarker & msg, bool use_flow_style = false)
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

}  // namespace fake_ar_publisher

namespace rosidl_generator_traits
{

[[deprecated("use fake_ar_publisher::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fake_ar_publisher::msg::ARMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  fake_ar_publisher::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fake_ar_publisher::msg::to_yaml() instead")]]
inline std::string to_yaml(const fake_ar_publisher::msg::ARMarker & msg)
{
  return fake_ar_publisher::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fake_ar_publisher::msg::ARMarker>()
{
  return "fake_ar_publisher::msg::ARMarker";
}

template<>
inline const char * name<fake_ar_publisher::msg::ARMarker>()
{
  return "fake_ar_publisher/msg/ARMarker";
}

template<>
struct has_fixed_size<fake_ar_publisher::msg::ARMarker>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<fake_ar_publisher::msg::ARMarker>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<fake_ar_publisher::msg::ARMarker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__TRAITS_HPP_
