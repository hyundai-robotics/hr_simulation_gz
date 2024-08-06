// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from api_msgs:srv/Emergency.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__EMERGENCY__STRUCT_H_
#define API_MSGS__SRV__DETAIL__EMERGENCY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Emergency in the package api_msgs.
typedef struct api_msgs__srv__Emergency_Request
{
  int32_t step_no;
  int32_t stop_at;
  int32_t stop_at_corner;
  int32_t category;
} api_msgs__srv__Emergency_Request;

// Struct for a sequence of api_msgs__srv__Emergency_Request.
typedef struct api_msgs__srv__Emergency_Request__Sequence
{
  api_msgs__srv__Emergency_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} api_msgs__srv__Emergency_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Emergency in the package api_msgs.
typedef struct api_msgs__srv__Emergency_Response
{
  rosidl_runtime_c__String message;
  bool success;
} api_msgs__srv__Emergency_Response;

// Struct for a sequence of api_msgs__srv__Emergency_Response.
typedef struct api_msgs__srv__Emergency_Response__Sequence
{
  api_msgs__srv__Emergency_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} api_msgs__srv__Emergency_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // API_MSGS__SRV__DETAIL__EMERGENCY__STRUCT_H_
