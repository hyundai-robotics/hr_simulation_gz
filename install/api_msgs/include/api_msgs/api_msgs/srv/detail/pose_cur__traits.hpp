// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from api_msgs:srv/PoseCur.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__POSE_CUR__TRAITS_HPP_
#define API_MSGS__SRV__DETAIL__POSE_CUR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "api_msgs/srv/detail/pose_cur__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PoseCur_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_no
  {
    out << "task_no: ";
    rosidl_generator_traits::value_to_yaml(msg.task_no, out);
    out << ", ";
  }

  // member: crd
  {
    out << "crd: ";
    rosidl_generator_traits::value_to_yaml(msg.crd, out);
    out << ", ";
  }

  // member: ucrd_no
  {
    out << "ucrd_no: ";
    rosidl_generator_traits::value_to_yaml(msg.ucrd_no, out);
    out << ", ";
  }

  // member: mechinfo
  {
    out << "mechinfo: ";
    rosidl_generator_traits::value_to_yaml(msg.mechinfo, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PoseCur_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_no: ";
    rosidl_generator_traits::value_to_yaml(msg.task_no, out);
    out << "\n";
  }

  // member: crd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "crd: ";
    rosidl_generator_traits::value_to_yaml(msg.crd, out);
    out << "\n";
  }

  // member: ucrd_no
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ucrd_no: ";
    rosidl_generator_traits::value_to_yaml(msg.ucrd_no, out);
    out << "\n";
  }

  // member: mechinfo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mechinfo: ";
    rosidl_generator_traits::value_to_yaml(msg.mechinfo, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseCur_Request & msg, bool use_flow_style = false)
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
  const api_msgs::srv::PoseCur_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const api_msgs::srv::PoseCur_Request & msg)
{
  return api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<api_msgs::srv::PoseCur_Request>()
{
  return "api_msgs::srv::PoseCur_Request";
}

template<>
inline const char * name<api_msgs::srv::PoseCur_Request>()
{
  return "api_msgs/srv/PoseCur_Request";
}

template<>
struct has_fixed_size<api_msgs::srv::PoseCur_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<api_msgs::srv::PoseCur_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<api_msgs::srv::PoseCur_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const PoseCur_Response & msg,
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
  const PoseCur_Response & msg,
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

inline std::string to_yaml(const PoseCur_Response & msg, bool use_flow_style = false)
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
  const api_msgs::srv::PoseCur_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const api_msgs::srv::PoseCur_Response & msg)
{
  return api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<api_msgs::srv::PoseCur_Response>()
{
  return "api_msgs::srv::PoseCur_Response";
}

template<>
inline const char * name<api_msgs::srv::PoseCur_Response>()
{
  return "api_msgs/srv/PoseCur_Response";
}

template<>
struct has_fixed_size<api_msgs::srv::PoseCur_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<api_msgs::srv::PoseCur_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<api_msgs::srv::PoseCur_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<api_msgs::srv::PoseCur>()
{
  return "api_msgs::srv::PoseCur";
}

template<>
inline const char * name<api_msgs::srv::PoseCur>()
{
  return "api_msgs/srv/PoseCur";
}

template<>
struct has_fixed_size<api_msgs::srv::PoseCur>
  : std::integral_constant<
    bool,
    has_fixed_size<api_msgs::srv::PoseCur_Request>::value &&
    has_fixed_size<api_msgs::srv::PoseCur_Response>::value
  >
{
};

template<>
struct has_bounded_size<api_msgs::srv::PoseCur>
  : std::integral_constant<
    bool,
    has_bounded_size<api_msgs::srv::PoseCur_Request>::value &&
    has_bounded_size<api_msgs::srv::PoseCur_Response>::value
  >
{
};

template<>
struct is_service<api_msgs::srv::PoseCur>
  : std::true_type
{
};

template<>
struct is_service_request<api_msgs::srv::PoseCur_Request>
  : std::true_type
{
};

template<>
struct is_service_response<api_msgs::srv::PoseCur_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // API_MSGS__SRV__DETAIL__POSE_CUR__TRAITS_HPP_
