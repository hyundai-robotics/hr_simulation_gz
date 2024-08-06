// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/Emergency.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__EMERGENCY__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__EMERGENCY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/emergency__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_Emergency_Request_category
{
public:
  explicit Init_Emergency_Request_category(::api_msgs::srv::Emergency_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::Emergency_Request category(::api_msgs::srv::Emergency_Request::_category_type arg)
  {
    msg_.category = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::Emergency_Request msg_;
};

class Init_Emergency_Request_stop_at_corner
{
public:
  explicit Init_Emergency_Request_stop_at_corner(::api_msgs::srv::Emergency_Request & msg)
  : msg_(msg)
  {}
  Init_Emergency_Request_category stop_at_corner(::api_msgs::srv::Emergency_Request::_stop_at_corner_type arg)
  {
    msg_.stop_at_corner = std::move(arg);
    return Init_Emergency_Request_category(msg_);
  }

private:
  ::api_msgs::srv::Emergency_Request msg_;
};

class Init_Emergency_Request_stop_at
{
public:
  explicit Init_Emergency_Request_stop_at(::api_msgs::srv::Emergency_Request & msg)
  : msg_(msg)
  {}
  Init_Emergency_Request_stop_at_corner stop_at(::api_msgs::srv::Emergency_Request::_stop_at_type arg)
  {
    msg_.stop_at = std::move(arg);
    return Init_Emergency_Request_stop_at_corner(msg_);
  }

private:
  ::api_msgs::srv::Emergency_Request msg_;
};

class Init_Emergency_Request_step_no
{
public:
  Init_Emergency_Request_step_no()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Emergency_Request_stop_at step_no(::api_msgs::srv::Emergency_Request::_step_no_type arg)
  {
    msg_.step_no = std::move(arg);
    return Init_Emergency_Request_stop_at(msg_);
  }

private:
  ::api_msgs::srv::Emergency_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::Emergency_Request>()
{
  return api_msgs::srv::builder::Init_Emergency_Request_step_no();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_Emergency_Response_success
{
public:
  explicit Init_Emergency_Response_success(::api_msgs::srv::Emergency_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::Emergency_Response success(::api_msgs::srv::Emergency_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::Emergency_Response msg_;
};

class Init_Emergency_Response_message
{
public:
  Init_Emergency_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Emergency_Response_success message(::api_msgs::srv::Emergency_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_Emergency_Response_success(msg_);
  }

private:
  ::api_msgs::srv::Emergency_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::Emergency_Response>()
{
  return api_msgs::srv::builder::Init_Emergency_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__EMERGENCY__BUILDER_HPP_
