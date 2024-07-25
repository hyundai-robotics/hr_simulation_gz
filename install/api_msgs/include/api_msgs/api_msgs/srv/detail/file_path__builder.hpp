// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/FilePath.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__FILE_PATH__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__FILE_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/file_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_FilePath_Request_path
{
public:
  Init_FilePath_Request_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::api_msgs::srv::FilePath_Request path(::api_msgs::srv::FilePath_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::FilePath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::FilePath_Request>()
{
  return api_msgs::srv::builder::Init_FilePath_Request_path();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_FilePath_Response_success
{
public:
  explicit Init_FilePath_Response_success(::api_msgs::srv::FilePath_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::FilePath_Response success(::api_msgs::srv::FilePath_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::FilePath_Response msg_;
};

class Init_FilePath_Response_message
{
public:
  Init_FilePath_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FilePath_Response_success message(::api_msgs::srv::FilePath_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_FilePath_Response_success(msg_);
  }

private:
  ::api_msgs::srv::FilePath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::FilePath_Response>()
{
  return api_msgs::srv::builder::Init_FilePath_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__FILE_PATH__BUILDER_HPP_
