// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fake_ar_publisher:msg/ARMarker.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fake_ar_publisher/msg/detail/ar_marker__rosidl_typesupport_introspection_c.h"
#include "fake_ar_publisher/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fake_ar_publisher/msg/detail/ar_marker__functions.h"
#include "fake_ar_publisher/msg/detail/ar_marker__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose_with_covariance.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fake_ar_publisher__msg__ARMarker__init(message_memory);
}

void fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_fini_function(void * message_memory)
{
  fake_ar_publisher__msg__ARMarker__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fake_ar_publisher__msg__ARMarker, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fake_ar_publisher__msg__ARMarker, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fake_ar_publisher__msg__ARMarker, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fake_ar_publisher__msg__ARMarker, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_message_members = {
  "fake_ar_publisher__msg",  // message namespace
  "ARMarker",  // message name
  4,  // number of fields
  sizeof(fake_ar_publisher__msg__ARMarker),
  fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_message_member_array,  // message members
  fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_init_function,  // function to initialize message memory (memory has to be allocated)
  fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_message_type_support_handle = {
  0,
  &fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fake_ar_publisher
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fake_ar_publisher, msg, ARMarker)() {
  fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovariance)();
  if (!fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_message_type_support_handle.typesupport_identifier) {
    fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fake_ar_publisher__msg__ARMarker__rosidl_typesupport_introspection_c__ARMarker_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
