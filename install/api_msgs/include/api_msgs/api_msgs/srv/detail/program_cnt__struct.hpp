// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from api_msgs:srv/ProgramCnt.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__PROGRAM_CNT__STRUCT_HPP_
#define API_MSGS__SRV__DETAIL__PROGRAM_CNT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__ProgramCnt_Request __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__ProgramCnt_Request __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ProgramCnt_Request_
{
  using Type = ProgramCnt_Request_<ContainerAllocator>;

  explicit ProgramCnt_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pno = 0l;
      this->sno = 0l;
      this->fno = 0l;
      this->ext_sel = 0l;
    }
  }

  explicit ProgramCnt_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->pno = 0l;
      this->sno = 0l;
      this->fno = 0l;
      this->ext_sel = 0l;
    }
  }

  // field types and members
  using _pno_type =
    int32_t;
  _pno_type pno;
  using _sno_type =
    int32_t;
  _sno_type sno;
  using _fno_type =
    int32_t;
  _fno_type fno;
  using _ext_sel_type =
    int32_t;
  _ext_sel_type ext_sel;

  // setters for named parameter idiom
  Type & set__pno(
    const int32_t & _arg)
  {
    this->pno = _arg;
    return *this;
  }
  Type & set__sno(
    const int32_t & _arg)
  {
    this->sno = _arg;
    return *this;
  }
  Type & set__fno(
    const int32_t & _arg)
  {
    this->fno = _arg;
    return *this;
  }
  Type & set__ext_sel(
    const int32_t & _arg)
  {
    this->ext_sel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    api_msgs::srv::ProgramCnt_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::ProgramCnt_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::ProgramCnt_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::ProgramCnt_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::ProgramCnt_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::ProgramCnt_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::ProgramCnt_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::ProgramCnt_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::ProgramCnt_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::ProgramCnt_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__ProgramCnt_Request
    std::shared_ptr<api_msgs::srv::ProgramCnt_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__ProgramCnt_Request
    std::shared_ptr<api_msgs::srv::ProgramCnt_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProgramCnt_Request_ & other) const
  {
    if (this->pno != other.pno) {
      return false;
    }
    if (this->sno != other.sno) {
      return false;
    }
    if (this->fno != other.fno) {
      return false;
    }
    if (this->ext_sel != other.ext_sel) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProgramCnt_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProgramCnt_Request_

// alias to use template instance with default allocator
using ProgramCnt_Request =
  api_msgs::srv::ProgramCnt_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs


#ifndef _WIN32
# define DEPRECATED__api_msgs__srv__ProgramCnt_Response __attribute__((deprecated))
#else
# define DEPRECATED__api_msgs__srv__ProgramCnt_Response __declspec(deprecated)
#endif

namespace api_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ProgramCnt_Response_
{
  using Type = ProgramCnt_Response_<ContainerAllocator>;

  explicit ProgramCnt_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
      this->success = false;
    }
  }

  explicit ProgramCnt_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    api_msgs::srv::ProgramCnt_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const api_msgs::srv::ProgramCnt_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<api_msgs::srv::ProgramCnt_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<api_msgs::srv::ProgramCnt_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::ProgramCnt_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::ProgramCnt_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      api_msgs::srv::ProgramCnt_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<api_msgs::srv::ProgramCnt_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<api_msgs::srv::ProgramCnt_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<api_msgs::srv::ProgramCnt_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__api_msgs__srv__ProgramCnt_Response
    std::shared_ptr<api_msgs::srv::ProgramCnt_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__api_msgs__srv__ProgramCnt_Response
    std::shared_ptr<api_msgs::srv::ProgramCnt_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProgramCnt_Response_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProgramCnt_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProgramCnt_Response_

// alias to use template instance with default allocator
using ProgramCnt_Response =
  api_msgs::srv::ProgramCnt_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace api_msgs

namespace api_msgs
{

namespace srv
{

struct ProgramCnt
{
  using Request = api_msgs::srv::ProgramCnt_Request;
  using Response = api_msgs::srv::ProgramCnt_Response;
};

}  // namespace srv

}  // namespace api_msgs

#endif  // API_MSGS__SRV__DETAIL__PROGRAM_CNT__STRUCT_HPP_
