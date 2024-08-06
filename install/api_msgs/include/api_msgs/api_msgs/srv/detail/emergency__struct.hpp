// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from api_msgs:srv/Emergency.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__EMERGENCY__STRUCT_HPP_
#define API_MSGS__SRV__DETAIL__EMERGENCY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__Emergency_Request __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__Emergency_Request __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Emergency_Request_
{
  using Type = Emergency_Request_<ContainerAllocator>;

  explicit Emergency_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->step_no = 0l;
      this->stop_at = 0l;
      this->stop_at_corner = 0l;
      this->category = 0l;
    }
  }

  explicit Emergency_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->step_no = 0l;
      this->stop_at = 0l;
      this->stop_at_corner = 0l;
      this->category = 0l;
    }
  }

  // field types and members
  using _step_no_type =
    int32_t;
  _step_no_type step_no;
  using _stop_at_type =
    int32_t;
  _stop_at_type stop_at;
  using _stop_at_corner_type =
    int32_t;
  _stop_at_corner_type stop_at_corner;
  using _category_type =
    int32_t;
  _category_type category;

  // setters for named parameter idiom
  Type & set__step_no(
    const int32_t & _arg)
  {
    this->step_no = _arg;
    return *this;
  }
  Type & set__stop_at(
    const int32_t & _arg)
  {
    this->stop_at = _arg;
    return *this;
  }
  Type & set__stop_at_corner(
    const int32_t & _arg)
  {
    this->stop_at_corner = _arg;
    return *this;
  }
  Type & set__category(
    const int32_t & _arg)
  {
    this->category = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    api_msgs::srv::Emergency_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::Emergency_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::Emergency_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::Emergency_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::Emergency_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::Emergency_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::Emergency_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::Emergency_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::Emergency_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::Emergency_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__Emergency_Request
    std::shared_ptr<api_msgs::srv::Emergency_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__Emergency_Request
    std::shared_ptr<api_msgs::srv::Emergency_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Emergency_Request_ & other) const
  {
    if (this->step_no != other.step_no) {
      return false;
    }
    if (this->stop_at != other.stop_at) {
      return false;
    }
    if (this->stop_at_corner != other.stop_at_corner) {
      return false;
    }
    if (this->category != other.category) {
      return false;
    }
    return true;
  }
  bool operator!=(const Emergency_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Emergency_Request_

// alias to use template instance with default allocator
using Emergency_Request =
  api_msgs::srv::Emergency_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__Emergency_Response __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__Emergency_Response __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Emergency_Response_
{
  using Type = Emergency_Response_<ContainerAllocator>;

  explicit Emergency_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  explicit Emergency_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    api_msgs::srv::Emergency_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::Emergency_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::Emergency_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::Emergency_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::Emergency_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::Emergency_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::Emergency_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::Emergency_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::Emergency_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::Emergency_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__Emergency_Response
    std::shared_ptr<api_msgs::srv::Emergency_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__Emergency_Response
    std::shared_ptr<api_msgs::srv::Emergency_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Emergency_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const Emergency_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Emergency_Response_

// alias to use template instance with default allocator
using Emergency_Response =
  api_msgs::srv::Emergency_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs

namespace api_msgs
{

namespace srv
{

struct Emergency
{
  using Request = api_msgs::srv::Emergency_Request;
  using Response = api_msgs::srv::Emergency_Response;
};

}  // namespace srv

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__EMERGENCY__STRUCT_HPP_
