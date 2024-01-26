// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fake_ar_publisher:msg/ARMarker.idl
// generated code does not contain a copyright notice

#ifndef FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__STRUCT_H_
#define FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__struct.h"

/// Struct defined in msg/ARMarker in the package fake_ar_publisher.
typedef struct fake_ar_publisher__msg__ARMarker
{
  std_msgs__msg__Header header;
  uint32_t id;
  geometry_msgs__msg__PoseWithCovariance pose;
  uint32_t confidence;
} fake_ar_publisher__msg__ARMarker;

// Struct for a sequence of fake_ar_publisher__msg__ARMarker.
typedef struct fake_ar_publisher__msg__ARMarker__Sequence
{
  fake_ar_publisher__msg__ARMarker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fake_ar_publisher__msg__ARMarker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FAKE_AR_PUBLISHER__MSG__DETAIL__AR_MARKER__STRUCT_H_
