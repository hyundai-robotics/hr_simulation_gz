// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from api_msgs:srv/ExecuteMove.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__EXECUTE_MOVE__STRUCT_HPP_
#define API_MSGS__SRV__DETAIL__EXECUTE_MOVE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__ExecuteMove_Request __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__ExecuteMove_Request __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteMove_Request_
{
  using Type = ExecuteMove_Request_<ContainerAllocator>;

  explicit ExecuteMove_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_no = 0l;
      this->stmt = "";
    }
  }

  explicit ExecuteMove_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stmt(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->task_no = 0l;
      this->stmt = "";
    }
  }

  // field types and members
  using _task_no_type =
    int32_t;
  _task_no_type task_no;
  using _stmt_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _stmt_type stmt;

  // setters for named parameter idiom
  Type & set__task_no(
    const int32_t & _arg)
  {
    this->task_no = _arg;
    return *this;
  }
  Type & set__stmt(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->stmt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    api_msgs::srv::ExecuteMove_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::ExecuteMove_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::ExecuteMove_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::ExecuteMove_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::ExecuteMove_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::ExecuteMove_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::ExecuteMove_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::ExecuteMove_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::ExecuteMove_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::ExecuteMove_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__ExecuteMove_Request
    std::shared_ptr<api_msgs::srv::ExecuteMove_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__ExecuteMove_Request
    std::shared_ptr<api_msgs::srv::ExecuteMove_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMove_Request_ & other) const
  {
    if (this->task_no != other.task_no) {
      return false;
    }
    if (this->stmt != other.stmt) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMove_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMove_Request_

// alias to use template instance with default allocator
using ExecuteMove_Request =
  api_msgs::srv::ExecuteMove_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__ExecuteMove_Response __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__ExecuteMove_Response __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ExecuteMove_Response_
{
  using Type = ExecuteMove_Response_<ContainerAllocator>;

  explicit ExecuteMove_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  explicit ExecuteMove_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    api_msgs::srv::ExecuteMove_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::ExecuteMove_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::ExecuteMove_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::ExecuteMove_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::ExecuteMove_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::ExecuteMove_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::ExecuteMove_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::ExecuteMove_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::ExecuteMove_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::ExecuteMove_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__ExecuteMove_Response
    std::shared_ptr<api_msgs::srv::ExecuteMove_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__ExecuteMove_Response
    std::shared_ptr<api_msgs::srv::ExecuteMove_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExecuteMove_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExecuteMove_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExecuteMove_Response_

// alias to use template instance with default allocator
using ExecuteMove_Response =
  api_msgs::srv::ExecuteMove_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs

namespace api_msgs
{

namespace srv
{

struct ExecuteMove
{
  using Request = api_msgs::srv::ExecuteMove_Request;
  using Response = api_msgs::srv::ExecuteMove_Response;
};

}  // namespace srv

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__EXECUTE_MOVE__STRUCT_HPP_
