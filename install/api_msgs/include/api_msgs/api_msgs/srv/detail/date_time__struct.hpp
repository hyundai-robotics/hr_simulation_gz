// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from api_msgs:srv/DateTime.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__DATE_TIME__STRUCT_HPP_
#define API_MSGS__SRV__DETAIL__DATE_TIME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__DateTime_Request __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__DateTime_Request __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DateTime_Request_
{
  using Type = DateTime_Request_<ContainerAllocator>;

  explicit DateTime_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->year = 0l;
      this->mon = 0l;
      this->day = 0l;
      this->hour = 0l;
      this->min = 0l;
      this->sec = 0l;
    }
  }

  explicit DateTime_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->year = 0l;
      this->mon = 0l;
      this->day = 0l;
      this->hour = 0l;
      this->min = 0l;
      this->sec = 0l;
    }
  }

  // field types and members
  using _year_type =
    int32_t;
  _year_type year;
  using _mon_type =
    int32_t;
  _mon_type mon;
  using _day_type =
    int32_t;
  _day_type day;
  using _hour_type =
    int32_t;
  _hour_type hour;
  using _min_type =
    int32_t;
  _min_type min;
  using _sec_type =
    int32_t;
  _sec_type sec;

  // setters for named parameter idiom
  Type & set__year(
    const int32_t & _arg)
  {
    this->year = _arg;
    return *this;
  }
  Type & set__mon(
    const int32_t & _arg)
  {
    this->mon = _arg;
    return *this;
  }
  Type & set__day(
    const int32_t & _arg)
  {
    this->day = _arg;
    return *this;
  }
  Type & set__hour(
    const int32_t & _arg)
  {
    this->hour = _arg;
    return *this;
  }
  Type & set__min(
    const int32_t & _arg)
  {
    this->min = _arg;
    return *this;
  }
  Type & set__sec(
    const int32_t & _arg)
  {
    this->sec = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    api_msgs::srv::DateTime_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::DateTime_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::DateTime_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::DateTime_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::DateTime_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::DateTime_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::DateTime_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::DateTime_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::DateTime_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::DateTime_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__DateTime_Request
    std::shared_ptr<api_msgs::srv::DateTime_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__DateTime_Request
    std::shared_ptr<api_msgs::srv::DateTime_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DateTime_Request_ & other) const
  {
    if (this->year != other.year) {
      return false;
    }
    if (this->mon != other.mon) {
      return false;
    }
    if (this->day != other.day) {
      return false;
    }
    if (this->hour != other.hour) {
      return false;
    }
    if (this->min != other.min) {
      return false;
    }
    if (this->sec != other.sec) {
      return false;
    }
    return true;
  }
  bool operator!=(const DateTime_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DateTime_Request_

// alias to use template instance with default allocator
using DateTime_Request =
  api_msgs::srv::DateTime_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__DateTime_Response __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__DateTime_Response __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct DateTime_Response_
{
  using Type = DateTime_Response_<ContainerAllocator>;

  explicit DateTime_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  explicit DateTime_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    api_msgs::srv::DateTime_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::DateTime_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::DateTime_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::DateTime_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::DateTime_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::DateTime_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::DateTime_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::DateTime_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::DateTime_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::DateTime_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__DateTime_Response
    std::shared_ptr<api_msgs::srv::DateTime_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__DateTime_Response
    std::shared_ptr<api_msgs::srv::DateTime_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DateTime_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const DateTime_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DateTime_Response_

// alias to use template instance with default allocator
using DateTime_Response =
  api_msgs::srv::DateTime_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs

namespace api_msgs
{

namespace srv
{

struct DateTime
{
  using Request = api_msgs::srv::DateTime_Request;
  using Response = api_msgs::srv::DateTime_Response;
};

}  // namespace srv

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__DATE_TIME__STRUCT_HPP_
