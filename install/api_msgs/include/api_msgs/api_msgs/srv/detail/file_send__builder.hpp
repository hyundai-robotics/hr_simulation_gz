// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/FileSend.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__FILE_SEND__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__FILE_SEND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/file_send__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_FileSend_Request_source_file
{
public:
  explicit Init_FileSend_Request_source_file(::api_msgs::srv::FileSend_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::FileSend_Request source_file(::api_msgs::srv::FileSend_Request::_source_file_type arg)
  {
    msg_.source_file = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::FileSend_Request msg_;
};

class Init_FileSend_Request_target_file
{
public:
  Init_FileSend_Request_target_file()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FileSend_Request_source_file target_file(::api_msgs::srv::FileSend_Request::_target_file_type arg)
  {
    msg_.target_file = std::move(arg);
    return Init_FileSend_Request_source_file(msg_);
  }

private:
  ::api_msgs::srv::FileSend_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::FileSend_Request>()
{
  return api_msgs::srv::builder::Init_FileSend_Request_target_file();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_FileSend_Response_success
{
public:
  explicit Init_FileSend_Response_success(::api_msgs::srv::FileSend_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::FileSend_Response success(::api_msgs::srv::FileSend_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::FileSend_Response msg_;
};

class Init_FileSend_Response_message
{
public:
  Init_FileSend_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FileSend_Response_success message(::api_msgs::srv::FileSend_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_FileSend_Response_success(msg_);
  }

private:
  ::api_msgs::srv::FileSend_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::FileSend_Response>()
{
  return api_msgs::srv::builder::Init_FileSend_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__FILE_SEND__BUILDER_HPP_
