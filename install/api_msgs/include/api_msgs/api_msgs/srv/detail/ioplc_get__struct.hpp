// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from api_msgs:srv/IoplcGet.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__IOPLC_GET__STRUCT_HPP_
#define API_MSGS__SRV__DETAIL__IOPLC_GET__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__IoplcGet_Request __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__IoplcGet_Request __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IoplcGet_Request_
{
  using Type = IoplcGet_Request_<ContainerAllocator>;

  explicit IoplcGet_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obj_type = "";
      this->obj_idx = 0l;
      this->relay_type = "";
      this->st = 0l;
      this->len = 0l;
    }
  }

  explicit IoplcGet_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : obj_type(_alloc),
    relay_type(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->obj_type = "";
      this->obj_idx = 0l;
      this->relay_type = "";
      this->st = 0l;
      this->len = 0l;
    }
  }

  // field types and members
  using _obj_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _obj_type_type obj_type;
  using _obj_idx_type =
    int32_t;
  _obj_idx_type obj_idx;
  using _relay_type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _relay_type_type relay_type;
  using _st_type =
    int32_t;
  _st_type st;
  using _len_type =
    int32_t;
  _len_type len;

  // setters for named parameter idiom
  Type & set__obj_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->obj_type = _arg;
    return *this;
  }
  Type & set__obj_idx(
    const int32_t & _arg)
  {
    this->obj_idx = _arg;
    return *this;
  }
  Type & set__relay_type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->relay_type = _arg;
    return *this;
  }
  Type & set__st(
    const int32_t & _arg)
  {
    this->st = _arg;
    return *this;
  }
  Type & set__len(
    const int32_t & _arg)
  {
    this->len = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    api_msgs::srv::IoplcGet_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::IoplcGet_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::IoplcGet_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::IoplcGet_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::IoplcGet_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::IoplcGet_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::IoplcGet_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::IoplcGet_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::IoplcGet_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::IoplcGet_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__IoplcGet_Request
    std::shared_ptr<api_msgs::srv::IoplcGet_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__IoplcGet_Request
    std::shared_ptr<api_msgs::srv::IoplcGet_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IoplcGet_Request_ & other) const
  {
    if (this->obj_type != other.obj_type) {
      return false;
    }
    if (this->obj_idx != other.obj_idx) {
      return false;
    }
    if (this->relay_type != other.relay_type) {
      return false;
    }
    if (this->st != other.st) {
      return false;
    }
    if (this->len != other.len) {
      return false;
    }
    return true;
  }
  bool operator!=(const IoplcGet_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IoplcGet_Request_

// alias to use template instance with default allocator
using IoplcGet_Request =
  api_msgs::srv::IoplcGet_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__IoplcGet_Response __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__IoplcGet_Response __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IoplcGet_Response_
{
  using Type = IoplcGet_Response_<ContainerAllocator>;

  explicit IoplcGet_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  explicit IoplcGet_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    api_msgs::srv::IoplcGet_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::IoplcGet_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::IoplcGet_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::IoplcGet_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::IoplcGet_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::IoplcGet_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::IoplcGet_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::IoplcGet_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::IoplcGet_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::IoplcGet_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__IoplcGet_Response
    std::shared_ptr<api_msgs::srv::IoplcGet_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__IoplcGet_Response
    std::shared_ptr<api_msgs::srv::IoplcGet_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IoplcGet_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const IoplcGet_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IoplcGet_Response_

// alias to use template instance with default allocator
using IoplcGet_Response =
  api_msgs::srv::IoplcGet_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs

namespace api_msgs
{

namespace srv
{

struct IoplcGet
{
  using Request = api_msgs::srv::IoplcGet_Request;
  using Response = api_msgs::srv::IoplcGet_Response;
};

}  // namespace srv

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__IOPLC_GET__STRUCT_HPP_
