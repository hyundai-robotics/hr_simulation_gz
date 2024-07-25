// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/FileRename.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__FILE_RENAME__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__FILE_RENAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/file_rename__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_FileRename_Request_pathname_to
{
public:
  explicit Init_FileRename_Request_pathname_to(::api_msgs::srv::FileRename_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::FileRename_Request pathname_to(::api_msgs::srv::FileRename_Request::_pathname_to_type arg)
  {
    msg_.pathname_to = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::FileRename_Request msg_;
};

class Init_FileRename_Request_pathname_from
{
public:
  Init_FileRename_Request_pathname_from()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FileRename_Request_pathname_to pathname_from(::api_msgs::srv::FileRename_Request::_pathname_from_type arg)
  {
    msg_.pathname_from = std::move(arg);
    return Init_FileRename_Request_pathname_to(msg_);
  }

private:
  ::api_msgs::srv::FileRename_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::FileRename_Request>()
{
  return api_msgs::srv::builder::Init_FileRename_Request_pathname_from();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_FileRename_Response_success
{
public:
  explicit Init_FileRename_Response_success(::api_msgs::srv::FileRename_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::FileRename_Response success(::api_msgs::srv::FileRename_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::FileRename_Response msg_;
};

class Init_FileRename_Response_message
{
public:
  Init_FileRename_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FileRename_Response_success message(::api_msgs::srv::FileRename_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_FileRename_Response_success(msg_);
  }

private:
  ::api_msgs::srv::FileRename_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::FileRename_Response>()
{
  return api_msgs::srv::builder::Init_FileRename_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__FILE_RENAME__BUILDER_HPP_
