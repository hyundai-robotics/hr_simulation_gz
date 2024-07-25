// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from api_msgs:srv/FileList.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__FILE_LIST__STRUCT_HPP_
#define API_MSGS__SRV__DETAIL__FILE_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__FileList_Request __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__FileList_Request __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FileList_Request_
{
  using Type = FileList_Request_<ContainerAllocator>;

  explicit FileList_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path = "";
      this->incl_file = false;
      this->incl_dir = false;
    }
  }

  explicit FileList_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : path(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->path = "";
      this->incl_file = false;
      this->incl_dir = false;
    }
  }

  // field types and members
  using _path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _path_type path;
  using _incl_file_type =
    bool;
  _incl_file_type incl_file;
  using _incl_dir_type =
    bool;
  _incl_dir_type incl_dir;

  // setters for named parameter idiom
  Type & set__path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__incl_file(
    const bool & _arg)
  {
    this->incl_file = _arg;
    return *this;
  }
  Type & set__incl_dir(
    const bool & _arg)
  {
    this->incl_dir = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    api_msgs::srv::FileList_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::FileList_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::FileList_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::FileList_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::FileList_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::FileList_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::FileList_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::FileList_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::FileList_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::FileList_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__FileList_Request
    std::shared_ptr<api_msgs::srv::FileList_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__FileList_Request
    std::shared_ptr<api_msgs::srv::FileList_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FileList_Request_ & other) const
  {
    if (this->path != other.path) {
      return false;
    }
    if (this->incl_file != other.incl_file) {
      return false;
    }
    if (this->incl_dir != other.incl_dir) {
      return false;
    }
    return true;
  }
  bool operator!=(const FileList_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FileList_Request_

// alias to use template instance with default allocator
using FileList_Request =
  api_msgs::srv::FileList_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__FileList_Response __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__FileList_Response __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FileList_Response_
{
  using Type = FileList_Response_<ContainerAllocator>;

  explicit FileList_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  explicit FileList_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    api_msgs::srv::FileList_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::FileList_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::FileList_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::FileList_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::FileList_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::FileList_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::FileList_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::FileList_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::FileList_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::FileList_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__FileList_Response
    std::shared_ptr<api_msgs::srv::FileList_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__FileList_Response
    std::shared_ptr<api_msgs::srv::FileList_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FileList_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const FileList_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FileList_Response_

// alias to use template instance with default allocator
using FileList_Response =
  api_msgs::srv::FileList_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs

namespace api_msgs
{

namespace srv
{

struct FileList
{
  using Request = api_msgs::srv::FileList_Request;
  using Response = api_msgs::srv::FileList_Response;
};

}  // namespace srv

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__FILE_LIST__STRUCT_HPP_
