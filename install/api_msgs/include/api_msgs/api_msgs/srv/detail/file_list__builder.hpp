// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/FileList.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__FILE_LIST__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__FILE_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/file_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_FileList_Request_incl_dir
{
public:
  explicit Init_FileList_Request_incl_dir(::api_msgs::srv::FileList_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::FileList_Request incl_dir(::api_msgs::srv::FileList_Request::_incl_dir_type arg)
  {
    msg_.incl_dir = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::FileList_Request msg_;
};

class Init_FileList_Request_incl_file
{
public:
  explicit Init_FileList_Request_incl_file(::api_msgs::srv::FileList_Request & msg)
  : msg_(msg)
  {}
  Init_FileList_Request_incl_dir incl_file(::api_msgs::srv::FileList_Request::_incl_file_type arg)
  {
    msg_.incl_file = std::move(arg);
    return Init_FileList_Request_incl_dir(msg_);
  }

private:
  ::api_msgs::srv::FileList_Request msg_;
};

class Init_FileList_Request_path
{
public:
  Init_FileList_Request_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FileList_Request_incl_file path(::api_msgs::srv::FileList_Request::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_FileList_Request_incl_file(msg_);
  }

private:
  ::api_msgs::srv::FileList_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::FileList_Request>()
{
  return api_msgs::srv::builder::Init_FileList_Request_path();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_FileList_Response_success
{
public:
  explicit Init_FileList_Response_success(::api_msgs::srv::FileList_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::FileList_Response success(::api_msgs::srv::FileList_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::FileList_Response msg_;
};

class Init_FileList_Response_message
{
public:
  Init_FileList_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FileList_Response_success message(::api_msgs::srv::FileList_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_FileList_Response_success(msg_);
  }

private:
  ::api_msgs::srv::FileList_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::FileList_Response>()
{
  return api_msgs::srv::builder::Init_FileList_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__FILE_LIST__BUILDER_HPP_
