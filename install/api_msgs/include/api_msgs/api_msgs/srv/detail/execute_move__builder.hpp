// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/ExecuteMove.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__EXECUTE_MOVE__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__EXECUTE_MOVE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/execute_move__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteMove_Request_stmt
{
public:
  explicit Init_ExecuteMove_Request_stmt(::api_msgs::srv::ExecuteMove_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::ExecuteMove_Request stmt(::api_msgs::srv::ExecuteMove_Request::_stmt_type arg)
  {
    msg_.stmt = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::ExecuteMove_Request msg_;
};

class Init_ExecuteMove_Request_task_no
{
public:
  Init_ExecuteMove_Request_task_no()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMove_Request_stmt task_no(::api_msgs::srv::ExecuteMove_Request::_task_no_type arg)
  {
    msg_.task_no = std::move(arg);
    return Init_ExecuteMove_Request_stmt(msg_);
  }

private:
  ::api_msgs::srv::ExecuteMove_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::ExecuteMove_Request>()
{
  return api_msgs::srv::builder::Init_ExecuteMove_Request_task_no();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_ExecuteMove_Response_success
{
public:
  explicit Init_ExecuteMove_Response_success(::api_msgs::srv::ExecuteMove_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::ExecuteMove_Response success(::api_msgs::srv::ExecuteMove_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::ExecuteMove_Response msg_;
};

class Init_ExecuteMove_Response_message
{
public:
  Init_ExecuteMove_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMove_Response_success message(::api_msgs::srv::ExecuteMove_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ExecuteMove_Response_success(msg_);
  }

private:
  ::api_msgs::srv::ExecuteMove_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::ExecuteMove_Response>()
{
  return api_msgs::srv::builder::Init_ExecuteMove_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__EXECUTE_MOVE__BUILDER_HPP_
