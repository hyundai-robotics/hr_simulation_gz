// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from api_msgs:srv/DateTime.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__DATE_TIME__TRAITS_HPP_
#define API_MSGS__SRV__DETAIL__DATE_TIME__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "api_msgs/srv/detail/date_time__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DateTime_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: year
  {
    out << "year: ";
    rosidl_generator_traits::value_to_yaml(msg.year, out);
    out << ", ";
  }

  // member: mon
  {
    out << "mon: ";
    rosidl_generator_traits::value_to_yaml(msg.mon, out);
    out << ", ";
  }

  // member: day
  {
    out << "day: ";
    rosidl_generator_traits::value_to_yaml(msg.day, out);
    out << ", ";
  }

  // member: hour
  {
    out << "hour: ";
    rosidl_generator_traits::value_to_yaml(msg.hour, out);
    out << ", ";
  }

  // member: min
  {
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << ", ";
  }

  // member: sec
  {
    out << "sec: ";
    rosidl_generator_traits::value_to_yaml(msg.sec, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DateTime_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: year
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "year: ";
    rosidl_generator_traits::value_to_yaml(msg.year, out);
    out << "\n";
  }

  // member: mon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mon: ";
    rosidl_generator_traits::value_to_yaml(msg.mon, out);
    out << "\n";
  }

  // member: day
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "day: ";
    rosidl_generator_traits::value_to_yaml(msg.day, out);
    out << "\n";
  }

  // member: hour
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hour: ";
    rosidl_generator_traits::value_to_yaml(msg.hour, out);
    out << "\n";
  }

  // member: min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << "\n";
  }

  // member: sec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sec: ";
    rosidl_generator_traits::value_to_yaml(msg.sec, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DateTime_Request & msg, bool use_flow_style = false)
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
  const api_msgs::srv::DateTime_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const api_msgs::srv::DateTime_Request & msg)
{
  return api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<api_msgs::srv::DateTime_Request>()
{
  return "api_msgs::srv::DateTime_Request";
}

template<>
inline const char * name<api_msgs::srv::DateTime_Request>()
{
  return "api_msgs/srv/DateTime_Request";
}

template<>
struct has_fixed_size<api_msgs::srv::DateTime_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<api_msgs::srv::DateTime_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<api_msgs::srv::DateTime_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace api_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const DateTime_Response & msg,
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
  const DateTime_Response & msg,
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

inline std::string to_yaml(const DateTime_Response & msg, bool use_flow_style = false)
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
  const api_msgs::srv::DateTime_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  api_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use api_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const api_msgs::srv::DateTime_Response & msg)
{
  return api_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<api_msgs::srv::DateTime_Response>()
{
  return "api_msgs::srv::DateTime_Response";
}

template<>
inline const char * name<api_msgs::srv::DateTime_Response>()
{
  return "api_msgs/srv/DateTime_Response";
}

template<>
struct has_fixed_size<api_msgs::srv::DateTime_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<api_msgs::srv::DateTime_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<api_msgs::srv::DateTime_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<api_msgs::srv::DateTime>()
{
  return "api_msgs::srv::DateTime";
}

template<>
inline const char * name<api_msgs::srv::DateTime>()
{
  return "api_msgs/srv/DateTime";
}

template<>
struct has_fixed_size<api_msgs::srv::DateTime>
  : std::integral_constant<
    bool,
    has_fixed_size<api_msgs::srv::DateTime_Request>::value &&
    has_fixed_size<api_msgs::srv::DateTime_Response>::value
  >
{
};

template<>
struct has_bounded_size<api_msgs::srv::DateTime>
  : std::integral_constant<
    bool,
    has_bounded_size<api_msgs::srv::DateTime_Request>::value &&
    has_bounded_size<api_msgs::srv::DateTime_Response>::value
  >
{
};

template<>
struct is_service<api_msgs::srv::DateTime>
  : std::true_type
{
};

template<>
struct is_service_request<api_msgs::srv::DateTime_Request>
  : std::true_type
{
};

template<>
struct is_service_response<api_msgs::srv::DateTime_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // API_MSGS__SRV__DETAIL__DATE_TIME__TRAITS_HPP_
