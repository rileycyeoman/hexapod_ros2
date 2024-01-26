// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from fake_ar_publisher:msg/ARMarker.idl
// generated code does not contain a copyright notice

#ifndef FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "fake_ar_publisher/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "fake_ar_publisher/msg/detail/ar_marker__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace fake_ar_publisher
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fake_ar_publisher
cdr_serialize(
  const fake_ar_publisher::msg::ARMarker & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fake_ar_publisher
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  fake_ar_publisher::msg::ARMarker & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fake_ar_publisher
get_serialized_size(
  const fake_ar_publisher::msg::ARMarker & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fake_ar_publisher
max_serialized_size_ARMarker(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace fake_ar_publisher

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_fake_ar_publisher
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, fake_ar_publisher, msg, ARMarker)();

#ifdef __cplusplus
}
#endif

#endif  // FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
