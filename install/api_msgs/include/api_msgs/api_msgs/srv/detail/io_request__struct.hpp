// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from api_msgs:srv/IoRequest.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__IO_REQUEST__STRUCT_HPP_
#define API_MSGS__SRV__DETAIL__IO_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__IoRequest_Request __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__IoRequest_Request __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IoRequest_Request_
{
  using Type = IoRequest_Request_<ContainerAllocator>;

  explicit IoRequest_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->blk_no = 0l;
      this->sig_no = 0l;
      this->val = 0l;
    }
  }

  explicit IoRequest_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->blk_no = 0l;
      this->sig_no = 0l;
      this->val = 0l;
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _blk_no_type =
    int32_t;
  _blk_no_type blk_no;
  using _sig_no_type =
    int32_t;
  _sig_no_type sig_no;
  using _val_type =
    int32_t;
  _val_type val;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__blk_no(
    const int32_t & _arg)
  {
    this->blk_no = _arg;
    return *this;
  }
  Type & set__sig_no(
    const int32_t & _arg)
  {
    this->sig_no = _arg;
    return *this;
  }
  Type & set__val(
    const int32_t & _arg)
  {
    this->val = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    api_msgs::srv::IoRequest_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::IoRequest_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::IoRequest_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::IoRequest_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::IoRequest_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::IoRequest_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::IoRequest_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::IoRequest_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::IoRequest_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::IoRequest_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__IoRequest_Request
    std::shared_ptr<api_msgs::srv::IoRequest_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__IoRequest_Request
    std::shared_ptr<api_msgs::srv::IoRequest_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IoRequest_Request_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->blk_no != other.blk_no) {
      return false;
    }
    if (this->sig_no != other.sig_no) {
      return false;
    }
    if (this->val != other.val) {
      return false;
    }
    return true;
  }
  bool operator!=(const IoRequest_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IoRequest_Request_

// alias to use template instance with default allocator
using IoRequest_Request =
  api_msgs::srv::IoRequest_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__IoRequest_Response __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__IoRequest_Response __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IoRequest_Response_
{
  using Type = IoRequest_Response_<ContainerAllocator>;

  explicit IoRequest_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->val = 0l;
      this->success = false;
    }
  }

  explicit IoRequest_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->val = 0l;
      this->success = false;
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;
  using _val_type =
    int32_t;
  _val_type val;
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
  Type & set__val(
    const int32_t & _arg)
  {
    this->val = _arg;
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
    api_msgs::srv::IoRequest_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::IoRequest_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::IoRequest_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::IoRequest_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::IoRequest_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::IoRequest_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::IoRequest_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::IoRequest_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::IoRequest_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::IoRequest_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__IoRequest_Response
    std::shared_ptr<api_msgs::srv::IoRequest_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__IoRequest_Response
    std::shared_ptr<api_msgs::srv::IoRequest_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IoRequest_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->val != other.val) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const IoRequest_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IoRequest_Response_

// alias to use template instance with default allocator
using IoRequest_Response =
  api_msgs::srv::IoRequest_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs

namespace api_msgs
{

namespace srv
{

struct IoRequest
{
  using Request = api_msgs::srv::IoRequest_Request;
  using Response = api_msgs::srv::IoRequest_Response;
};

}  // namespace srv

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__IO_REQUEST__STRUCT_HPP_
