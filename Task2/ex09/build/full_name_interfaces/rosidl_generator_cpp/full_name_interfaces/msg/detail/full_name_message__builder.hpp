// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from full_name_interfaces:msg/FullNameMessage.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_INTERFACES__MSG__DETAIL__FULL_NAME_MESSAGE__BUILDER_HPP_
#define FULL_NAME_INTERFACES__MSG__DETAIL__FULL_NAME_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "full_name_interfaces/msg/detail/full_name_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace full_name_interfaces
{

namespace msg
{

namespace builder
{

class Init_FullNameMessage_first_name
{
public:
  explicit Init_FullNameMessage_first_name(::full_name_interfaces::msg::FullNameMessage & msg)
  : msg_(msg)
  {}
  ::full_name_interfaces::msg::FullNameMessage first_name(::full_name_interfaces::msg::FullNameMessage::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::full_name_interfaces::msg::FullNameMessage msg_;
};

class Init_FullNameMessage_name
{
public:
  explicit Init_FullNameMessage_name(::full_name_interfaces::msg::FullNameMessage & msg)
  : msg_(msg)
  {}
  Init_FullNameMessage_first_name name(::full_name_interfaces::msg::FullNameMessage::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_FullNameMessage_first_name(msg_);
  }

private:
  ::full_name_interfaces::msg::FullNameMessage msg_;
};

class Init_FullNameMessage_last_name
{
public:
  Init_FullNameMessage_last_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullNameMessage_name last_name(::full_name_interfaces::msg::FullNameMessage::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_FullNameMessage_name(msg_);
  }

private:
  ::full_name_interfaces::msg::FullNameMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::full_name_interfaces::msg::FullNameMessage>()
{
  return full_name_interfaces::msg::builder::Init_FullNameMessage_last_name();
}

}  // namespace full_name_interfaces

#endif  // FULL_NAME_INTERFACES__MSG__DETAIL__FULL_NAME_MESSAGE__BUILDER_HPP_
