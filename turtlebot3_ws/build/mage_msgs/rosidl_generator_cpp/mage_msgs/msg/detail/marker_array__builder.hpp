// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mage_msgs:msg/MarkerArray.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__MARKER_ARRAY__BUILDER_HPP_
#define MAGE_MSGS__MSG__DETAIL__MARKER_ARRAY__BUILDER_HPP_

#include "mage_msgs/msg/detail/marker_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mage_msgs
{

namespace msg
{

namespace builder
{

class Init_MarkerArray_markers
{
public:
  explicit Init_MarkerArray_markers(::mage_msgs::msg::MarkerArray & msg)
  : msg_(msg)
  {}
  ::mage_msgs::msg::MarkerArray markers(::mage_msgs::msg::MarkerArray::_markers_type arg)
  {
    msg_.markers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mage_msgs::msg::MarkerArray msg_;
};

class Init_MarkerArray_header
{
public:
  Init_MarkerArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MarkerArray_markers header(::mage_msgs::msg::MarkerArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_MarkerArray_markers(msg_);
  }

private:
  ::mage_msgs::msg::MarkerArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mage_msgs::msg::MarkerArray>()
{
  return mage_msgs::msg::builder::Init_MarkerArray_header();
}

}  // namespace mage_msgs

#endif  // MAGE_MSGS__MSG__DETAIL__MARKER_ARRAY__BUILDER_HPP_
