// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/LogManager.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__LOG_MANAGER__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__LOG_MANAGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/log_manager__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_LogManager_Request_ts_max
{
public:
  explicit Init_LogManager_Request_ts_max(::api_msgs::srv::LogManager_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::LogManager_Request ts_max(::api_msgs::srv::LogManager_Request::_ts_max_type arg)
  {
    msg_.ts_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::LogManager_Request msg_;
};

class Init_LogManager_Request_ts_min
{
public:
  explicit Init_LogManager_Request_ts_min(::api_msgs::srv::LogManager_Request & msg)
  : msg_(msg)
  {}
  Init_LogManager_Request_ts_max ts_min(::api_msgs::srv::LogManager_Request::_ts_min_type arg)
  {
    msg_.ts_min = std::move(arg);
    return Init_LogManager_Request_ts_max(msg_);
  }

private:
  ::api_msgs::srv::LogManager_Request msg_;
};

class Init_LogManager_Request_id_max
{
public:
  explicit Init_LogManager_Request_id_max(::api_msgs::srv::LogManager_Request & msg)
  : msg_(msg)
  {}
  Init_LogManager_Request_ts_min id_max(::api_msgs::srv::LogManager_Request::_id_max_type arg)
  {
    msg_.id_max = std::move(arg);
    return Init_LogManager_Request_ts_min(msg_);
  }

private:
  ::api_msgs::srv::LogManager_Request msg_;
};

class Init_LogManager_Request_id_min
{
public:
  explicit Init_LogManager_Request_id_min(::api_msgs::srv::LogManager_Request & msg)
  : msg_(msg)
  {}
  Init_LogManager_Request_id_max id_min(::api_msgs::srv::LogManager_Request::_id_min_type arg)
  {
    msg_.id_min = std::move(arg);
    return Init_LogManager_Request_id_max(msg_);
  }

private:
  ::api_msgs::srv::LogManager_Request msg_;
};

class Init_LogManager_Request_cat_p
{
public:
  explicit Init_LogManager_Request_cat_p(::api_msgs::srv::LogManager_Request & msg)
  : msg_(msg)
  {}
  Init_LogManager_Request_id_min cat_p(::api_msgs::srv::LogManager_Request::_cat_p_type arg)
  {
    msg_.cat_p = std::move(arg);
    return Init_LogManager_Request_id_min(msg_);
  }

private:
  ::api_msgs::srv::LogManager_Request msg_;
};

class Init_LogManager_Request_n_item
{
public:
  Init_LogManager_Request_n_item()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogManager_Request_cat_p n_item(::api_msgs::srv::LogManager_Request::_n_item_type arg)
  {
    msg_.n_item = std::move(arg);
    return Init_LogManager_Request_cat_p(msg_);
  }

private:
  ::api_msgs::srv::LogManager_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::LogManager_Request>()
{
  return api_msgs::srv::builder::Init_LogManager_Request_n_item();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_LogManager_Response_success
{
public:
  explicit Init_LogManager_Response_success(::api_msgs::srv::LogManager_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::LogManager_Response success(::api_msgs::srv::LogManager_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::LogManager_Response msg_;
};

class Init_LogManager_Response_message
{
public:
  Init_LogManager_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogManager_Response_success message(::api_msgs::srv::LogManager_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_LogManager_Response_success(msg_);
  }

private:
  ::api_msgs::srv::LogManager_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::LogManager_Response>()
{
  return api_msgs::srv::builder::Init_LogManager_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__LOG_MANAGER__BUILDER_HPP_
