// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/OpCnd.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__OP_CND__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__OP_CND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/op_cnd__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_OpCnd_Request_ucrd_num
{
public:
  explicit Init_OpCnd_Request_ucrd_num(::api_msgs::srv::OpCnd_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::OpCnd_Request ucrd_num(::api_msgs::srv::OpCnd_Request::_ucrd_num_type arg)
  {
    msg_.ucrd_num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::OpCnd_Request msg_;
};

class Init_OpCnd_Request_step_goback_max_spd
{
public:
  explicit Init_OpCnd_Request_step_goback_max_spd(::api_msgs::srv::OpCnd_Request & msg)
  : msg_(msg)
  {}
  Init_OpCnd_Request_ucrd_num step_goback_max_spd(::api_msgs::srv::OpCnd_Request::_step_goback_max_spd_type arg)
  {
    msg_.step_goback_max_spd = std::move(arg);
    return Init_OpCnd_Request_ucrd_num(msg_);
  }

private:
  ::api_msgs::srv::OpCnd_Request msg_;
};

class Init_OpCnd_Request_playback_mode
{
public:
  Init_OpCnd_Request_playback_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpCnd_Request_step_goback_max_spd playback_mode(::api_msgs::srv::OpCnd_Request::_playback_mode_type arg)
  {
    msg_.playback_mode = std::move(arg);
    return Init_OpCnd_Request_step_goback_max_spd(msg_);
  }

private:
  ::api_msgs::srv::OpCnd_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::OpCnd_Request>()
{
  return api_msgs::srv::builder::Init_OpCnd_Request_playback_mode();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_OpCnd_Response_success
{
public:
  explicit Init_OpCnd_Response_success(::api_msgs::srv::OpCnd_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::OpCnd_Response success(::api_msgs::srv::OpCnd_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::OpCnd_Response msg_;
};

class Init_OpCnd_Response_message
{
public:
  Init_OpCnd_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpCnd_Response_success message(::api_msgs::srv::OpCnd_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_OpCnd_Response_success(msg_);
  }

private:
  ::api_msgs::srv::OpCnd_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::OpCnd_Response>()
{
  return api_msgs::srv::builder::Init_OpCnd_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__OP_CND__BUILDER_HPP_
