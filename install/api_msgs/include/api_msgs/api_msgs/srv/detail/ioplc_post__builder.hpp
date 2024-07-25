// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/IoplcPost.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__IOPLC_POST__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__IOPLC_POST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/ioplc_post__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_IoplcPost_Request_value
{
public:
  explicit Init_IoplcPost_Request_value(::api_msgs::srv::IoplcPost_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::IoplcPost_Request value(::api_msgs::srv::IoplcPost_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::IoplcPost_Request msg_;
};

class Init_IoplcPost_Request_name
{
public:
  Init_IoplcPost_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IoplcPost_Request_value name(::api_msgs::srv::IoplcPost_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_IoplcPost_Request_value(msg_);
  }

private:
  ::api_msgs::srv::IoplcPost_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::IoplcPost_Request>()
{
  return api_msgs::srv::builder::Init_IoplcPost_Request_name();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_IoplcPost_Response_success
{
public:
  explicit Init_IoplcPost_Response_success(::api_msgs::srv::IoplcPost_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::IoplcPost_Response success(::api_msgs::srv::IoplcPost_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::IoplcPost_Response msg_;
};

class Init_IoplcPost_Response_val
{
public:
  explicit Init_IoplcPost_Response_val(::api_msgs::srv::IoplcPost_Response & msg)
  : msg_(msg)
  {}
  Init_IoplcPost_Response_success val(::api_msgs::srv::IoplcPost_Response::_val_type arg)
  {
    msg_.val = std::move(arg);
    return Init_IoplcPost_Response_success(msg_);
  }

private:
  ::api_msgs::srv::IoplcPost_Response msg_;
};

class Init_IoplcPost_Response_message
{
public:
  Init_IoplcPost_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IoplcPost_Response_val message(::api_msgs::srv::IoplcPost_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_IoplcPost_Response_val(msg_);
  }

private:
  ::api_msgs::srv::IoplcPost_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::IoplcPost_Response>()
{
  return api_msgs::srv::builder::Init_IoplcPost_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__IOPLC_POST__BUILDER_HPP_
