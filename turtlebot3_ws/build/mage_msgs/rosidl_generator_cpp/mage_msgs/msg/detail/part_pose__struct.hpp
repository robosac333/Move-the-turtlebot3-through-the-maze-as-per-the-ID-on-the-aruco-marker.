// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mage_msgs:msg/PartPose.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__PART_POSE__STRUCT_HPP_
#define MAGE_MSGS__MSG__DETAIL__PART_POSE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'part'
#include "mage_msgs/msg/detail/part__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mage_msgs__msg__PartPose __attribute__((deprecated))
#else
# define DEPRECATED__mage_msgs__msg__PartPose __declspec(deprecated)
#endif

namespace mage_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PartPose_
{
  using Type = PartPose_<ContainerAllocator>;

  explicit PartPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : part(_init),
    pose(_init)
  {
    (void)_init;
  }

  explicit PartPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : part(_alloc, _init),
    pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _part_type =
    mage_msgs::msg::Part_<ContainerAllocator>;
  _part_type part;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__part(
    const mage_msgs::msg::Part_<ContainerAllocator> & _arg)
  {
    this->part = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mage_msgs::msg::PartPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const mage_msgs::msg::PartPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mage_msgs::msg::PartPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mage_msgs::msg::PartPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mage_msgs::msg::PartPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mage_msgs::msg::PartPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mage_msgs::msg::PartPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mage_msgs::msg::PartPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mage_msgs::msg::PartPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mage_msgs::msg::PartPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mage_msgs__msg__PartPose
    std::shared_ptr<mage_msgs::msg::PartPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mage_msgs__msg__PartPose
    std::shared_ptr<mage_msgs::msg::PartPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PartPose_ & other) const
  {
    if (this->part != other.part) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const PartPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PartPose_

// alias to use template instance with default allocator
using PartPose =
  mage_msgs::msg::PartPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mage_msgs

#endif  // MAGE_MSGS__MSG__DETAIL__PART_POSE__STRUCT_HPP_
