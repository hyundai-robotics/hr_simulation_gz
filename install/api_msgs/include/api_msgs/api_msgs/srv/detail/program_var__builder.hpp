// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/ProgramVar.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__PROGRAM_VAR__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__PROGRAM_VAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/program_var__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_ProgramVar_Request_save
{
public:
  explicit Init_ProgramVar_Request_save(::api_msgs::srv::ProgramVar_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::ProgramVar_Request save(::api_msgs::srv::ProgramVar_Request::_save_type arg)
  {
    msg_.save = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::ProgramVar_Request msg_;
};

class Init_ProgramVar_Request_expr
{
public:
  explicit Init_ProgramVar_Request_expr(::api_msgs::srv::ProgramVar_Request & msg)
  : msg_(msg)
  {}
  Init_ProgramVar_Request_save expr(::api_msgs::srv::ProgramVar_Request::_expr_type arg)
  {
    msg_.expr = std::move(arg);
    return Init_ProgramVar_Request_save(msg_);
  }

private:
  ::api_msgs::srv::ProgramVar_Request msg_;
};

class Init_ProgramVar_Request_scope
{
public:
  explicit Init_ProgramVar_Request_scope(::api_msgs::srv::ProgramVar_Request & msg)
  : msg_(msg)
  {}
  Init_ProgramVar_Request_expr scope(::api_msgs::srv::ProgramVar_Request::_scope_type arg)
  {
    msg_.scope = std::move(arg);
    return Init_ProgramVar_Request_expr(msg_);
  }

private:
  ::api_msgs::srv::ProgramVar_Request msg_;
};

class Init_ProgramVar_Request_name
{
public:
  Init_ProgramVar_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProgramVar_Request_scope name(::api_msgs::srv::ProgramVar_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ProgramVar_Request_scope(msg_);
  }

private:
  ::api_msgs::srv::ProgramVar_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::ProgramVar_Request>()
{
  return api_msgs::srv::builder::Init_ProgramVar_Request_name();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_ProgramVar_Response_success
{
public:
  explicit Init_ProgramVar_Response_success(::api_msgs::srv::ProgramVar_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::ProgramVar_Response success(::api_msgs::srv::ProgramVar_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::ProgramVar_Response msg_;
};

class Init_ProgramVar_Response_message
{
public:
  Init_ProgramVar_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProgramVar_Response_success message(::api_msgs::srv::ProgramVar_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ProgramVar_Response_success(msg_);
  }

private:
  ::api_msgs::srv::ProgramVar_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::ProgramVar_Response>()
{
  return api_msgs::srv::builder::Init_ProgramVar_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__PROGRAM_VAR__BUILDER_HPP_
