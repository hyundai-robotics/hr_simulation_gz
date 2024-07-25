// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from api_msgs:srv/IoplcPost.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__IOPLC_POST__STRUCT_HPP_
#define API_MSGS__SRV__DETAIL__IOPLC_POST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__IoplcPost_Request __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__IoplcPost_Request __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IoplcPost_Request_
{
  using Type = IoplcPost_Request_<ContainerAllocator>;

  explicit IoplcPost_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->value = 0.0f;
    }
  }

  explicit IoplcPost_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->value = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _value_type =
    float;
  _value_type value;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__value(
    const float & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    api_msgs::srv::IoplcPost_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::IoplcPost_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::IoplcPost_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::IoplcPost_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::IoplcPost_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::IoplcPost_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::IoplcPost_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::IoplcPost_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::IoplcPost_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::IoplcPost_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__IoplcPost_Request
    std::shared_ptr<api_msgs::srv::IoplcPost_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__IoplcPost_Request
    std::shared_ptr<api_msgs::srv::IoplcPost_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IoplcPost_Request_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const IoplcPost_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IoplcPost_Request_

// alias to use template instance with default allocator
using IoplcPost_Request =
  api_msgs::srv::IoplcPost_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__IoplcPost_Response __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__IoplcPost_Response __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct IoplcPost_Response_
{
  using Type = IoplcPost_Response_<ContainerAllocator>;

  explicit IoplcPost_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->val = 0l;
      this->success = false;
    }
  }

  explicit IoplcPost_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    api_msgs::srv::IoplcPost_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::IoplcPost_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::IoplcPost_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::IoplcPost_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::IoplcPost_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::IoplcPost_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::IoplcPost_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::IoplcPost_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::IoplcPost_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::IoplcPost_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__IoplcPost_Response
    std::shared_ptr<api_msgs::srv::IoplcPost_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__IoplcPost_Response
    std::shared_ptr<api_msgs::srv::IoplcPost_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IoplcPost_Response_ & other) const
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
  bool operator!=(const IoplcPost_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IoplcPost_Response_

// alias to use template instance with default allocator
using IoplcPost_Response =
  api_msgs::srv::IoplcPost_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs

namespace api_msgs
{

namespace srv
{

struct IoplcPost
{
  using Request = api_msgs::srv::IoplcPost_Request;
  using Response = api_msgs::srv::IoplcPost_Response;
};

}  // namespace srv

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__IOPLC_POST__STRUCT_HPP_
