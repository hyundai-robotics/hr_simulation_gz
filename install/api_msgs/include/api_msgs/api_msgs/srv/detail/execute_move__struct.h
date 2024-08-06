// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from api_msgs:srv/ExecuteMove.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__EXECUTE_MOVE__STRUCT_H_
#define API_MSGS__SRV__DETAIL__EXECUTE_MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stmt'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ExecuteMove in the package api_msgs.
typedef struct api_msgs__srv__ExecuteMove_Request
{
  int32_t task_no;
  rosidl_runtime_c__String stmt;
} api_msgs__srv__ExecuteMove_Request;

// Struct for a sequence of api_msgs__srv__ExecuteMove_Request.
typedef struct api_msgs__srv__ExecuteMove_Request__Sequence
{
  api_msgs__srv__ExecuteMove_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} api_msgs__srv__ExecuteMove_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ExecuteMove in the package api_msgs.
typedef struct api_msgs__srv__ExecuteMove_Response
{
  rosidl_runtime_c__String message;
  bool success;
} api_msgs__srv__ExecuteMove_Response;

// Struct for a sequence of api_msgs__srv__ExecuteMove_Response.
typedef struct api_msgs__srv__ExecuteMove_Response__Sequence
{
  api_msgs__srv__ExecuteMove_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} api_msgs__srv__ExecuteMove_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // API_MSGS__SRV__DETAIL__EXECUTE_MOVE__STRUCT_H_
