// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mage_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice
#include "mage_msgs/msg/detail/advanced_logical_camera_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `part_poses`
#include "mage_msgs/msg/detail/part_pose__functions.h"
// Member `sensor_pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
mage_msgs__msg__AdvancedLogicalCameraImage__init(mage_msgs__msg__AdvancedLogicalCameraImage * msg)
{
  if (!msg) {
    return false;
  }
  // part_poses
  if (!mage_msgs__msg__PartPose__Sequence__init(&msg->part_poses, 0)) {
    mage_msgs__msg__AdvancedLogicalCameraImage__fini(msg);
    return false;
  }
  // sensor_pose
  if (!geometry_msgs__msg__Pose__init(&msg->sensor_pose)) {
    mage_msgs__msg__AdvancedLogicalCameraImage__fini(msg);
    return false;
  }
  return true;
}

void
mage_msgs__msg__AdvancedLogicalCameraImage__fini(mage_msgs__msg__AdvancedLogicalCameraImage * msg)
{
  if (!msg) {
    return;
  }
  // part_poses
  mage_msgs__msg__PartPose__Sequence__fini(&msg->part_poses);
  // sensor_pose
  geometry_msgs__msg__Pose__fini(&msg->sensor_pose);
}

bool
mage_msgs__msg__AdvancedLogicalCameraImage__are_equal(const mage_msgs__msg__AdvancedLogicalCameraImage * lhs, const mage_msgs__msg__AdvancedLogicalCameraImage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // part_poses
  if (!mage_msgs__msg__PartPose__Sequence__are_equal(
      &(lhs->part_poses), &(rhs->part_poses)))
  {
    return false;
  }
  // sensor_pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->sensor_pose), &(rhs->sensor_pose)))
  {
    return false;
  }
  return true;
}

bool
mage_msgs__msg__AdvancedLogicalCameraImage__copy(
  const mage_msgs__msg__AdvancedLogicalCameraImage * input,
  mage_msgs__msg__AdvancedLogicalCameraImage * output)
{
  if (!input || !output) {
    return false;
  }
  // part_poses
  if (!mage_msgs__msg__PartPose__Sequence__copy(
      &(input->part_poses), &(output->part_poses)))
  {
    return false;
  }
  // sensor_pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->sensor_pose), &(output->sensor_pose)))
  {
    return false;
  }
  return true;
}

mage_msgs__msg__AdvancedLogicalCameraImage *
mage_msgs__msg__AdvancedLogicalCameraImage__create()
{
  mage_msgs__msg__AdvancedLogicalCameraImage * msg = (mage_msgs__msg__AdvancedLogicalCameraImage *)malloc(sizeof(mage_msgs__msg__AdvancedLogicalCameraImage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mage_msgs__msg__AdvancedLogicalCameraImage));
  bool success = mage_msgs__msg__AdvancedLogicalCameraImage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mage_msgs__msg__AdvancedLogicalCameraImage__destroy(mage_msgs__msg__AdvancedLogicalCameraImage * msg)
{
  if (msg) {
    mage_msgs__msg__AdvancedLogicalCameraImage__fini(msg);
  }
  free(msg);
}


bool
mage_msgs__msg__AdvancedLogicalCameraImage__Sequence__init(mage_msgs__msg__AdvancedLogicalCameraImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mage_msgs__msg__AdvancedLogicalCameraImage * data = NULL;
  if (size) {
    data = (mage_msgs__msg__AdvancedLogicalCameraImage *)calloc(size, sizeof(mage_msgs__msg__AdvancedLogicalCameraImage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mage_msgs__msg__AdvancedLogicalCameraImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mage_msgs__msg__AdvancedLogicalCameraImage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mage_msgs__msg__AdvancedLogicalCameraImage__Sequence__fini(mage_msgs__msg__AdvancedLogicalCameraImage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mage_msgs__msg__AdvancedLogicalCameraImage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mage_msgs__msg__AdvancedLogicalCameraImage__Sequence *
mage_msgs__msg__AdvancedLogicalCameraImage__Sequence__create(size_t size)
{
  mage_msgs__msg__AdvancedLogicalCameraImage__Sequence * array = (mage_msgs__msg__AdvancedLogicalCameraImage__Sequence *)malloc(sizeof(mage_msgs__msg__AdvancedLogicalCameraImage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mage_msgs__msg__AdvancedLogicalCameraImage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mage_msgs__msg__AdvancedLogicalCameraImage__Sequence__destroy(mage_msgs__msg__AdvancedLogicalCameraImage__Sequence * array)
{
  if (array) {
    mage_msgs__msg__AdvancedLogicalCameraImage__Sequence__fini(array);
  }
  free(array);
}

bool
mage_msgs__msg__AdvancedLogicalCameraImage__Sequence__are_equal(const mage_msgs__msg__AdvancedLogicalCameraImage__Sequence * lhs, const mage_msgs__msg__AdvancedLogicalCameraImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mage_msgs__msg__AdvancedLogicalCameraImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mage_msgs__msg__AdvancedLogicalCameraImage__Sequence__copy(
  const mage_msgs__msg__AdvancedLogicalCameraImage__Sequence * input,
  mage_msgs__msg__AdvancedLogicalCameraImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mage_msgs__msg__AdvancedLogicalCameraImage);
    mage_msgs__msg__AdvancedLogicalCameraImage * data =
      (mage_msgs__msg__AdvancedLogicalCameraImage *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mage_msgs__msg__AdvancedLogicalCameraImage__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mage_msgs__msg__AdvancedLogicalCameraImage__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mage_msgs__msg__AdvancedLogicalCameraImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
