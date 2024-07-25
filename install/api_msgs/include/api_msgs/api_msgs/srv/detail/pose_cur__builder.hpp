// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/PoseCur.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__POSE_CUR__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__POSE_CUR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/pose_cur__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_PoseCur_Request_mechinfo
{
public:
  explicit Init_PoseCur_Request_mechinfo(::api_msgs::srv::PoseCur_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::PoseCur_Request mechinfo(::api_msgs::srv::PoseCur_Request::_mechinfo_type arg)
  {
    msg_.mechinfo = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::PoseCur_Request msg_;
};

class Init_PoseCur_Request_ucrd_no
{
public:
  explicit Init_PoseCur_Request_ucrd_no(::api_msgs::srv::PoseCur_Request & msg)
  : msg_(msg)
  {}
  Init_PoseCur_Request_mechinfo ucrd_no(::api_msgs::srv::PoseCur_Request::_ucrd_no_type arg)
  {
    msg_.ucrd_no = std::move(arg);
    return Init_PoseCur_Request_mechinfo(msg_);
  }

private:
  ::api_msgs::srv::PoseCur_Request msg_;
};

class Init_PoseCur_Request_crd
{
public:
  explicit Init_PoseCur_Request_crd(::api_msgs::srv::PoseCur_Request & msg)
  : msg_(msg)
  {}
  Init_PoseCur_Request_ucrd_no crd(::api_msgs::srv::PoseCur_Request::_crd_type arg)
  {
    msg_.crd = std::move(arg);
    return Init_PoseCur_Request_ucrd_no(msg_);
  }

private:
  ::api_msgs::srv::PoseCur_Request msg_;
};

class Init_PoseCur_Request_task_no
{
public:
  Init_PoseCur_Request_task_no()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseCur_Request_crd task_no(::api_msgs::srv::PoseCur_Request::_task_no_type arg)
  {
    msg_.task_no = std::move(arg);
    return Init_PoseCur_Request_crd(msg_);
  }

private:
  ::api_msgs::srv::PoseCur_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::PoseCur_Request>()
{
  return api_msgs::srv::builder::Init_PoseCur_Request_task_no();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_PoseCur_Response_success
{
public:
  explicit Init_PoseCur_Response_success(::api_msgs::srv::PoseCur_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::PoseCur_Response success(::api_msgs::srv::PoseCur_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::PoseCur_Response msg_;
};

class Init_PoseCur_Response_message
{
public:
  Init_PoseCur_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PoseCur_Response_success message(::api_msgs::srv::PoseCur_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_PoseCur_Response_success(msg_);
  }

private:
  ::api_msgs::srv::PoseCur_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::PoseCur_Response>()
{
  return api_msgs::srv::builder::Init_PoseCur_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__POSE_CUR__BUILDER_HPP_
