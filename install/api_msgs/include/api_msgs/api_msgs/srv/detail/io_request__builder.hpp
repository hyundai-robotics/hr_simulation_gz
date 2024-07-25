// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from api_msgs:srv/IoRequest.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__IO_REQUEST__BUILDER_HPP_
#define API_MSGS__SRV__DETAIL__IO_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "api_msgs/srv/detail/io_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_IoRequest_Request_val
{
public:
  explicit Init_IoRequest_Request_val(::api_msgs::srv::IoRequest_Request & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::IoRequest_Request val(::api_msgs::srv::IoRequest_Request::_val_type arg)
  {
    msg_.val = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::IoRequest_Request msg_;
};

class Init_IoRequest_Request_sig_no
{
public:
  explicit Init_IoRequest_Request_sig_no(::api_msgs::srv::IoRequest_Request & msg)
  : msg_(msg)
  {}
  Init_IoRequest_Request_val sig_no(::api_msgs::srv::IoRequest_Request::_sig_no_type arg)
  {
    msg_.sig_no = std::move(arg);
    return Init_IoRequest_Request_val(msg_);
  }

private:
  ::api_msgs::srv::IoRequest_Request msg_;
};

class Init_IoRequest_Request_blk_no
{
public:
  explicit Init_IoRequest_Request_blk_no(::api_msgs::srv::IoRequest_Request & msg)
  : msg_(msg)
  {}
  Init_IoRequest_Request_sig_no blk_no(::api_msgs::srv::IoRequest_Request::_blk_no_type arg)
  {
    msg_.blk_no = std::move(arg);
    return Init_IoRequest_Request_sig_no(msg_);
  }

private:
  ::api_msgs::srv::IoRequest_Request msg_;
};

class Init_IoRequest_Request_type
{
public:
  Init_IoRequest_Request_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IoRequest_Request_blk_no type(::api_msgs::srv::IoRequest_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_IoRequest_Request_blk_no(msg_);
  }

private:
  ::api_msgs::srv::IoRequest_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::IoRequest_Request>()
{
  return api_msgs::srv::builder::Init_IoRequest_Request_type();
}

}  // namespace api_msgs


namespace api_msgs
{

namespace srv
{

namespace builder
{

class Init_IoRequest_Response_success
{
public:
  explicit Init_IoRequest_Response_success(::api_msgs::srv::IoRequest_Response & msg)
  : msg_(msg)
  {}
  ::api_msgs::srv::IoRequest_Response success(::api_msgs::srv::IoRequest_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::api_msgs::srv::IoRequest_Response msg_;
};

class Init_IoRequest_Response_val
{
public:
  explicit Init_IoRequest_Response_val(::api_msgs::srv::IoRequest_Response & msg)
  : msg_(msg)
  {}
  Init_IoRequest_Response_success val(::api_msgs::srv::IoRequest_Response::_val_type arg)
  {
    msg_.val = std::move(arg);
    return Init_IoRequest_Response_success(msg_);
  }

private:
  ::api_msgs::srv::IoRequest_Response msg_;
};

class Init_IoRequest_Response_message
{
public:
  Init_IoRequest_Response_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IoRequest_Response_val message(::api_msgs::srv::IoRequest_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_IoRequest_Response_val(msg_);
  }

private:
  ::api_msgs::srv::IoRequest_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::api_msgs::srv::IoRequest_Response>()
{
  return api_msgs::srv::builder::Init_IoRequest_Response_message();
}

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__IO_REQUEST__BUILDER_HPP_
