// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/ExecuteCmd.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__EXECUTE_CMD__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__EXECUTE_CMD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/execute_cmd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteCmd_Request_cmd_line
{
public:
  Init_ExecuteCmd_Request_cmd_line()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::api_msgs::srv::ExecuteCmd_Request cmd_line(::api_msgs::srv::ExecuteCmd_Request::_cmd_line_type arg)
  {
    msg_.cmd_line = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::ExecuteCmd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::ExecuteCmd_Request>()
{
  return api_msgs::srv::builder::Init_ExecuteCmd_Request_cmd_line();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteCmd_Response_success
{
public:
  explicit Init_ExecuteCmd_Response_success(::api_msgs::srv::ExecuteCmd_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::ExecuteCmd_Response success(::api_msgs::srv::ExecuteCmd_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::ExecuteCmd_Response msg_;
};

class Init_ExecuteCmd_Response_message
{
public:
  Init_ExecuteCmd_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteCmd_Response_success message(::api_msgs::srv::ExecuteCmd_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ExecuteCmd_Response_success(msg_);
  }

private:
  ::api_msgs::srv::ExecuteCmd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::ExecuteCmd_Response>()
{
  return api_msgs::srv::builder::Init_ExecuteCmd_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__EXECUTE_CMD__BUILDER_HPP_
