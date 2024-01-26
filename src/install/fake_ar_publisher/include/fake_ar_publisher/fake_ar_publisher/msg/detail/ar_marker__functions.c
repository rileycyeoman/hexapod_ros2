// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fake_ar_publisher:msg/ARMarker.idl
// generated code does not contain a copyright notice
#include "fake_ar_publisher/msg/detail/ar_marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"

bool
fake_ar_publisher__msg__ARMarker__init(fake_ar_publisher__msg__ARMarker * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    fake_ar_publisher__msg__ARMarker__fini(msg);
    return false;
  }
  // id
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose)) {
    fake_ar_publisher__msg__ARMarker__fini(msg);
    return false;
  }
  // confidence
  return true;
}

void
fake_ar_publisher__msg__ARMarker__fini(fake_ar_publisher__msg__ARMarker * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // pose
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose);
  // confidence
}

bool
fake_ar_publisher__msg__ARMarker__are_equal(const fake_ar_publisher__msg__ARMarker * lhs, const fake_ar_publisher__msg__ARMarker * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
fake_ar_publisher__msg__ARMarker__copy(
  const fake_ar_publisher__msg__ARMarker * input,
  fake_ar_publisher__msg__ARMarker * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  return true;
}

fake_ar_publisher__msg__ARMarker *
fake_ar_publisher__msg__ARMarker__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fake_ar_publisher__msg__ARMarker * msg = (fake_ar_publisher__msg__ARMarker *)allocator.allocate(sizeof(fake_ar_publisher__msg__ARMarker), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fake_ar_publisher__msg__ARMarker));
  bool success = fake_ar_publisher__msg__ARMarker__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fake_ar_publisher__msg__ARMarker__destroy(fake_ar_publisher__msg__ARMarker * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fake_ar_publisher__msg__ARMarker__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fake_ar_publisher__msg__ARMarker__Sequence__init(fake_ar_publisher__msg__ARMarker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fake_ar_publisher__msg__ARMarker * data = NULL;

  if (size) {
    data = (fake_ar_publisher__msg__ARMarker *)allocator.zero_allocate(size, sizeof(fake_ar_publisher__msg__ARMarker), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fake_ar_publisher__msg__ARMarker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fake_ar_publisher__msg__ARMarker__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
fake_ar_publisher__msg__ARMarker__Sequence__fini(fake_ar_publisher__msg__ARMarker__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      fake_ar_publisher__msg__ARMarker__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

fake_ar_publisher__msg__ARMarker__Sequence *
fake_ar_publisher__msg__ARMarker__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fake_ar_publisher__msg__ARMarker__Sequence * array = (fake_ar_publisher__msg__ARMarker__Sequence *)allocator.allocate(sizeof(fake_ar_publisher__msg__ARMarker__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fake_ar_publisher__msg__ARMarker__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fake_ar_publisher__msg__ARMarker__Sequence__destroy(fake_ar_publisher__msg__ARMarker__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fake_ar_publisher__msg__ARMarker__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fake_ar_publisher__msg__ARMarker__Sequence__are_equal(const fake_ar_publisher__msg__ARMarker__Sequence * lhs, const fake_ar_publisher__msg__ARMarker__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fake_ar_publisher__msg__ARMarker__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fake_ar_publisher__msg__ARMarker__Sequence__copy(
  const fake_ar_publisher__msg__ARMarker__Sequence * input,
  fake_ar_publisher__msg__ARMarker__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fake_ar_publisher__msg__ARMarker);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fake_ar_publisher__msg__ARMarker * data =
      (fake_ar_publisher__msg__ARMarker *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fake_ar_publisher__msg__ARMarker__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fake_ar_publisher__msg__ARMarker__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fake_ar_publisher__msg__ARMarker__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
