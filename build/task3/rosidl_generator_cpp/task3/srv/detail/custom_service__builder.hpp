// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from task3:srv/CustomService.idl
// generated code does not contain a copyright notice

#ifndef TASK3__SRV__DETAIL__CUSTOM_SERVICE__BUILDER_HPP_
#define TASK3__SRV__DETAIL__CUSTOM_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "task3/srv/detail/custom_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace task3
{

namespace srv
{

namespace builder
{

class Init_CustomService_Request_request
{
public:
  Init_CustomService_Request_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task3::srv::CustomService_Request request(::task3::srv::CustomService_Request::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task3::srv::CustomService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task3::srv::CustomService_Request>()
{
  return task3::srv::builder::Init_CustomService_Request_request();
}

}  // namespace task3


namespace task3
{

namespace srv
{

namespace builder
{

class Init_CustomService_Response_response
{
public:
  Init_CustomService_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::task3::srv::CustomService_Response response(::task3::srv::CustomService_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::task3::srv::CustomService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::task3::srv::CustomService_Response>()
{
  return task3::srv::builder::Init_CustomService_Response_response();
}

}  // namespace task3

#endif  // TASK3__SRV__DETAIL__CUSTOM_SERVICE__BUILDER_HPP_
