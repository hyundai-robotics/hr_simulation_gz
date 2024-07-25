// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from api_msgs:srv/OpCnd.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__OP_CND__STRUCT_HPP_
#define API_MSGS__SRV__DETAIL__OP_CND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__OpCnd_Request __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__OpCnd_Request __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OpCnd_Request_
{
  using Type = OpCnd_Request_<ContainerAllocator>;

  explicit OpCnd_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->playback_mode = 0l;
      this->step_goback_max_spd = 0l;
      this->ucrd_num = 0l;
    }
  }

  explicit OpCnd_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->playback_mode = 0l;
      this->step_goback_max_spd = 0l;
      this->ucrd_num = 0l;
    }
  }

  // field types and members
  using _playback_mode_type =
    int32_t;
  _playback_mode_type playback_mode;
  using _step_goback_max_spd_type =
    int32_t;
  _step_goback_max_spd_type step_goback_max_spd;
  using _ucrd_num_type =
    int32_t;
  _ucrd_num_type ucrd_num;

  // setters for named parameter idiom
  Type & set__playback_mode(
    const int32_t & _arg)
  {
    this->playback_mode = _arg;
    return *this;
  }
  Type & set__step_goback_max_spd(
    const int32_t & _arg)
  {
    this->step_goback_max_spd = _arg;
    return *this;
  }
  Type & set__ucrd_num(
    const int32_t & _arg)
  {
    this->ucrd_num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    api_msgs::srv::OpCnd_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::OpCnd_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::OpCnd_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::OpCnd_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::OpCnd_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::OpCnd_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::OpCnd_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::OpCnd_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::OpCnd_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::OpCnd_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__OpCnd_Request
    std::shared_ptr<api_msgs::srv::OpCnd_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__OpCnd_Request
    std::shared_ptr<api_msgs::srv::OpCnd_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpCnd_Request_ & other) const
  {
    if (this->playback_mode != other.playback_mode) {
      return false;
    }
    if (this->step_goback_max_spd != other.step_goback_max_spd) {
      return false;
    }
    if (this->ucrd_num != other.ucrd_num) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpCnd_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpCnd_Request_

// alias to use template instance with default allocator
using OpCnd_Request =
  api_msgs::srv::OpCnd_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__OpCnd_Response __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__OpCnd_Response __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct OpCnd_Response_
{
  using Type = OpCnd_Response_<ContainerAllocator>;

  explicit OpCnd_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  explicit OpCnd_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    api_msgs::srv::OpCnd_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::OpCnd_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::OpCnd_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::OpCnd_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::OpCnd_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::OpCnd_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::OpCnd_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::OpCnd_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::OpCnd_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::OpCnd_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__OpCnd_Response
    std::shared_ptr<api_msgs::srv::OpCnd_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__OpCnd_Response
    std::shared_ptr<api_msgs::srv::OpCnd_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OpCnd_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const OpCnd_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OpCnd_Response_

// alias to use template instance with default allocator
using OpCnd_Response =
  api_msgs::srv::OpCnd_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs

namespace api_msgs
{

namespace srv
{

struct OpCnd
{
  using Request = api_msgs::srv::OpCnd_Request;
  using Response = api_msgs::srv::OpCnd_Response;
};

}  // namespace srv

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__OP_CND__STRUCT_HPP_
