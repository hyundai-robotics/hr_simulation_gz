// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from api_msgs:srv/ProgramVar.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__PROGRAM_VAR__TRAITS_HPP_
#define API_MSGS__SRV__DETAIL__PROGRAM_VAR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "api_msgs/srv/detail/program_var__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ProgramVar_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: scope
  {
    out << "scope: ";
    rosidl_generator_traits::value_to_yaml(msg.scope, out);
    out << ", ";
  }

  // member: expr
  {
    out << "expr: ";
    rosidl_generator_traits::value_to_yaml(msg.expr, out);
    out << ", ";
  }

  // member: save
  {
    out << "save: ";
    rosidl_generator_traits::value_to_yaml(msg.save, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProgramVar_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: scope
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scope: ";
    rosidl_generator_traits::value_to_yaml(msg.scope, out);
    out << "\n";
  }

  // member: expr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expr: ";
    rosidl_generator_traits::value_to_yaml(msg.expr, out);
    out << "\n";
  }

  // member: save
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "save: ";
    rosidl_generator_traits::value_to_yaml(msg.save, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProgramVar_Request & msg, bool use_flow_style = false)
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
  const api_msgs::srv::ProgramVar_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const api_msgs::srv::ProgramVar_Request & msg)
{
  return api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<api_msgs::srv::ProgramVar_Request>()
{
  return "api_msgs::srv::ProgramVar_Request";
}

template<>
inline const char * name<api_msgs::srv::ProgramVar_Request>()
{
  return "api_msgs/srv/ProgramVar_Request";
}

template<>
struct has_fixed_size<api_msgs::srv::ProgramVar_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<api_msgs::srv::ProgramVar_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<api_msgs::srv::ProgramVar_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ProgramVar_Response & msg,
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
  const ProgramVar_Response & msg,
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

inline std::string to_yaml(const ProgramVar_Response & msg, bool use_flow_style = false)
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
  const api_msgs::srv::ProgramVar_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const api_msgs::srv::ProgramVar_Response & msg)
{
  return api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<api_msgs::srv::ProgramVar_Response>()
{
  return "api_msgs::srv::ProgramVar_Response";
}

template<>
inline const char * name<api_msgs::srv::ProgramVar_Response>()
{
  return "api_msgs/srv/ProgramVar_Response";
}

template<>
struct has_fixed_size<api_msgs::srv::ProgramVar_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<api_msgs::srv::ProgramVar_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<api_msgs::srv::ProgramVar_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<api_msgs::srv::ProgramVar>()
{
  return "api_msgs::srv::ProgramVar";
}

template<>
inline const char * name<api_msgs::srv::ProgramVar>()
{
  return "api_msgs/srv/ProgramVar";
}

template<>
struct has_fixed_size<api_msgs::srv::ProgramVar>
  : std::integral_constant<
    bool,
    has_fixed_size<api_msgs::srv::ProgramVar_Request>::value &&
    has_fixed_size<api_msgs::srv::ProgramVar_Response>::value
  >
{
};

template<>
struct has_bounded_size<api_msgs::srv::ProgramVar>
  : std::integral_constant<
    bool,
    has_bounded_size<api_msgs::srv::ProgramVar_Request>::value &&
    has_bounded_size<api_msgs::srv::ProgramVar_Response>::value
  >
{
};

template<>
struct is_service<api_msgs::srv::ProgramVar>
  : std::true_type
{
};

template<>
struct is_service_request<api_msgs::srv::ProgramVar_Request>
  : std::true_type
{
};

template<>
struct is_service_response<api_msgs::srv::ProgramVar_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // API_MSGS__SRV__DETAIL__PROGRAM_VAR__TRAITS_HPP_
