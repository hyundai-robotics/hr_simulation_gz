// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from api_msgs:srv/LogManager.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__LOG_MANAGER__STRUCT_HPP_
#define API_MSGS__SRV__DETAIL__LOG_MANAGER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__LogManager_Request __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__LogManager_Request __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LogManager_Request_
{
  using Type = LogManager_Request_<ContainerAllocator>;

  explicit LogManager_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n_item = 0l;
      this->cat_p = "";
      this->id_min = 0l;
      this->id_max = 0l;
      this->ts_min = "";
      this->ts_max = "";
    }
  }

  explicit LogManager_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cat_p(_alloc),
    ts_min(_alloc),
    ts_max(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->n_item = 0l;
      this->cat_p = "";
      this->id_min = 0l;
      this->id_max = 0l;
      this->ts_min = "";
      this->ts_max = "";
    }
  }

  // field types and members
  using _n_item_type =
    int32_t;
  _n_item_type n_item;
  using _cat_p_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _cat_p_type cat_p;
  using _id_min_type =
    int32_t;
  _id_min_type id_min;
  using _id_max_type =
    int32_t;
  _id_max_type id_max;
  using _ts_min_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ts_min_type ts_min;
  using _ts_max_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ts_max_type ts_max;

  // setters for named parameter idiom
  Type & set__n_item(
    const int32_t & _arg)
  {
    this->n_item = _arg;
    return *this;
  }
  Type & set__cat_p(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->cat_p = _arg;
    return *this;
  }
  Type & set__id_min(
    const int32_t & _arg)
  {
    this->id_min = _arg;
    return *this;
  }
  Type & set__id_max(
    const int32_t & _arg)
  {
    this->id_max = _arg;
    return *this;
  }
  Type & set__ts_min(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ts_min = _arg;
    return *this;
  }
  Type & set__ts_max(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ts_max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    api_msgs::srv::LogManager_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::LogManager_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::LogManager_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::LogManager_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::LogManager_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::LogManager_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::LogManager_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::LogManager_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::LogManager_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::LogManager_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__LogManager_Request
    std::shared_ptr<api_msgs::srv::LogManager_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__LogManager_Request
    std::shared_ptr<api_msgs::srv::LogManager_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogManager_Request_ & other) const
  {
    if (this->n_item != other.n_item) {
      return false;
    }
    if (this->cat_p != other.cat_p) {
      return false;
    }
    if (this->id_min != other.id_min) {
      return false;
    }
    if (this->id_max != other.id_max) {
      return false;
    }
    if (this->ts_min != other.ts_min) {
      return false;
    }
    if (this->ts_max != other.ts_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const LogManager_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogManager_Request_

// alias to use template instance with default allocator
using LogManager_Request =
  api_msgs::srv::LogManager_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__LogManager_Response __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__LogManager_Response __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct LogManager_Response_
{
  using Type = LogManager_Response_<ContainerAllocator>;

  explicit LogManager_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  explicit LogManager_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    api_msgs::srv::LogManager_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::LogManager_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::LogManager_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::LogManager_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::LogManager_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::LogManager_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::LogManager_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::LogManager_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::LogManager_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::LogManager_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__LogManager_Response
    std::shared_ptr<api_msgs::srv::LogManager_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__LogManager_Response
    std::shared_ptr<api_msgs::srv::LogManager_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LogManager_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const LogManager_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LogManager_Response_

// alias to use template instance with default allocator
using LogManager_Response =
  api_msgs::srv::LogManager_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs

namespace api_msgs
{

namespace srv
{

struct LogManager
{
  using Request = api_msgs::srv::LogManager_Request;
  using Response = api_msgs::srv::LogManager_Response;
};

}  // namespace srv

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__LOG_MANAGER__STRUCT_HPP_
