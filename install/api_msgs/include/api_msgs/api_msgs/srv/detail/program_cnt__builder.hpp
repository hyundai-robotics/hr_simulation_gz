// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/ProgramCnt.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__PROGRAM_CNT__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__PROGRAM_CNT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/program_cnt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_ProgramCnt_Request_ext_sel
{
public:
  explicit Init_ProgramCnt_Request_ext_sel(::api_msgs::srv::ProgramCnt_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::ProgramCnt_Request ext_sel(::api_msgs::srv::ProgramCnt_Request::_ext_sel_type arg)
  {
    msg_.ext_sel = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::ProgramCnt_Request msg_;
};

class Init_ProgramCnt_Request_fno
{
public:
  explicit Init_ProgramCnt_Request_fno(::api_msgs::srv::ProgramCnt_Request & msg)
  : msg_(msg)
  {}
  Init_ProgramCnt_Request_ext_sel fno(::api_msgs::srv::ProgramCnt_Request::_fno_type arg)
  {
    msg_.fno = std::move(arg);
    return Init_ProgramCnt_Request_ext_sel(msg_);
  }

private:
  ::api_msgs::srv::ProgramCnt_Request msg_;
};

class Init_ProgramCnt_Request_sno
{
public:
  explicit Init_ProgramCnt_Request_sno(::api_msgs::srv::ProgramCnt_Request & msg)
  : msg_(msg)
  {}
  Init_ProgramCnt_Request_fno sno(::api_msgs::srv::ProgramCnt_Request::_sno_type arg)
  {
    msg_.sno = std::move(arg);
    return Init_ProgramCnt_Request_fno(msg_);
  }

private:
  ::api_msgs::srv::ProgramCnt_Request msg_;
};

class Init_ProgramCnt_Request_pno
{
public:
  Init_ProgramCnt_Request_pno()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProgramCnt_Request_sno pno(::api_msgs::srv::ProgramCnt_Request::_pno_type arg)
  {
    msg_.pno = std::move(arg);
    return Init_ProgramCnt_Request_sno(msg_);
  }

private:
  ::api_msgs::srv::ProgramCnt_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::ProgramCnt_Request>()
{
  return api_msgs::srv::builder::Init_ProgramCnt_Request_pno();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_ProgramCnt_Response_success
{
public:
  explicit Init_ProgramCnt_Response_success(::api_msgs::srv::ProgramCnt_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::ProgramCnt_Response success(::api_msgs::srv::ProgramCnt_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::ProgramCnt_Response msg_;
};

class Init_ProgramCnt_Response_message
{
public:
  Init_ProgramCnt_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProgramCnt_Response_success message(::api_msgs::srv::ProgramCnt_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ProgramCnt_Response_success(msg_);
  }

private:
  ::api_msgs::srv::ProgramCnt_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::ProgramCnt_Response>()
{
  return api_msgs::srv::builder::Init_ProgramCnt_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__PROGRAM_CNT__BUILDER_HPP_
