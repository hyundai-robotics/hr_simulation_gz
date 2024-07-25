// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/DateTime.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__DATE_TIME__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__DATE_TIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/date_time__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_DateTime_Request_sec
{
public:
  explicit Init_DateTime_Request_sec(::api_msgs::srv::DateTime_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::DateTime_Request sec(::api_msgs::srv::DateTime_Request::_sec_type arg)
  {
    msg_.sec = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::DateTime_Request msg_;
};

class Init_DateTime_Request_min
{
public:
  explicit Init_DateTime_Request_min(::api_msgs::srv::DateTime_Request & msg)
  : msg_(msg)
  {}
  Init_DateTime_Request_sec min(::api_msgs::srv::DateTime_Request::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_DateTime_Request_sec(msg_);
  }

private:
  ::api_msgs::srv::DateTime_Request msg_;
};

class Init_DateTime_Request_hour
{
public:
  explicit Init_DateTime_Request_hour(::api_msgs::srv::DateTime_Request & msg)
  : msg_(msg)
  {}
  Init_DateTime_Request_min hour(::api_msgs::srv::DateTime_Request::_hour_type arg)
  {
    msg_.hour = std::move(arg);
    return Init_DateTime_Request_min(msg_);
  }

private:
  ::api_msgs::srv::DateTime_Request msg_;
};

class Init_DateTime_Request_day
{
public:
  explicit Init_DateTime_Request_day(::api_msgs::srv::DateTime_Request & msg)
  : msg_(msg)
  {}
  Init_DateTime_Request_hour day(::api_msgs::srv::DateTime_Request::_day_type arg)
  {
    msg_.day = std::move(arg);
    return Init_DateTime_Request_hour(msg_);
  }

private:
  ::api_msgs::srv::DateTime_Request msg_;
};

class Init_DateTime_Request_mon
{
public:
  explicit Init_DateTime_Request_mon(::api_msgs::srv::DateTime_Request & msg)
  : msg_(msg)
  {}
  Init_DateTime_Request_day mon(::api_msgs::srv::DateTime_Request::_mon_type arg)
  {
    msg_.mon = std::move(arg);
    return Init_DateTime_Request_day(msg_);
  }

private:
  ::api_msgs::srv::DateTime_Request msg_;
};

class Init_DateTime_Request_year
{
public:
  Init_DateTime_Request_year()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DateTime_Request_mon year(::api_msgs::srv::DateTime_Request::_year_type arg)
  {
    msg_.year = std::move(arg);
    return Init_DateTime_Request_mon(msg_);
  }

private:
  ::api_msgs::srv::DateTime_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::DateTime_Request>()
{
  return api_msgs::srv::builder::Init_DateTime_Request_year();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_DateTime_Response_success
{
public:
  explicit Init_DateTime_Response_success(::api_msgs::srv::DateTime_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::DateTime_Response success(::api_msgs::srv::DateTime_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::DateTime_Response msg_;
};

class Init_DateTime_Response_message
{
public:
  Init_DateTime_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DateTime_Response_success message(::api_msgs::srv::DateTime_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_DateTime_Response_success(msg_);
  }

private:
  ::api_msgs::srv::DateTime_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::DateTime_Response>()
{
  return api_msgs::srv::builder::Init_DateTime_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__DATE_TIME__BUILDER_HPP_
