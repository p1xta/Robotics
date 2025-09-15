// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from full_name_interfaces:srv/FullNameSumService.idl
// generated code does not contain a copyright notice

#ifndef FULL_NAME_INTERFACES__SRV__DETAIL__FULL_NAME_SUM_SERVICE__BUILDER_HPP_
#define FULL_NAME_INTERFACES__SRV__DETAIL__FULL_NAME_SUM_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "full_name_interfaces/srv/detail/full_name_sum_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace full_name_interfaces
{

namespace srv
{

namespace builder
{

class Init_FullNameSumService_Request_first_name
{
public:
  explicit Init_FullNameSumService_Request_first_name(::full_name_interfaces::srv::FullNameSumService_Request & msg)
  : msg_(msg)
  {}
  ::full_name_interfaces::srv::FullNameSumService_Request first_name(::full_name_interfaces::srv::FullNameSumService_Request::_first_name_type arg)
  {
    msg_.first_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::full_name_interfaces::srv::FullNameSumService_Request msg_;
};

class Init_FullNameSumService_Request_name
{
public:
  explicit Init_FullNameSumService_Request_name(::full_name_interfaces::srv::FullNameSumService_Request & msg)
  : msg_(msg)
  {}
  Init_FullNameSumService_Request_first_name name(::full_name_interfaces::srv::FullNameSumService_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_FullNameSumService_Request_first_name(msg_);
  }

private:
  ::full_name_interfaces::srv::FullNameSumService_Request msg_;
};

class Init_FullNameSumService_Request_last_name
{
public:
  Init_FullNameSumService_Request_last_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullNameSumService_Request_name last_name(::full_name_interfaces::srv::FullNameSumService_Request::_last_name_type arg)
  {
    msg_.last_name = std::move(arg);
    return Init_FullNameSumService_Request_name(msg_);
  }

private:
  ::full_name_interfaces::srv::FullNameSumService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::full_name_interfaces::srv::FullNameSumService_Request>()
{
  return full_name_interfaces::srv::builder::Init_FullNameSumService_Request_last_name();
}

}  // namespace full_name_interfaces


namespace full_name_interfaces
{

namespace srv
{

namespace builder
{

class Init_FullNameSumService_Response_full_name
{
public:
  Init_FullNameSumService_Response_full_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::full_name_interfaces::srv::FullNameSumService_Response full_name(::full_name_interfaces::srv::FullNameSumService_Response::_full_name_type arg)
  {
    msg_.full_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::full_name_interfaces::srv::FullNameSumService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::full_name_interfaces::srv::FullNameSumService_Response>()
{
  return full_name_interfaces::srv::builder::Init_FullNameSumService_Response_full_name();
}

}  // namespace full_name_interfaces

#endif  // FULL_NAME_INTERFACES__SRV__DETAIL__FULL_NAME_SUM_SERVICE__BUILDER_HPP_
