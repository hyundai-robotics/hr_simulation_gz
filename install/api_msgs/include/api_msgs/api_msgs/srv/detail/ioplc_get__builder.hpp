// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/IoplcGet.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__IOPLC_GET__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__IOPLC_GET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/ioplc_get__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_IoplcGet_Request_len
{
public:
  explicit Init_IoplcGet_Request_len(::api_msgs::srv::IoplcGet_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::IoplcGet_Request len(::api_msgs::srv::IoplcGet_Request::_len_type arg)
  {
    msg_.len = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::IoplcGet_Request msg_;
};

class Init_IoplcGet_Request_st
{
public:
  explicit Init_IoplcGet_Request_st(::api_msgs::srv::IoplcGet_Request & msg)
  : msg_(msg)
  {}
  Init_IoplcGet_Request_len st(::api_msgs::srv::IoplcGet_Request::_st_type arg)
  {
    msg_.st = std::move(arg);
    return Init_IoplcGet_Request_len(msg_);
  }

private:
  ::api_msgs::srv::IoplcGet_Request msg_;
};

class Init_IoplcGet_Request_relay_type
{
public:
  explicit Init_IoplcGet_Request_relay_type(::api_msgs::srv::IoplcGet_Request & msg)
  : msg_(msg)
  {}
  Init_IoplcGet_Request_st relay_type(::api_msgs::srv::IoplcGet_Request::_relay_type_type arg)
  {
    msg_.relay_type = std::move(arg);
    return Init_IoplcGet_Request_st(msg_);
  }

private:
  ::api_msgs::srv::IoplcGet_Request msg_;
};

class Init_IoplcGet_Request_obj_idx
{
public:
  explicit Init_IoplcGet_Request_obj_idx(::api_msgs::srv::IoplcGet_Request & msg)
  : msg_(msg)
  {}
  Init_IoplcGet_Request_relay_type obj_idx(::api_msgs::srv::IoplcGet_Request::_obj_idx_type arg)
  {
    msg_.obj_idx = std::move(arg);
    return Init_IoplcGet_Request_relay_type(msg_);
  }

private:
  ::api_msgs::srv::IoplcGet_Request msg_;
};

class Init_IoplcGet_Request_obj_type
{
public:
  Init_IoplcGet_Request_obj_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IoplcGet_Request_obj_idx obj_type(::api_msgs::srv::IoplcGet_Request::_obj_type_type arg)
  {
    msg_.obj_type = std::move(arg);
    return Init_IoplcGet_Request_obj_idx(msg_);
  }

private:
  ::api_msgs::srv::IoplcGet_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::IoplcGet_Request>()
{
  return api_msgs::srv::builder::Init_IoplcGet_Request_obj_type();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_IoplcGet_Response_success
{
public:
  explicit Init_IoplcGet_Response_success(::api_msgs::srv::IoplcGet_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::IoplcGet_Response success(::api_msgs::srv::IoplcGet_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::IoplcGet_Response msg_;
};

class Init_IoplcGet_Response_message
{
public:
  Init_IoplcGet_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IoplcGet_Response_success message(::api_msgs::srv::IoplcGet_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_IoplcGet_Response_success(msg_);
  }

private:
  ::api_msgs::srv::IoplcGet_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::IoplcGet_Response>()
{
  return api_msgs::srv::builder::Init_IoplcGet_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__IOPLC_GET__BUILDER_HPP_
