// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from api_msgs:srv/FileRename.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__FILE_RENAME__STRUCT_HPP_
#define API_MSGS__SRV__DETAIL__FILE_RENAME__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__FileRename_Request __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__FileRename_Request __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FileRename_Request_
{
  using Type = FileRename_Request_<ContainerAllocator>;

  explicit FileRename_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pathname_from = "";
      this->pathname_to = "";
    }
  }

  explicit FileRename_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pathname_from(_alloc),
    pathname_to(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pathname_from = "";
      this->pathname_to = "";
    }
  }

  // field types and members
  using _pathname_from_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pathname_from_type pathname_from;
  using _pathname_to_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _pathname_to_type pathname_to;

  // setters for named parameter idiom
  Type & set__pathname_from(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pathname_from = _arg;
    return *this;
  }
  Type & set__pathname_to(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->pathname_to = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    api_msgs::srv::FileRename_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::FileRename_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::FileRename_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::FileRename_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::FileRename_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::FileRename_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::FileRename_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::FileRename_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::FileRename_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::FileRename_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__FileRename_Request
    std::shared_ptr<api_msgs::srv::FileRename_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__FileRename_Request
    std::shared_ptr<api_msgs::srv::FileRename_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FileRename_Request_ & other) const
  {
    if (this->pathname_from != other.pathname_from) {
      return false;
    }
    if (this->pathname_to != other.pathname_to) {
      return false;
    }
    return true;
  }
  bool operator!=(const FileRename_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FileRename_Request_

// alias to use template instance with default allocator
using FileRename_Request =
  api_msgs::srv::FileRename_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__FileRename_Response __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__FileRename_Response __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FileRename_Response_
{
  using Type = FileRename_Response_<ContainerAllocator>;

  explicit FileRename_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  explicit FileRename_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    api_msgs::srv::FileRename_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::FileRename_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::FileRename_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::FileRename_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::FileRename_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::FileRename_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::FileRename_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::FileRename_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::FileRename_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::FileRename_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__FileRename_Response
    std::shared_ptr<api_msgs::srv::FileRename_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__FileRename_Response
    std::shared_ptr<api_msgs::srv::FileRename_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FileRename_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const FileRename_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FileRename_Response_

// alias to use template instance with default allocator
using FileRename_Response =
  api_msgs::srv::FileRename_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs

namespace api_msgs
{

namespace srv
{

struct FileRename
{
  using Request = api_msgs::srv::FileRename_Request;
  using Response = api_msgs::srv::FileRename_Response;
};

}  // namespace srv

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__FILE_RENAME__STRUCT_HPP_
