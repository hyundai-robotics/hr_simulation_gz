// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from api_msgs:srv/FileSend.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__FILE_SEND__TRAITS_HPP_
#define API_MSGS__SRV__DETAIL__FILE_SEND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "api_msgs/srv/detail/file_send__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FileSend_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: target_file
  {
    out << "target_file: ";
    rosidl_generator_traits::value_to_yaml(msg.target_file, out);
    out << ", ";
  }

  // member: source_file
  {
    out << "source_file: ";
    rosidl_generator_traits::value_to_yaml(msg.source_file, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FileSend_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: target_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_file: ";
    rosidl_generator_traits::value_to_yaml(msg.target_file, out);
    out << "\n";
  }

  // member: source_file
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_file: ";
    rosidl_generator_traits::value_to_yaml(msg.source_file, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FileSend_Request & msg, bool use_flow_style = false)
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
  const api_msgs::srv::FileSend_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const api_msgs::srv::FileSend_Request & msg)
{
  return api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<api_msgs::srv::FileSend_Request>()
{
  return "api_msgs::srv::FileSend_Request";
}

template<>
inline const char * name<api_msgs::srv::FileSend_Request>()
{
  return "api_msgs/srv/FileSend_Request";
}

template<>
struct has_fixed_size<api_msgs::srv::FileSend_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<api_msgs::srv::FileSend_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<api_msgs::srv::FileSend_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const FileSend_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
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
  const FileSend_Response & msg,
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

inline std::string to_yaml(const FileSend_Response & msg, bool use_flow_style = false)
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
  const api_msgs::srv::FileSend_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const api_msgs::srv::FileSend_Response & msg)
{
  return api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<api_msgs::srv::FileSend_Response>()
{
  return "api_msgs::srv::FileSend_Response";
}

template<>
inline const char * name<api_msgs::srv::FileSend_Response>()
{
  return "api_msgs/srv/FileSend_Response";
}

template<>
struct has_fixed_size<api_msgs::srv::FileSend_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<api_msgs::srv::FileSend_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<api_msgs::srv::FileSend_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<api_msgs::srv::FileSend>()
{
  return "api_msgs::srv::FileSend";
}

template<>
inline const char * name<api_msgs::srv::FileSend>()
{
  return "api_msgs/srv/FileSend";
}

template<>
struct has_fixed_size<api_msgs::srv::FileSend>
  : std::integral_constant<
    bool,
    has_fixed_size<api_msgs::srv::FileSend_Request>::value &&
    has_fixed_size<api_msgs::srv::FileSend_Response>::value
  >
{
};

template<>
struct has_bounded_size<api_msgs::srv::FileSend>
  : std::integral_constant<
    bool,
    has_bounded_size<api_msgs::srv::FileSend_Request>::value &&
    has_bounded_size<api_msgs::srv::FileSend_Response>::value
  >
{
};

template<>
struct is_service<api_msgs::srv::FileSend>
  : std::true_type
{
};

template<>
struct is_service_request<api_msgs::srv::FileSend_Request>
  : std::true_type
{
};

template<>
struct is_service_response<api_msgs::srv::FileSend_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // API_MSGS__SRV__DETAIL__FILE_SEND__TRAITS_HPP_
