// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from api_msgs:srv/IoRequest.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__IO_REQUEST__TRAITS_HPP_
#define API_MSGS__SRV__DETAIL__IO_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "api_msgs/srv/detail/io_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IoRequest_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: blk_no
  {
    out << "blk_no: ";
    rosidl_generator_traits::value_to_yaml(msg.blk_no, out);
    out << ", ";
  }

  // member: sig_no
  {
    out << "sig_no: ";
    rosidl_generator_traits::value_to_yaml(msg.sig_no, out);
    out << ", ";
  }

  // member: val
  {
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IoRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: blk_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "blk_no: ";
    rosidl_generator_traits::value_to_yaml(msg.blk_no, out);
    out << "\n";
  }

  // member: sig_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sig_no: ";
    rosidl_generator_traits::value_to_yaml(msg.sig_no, out);
    out << "\n";
  }

  // member: val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IoRequest_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use api_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const api_msgs::srv::IoRequest_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const api_msgs::srv::IoRequest_Request & msg)
{
  return api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<api_msgs::srv::IoRequest_Request>()
{
  return "api_msgs::srv::IoRequest_Request";
}

template<>
inline const char * name<api_msgs::srv::IoRequest_Request>()
{
  return "api_msgs/srv/IoRequest_Request";
}

template<>
struct has_fixed_size<api_msgs::srv::IoRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<api_msgs::srv::IoRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<api_msgs::srv::IoRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const IoRequest_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: val
  {
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IoRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "val: ";
    rosidl_generator_traits::value_to_yaml(msg.val, out);
    out << "\n";
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IoRequest_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace api_msgs

namespace rosidl_generator_traits
{

[[deprecated("use api_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const api_msgs::srv::IoRequest_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const api_msgs::srv::IoRequest_Response & msg)
{
  return api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<api_msgs::srv::IoRequest_Response>()
{
  return "api_msgs::srv::IoRequest_Response";
}

template<>
inline const char * name<api_msgs::srv::IoRequest_Response>()
{
  return "api_msgs/srv/IoRequest_Response";
}

template<>
struct has_fixed_size<api_msgs::srv::IoRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<api_msgs::srv::IoRequest_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<api_msgs::srv::IoRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<api_msgs::srv::IoRequest>()
{
  return "api_msgs::srv::IoRequest";
}

template<>
inline const char * name<api_msgs::srv::IoRequest>()
{
  return "api_msgs/srv/IoRequest";
}

template<>
struct has_fixed_size<api_msgs::srv::IoRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<api_msgs::srv::IoRequest_Request>::value &&
    has_fixed_size<api_msgs::srv::IoRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<api_msgs::srv::IoRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<api_msgs::srv::IoRequest_Request>::value &&
    has_bounded_size<api_msgs::srv::IoRequest_Response>::value
  >
{
};

template<>
struct is_service<api_msgs::srv::IoRequest>
  : std::true_type
{
};

template<>
struct is_service_request<api_msgs::srv::IoRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<api_msgs::srv::IoRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // API_MSGS__SRV__DETAIL__IO_REQUEST__TRAITS_HPP_
