// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from api_msgs:srv/IoplcGet.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__IOPLC_GET__STRUCT_H_
#define API_MSGS__SRV__DETAIL__IOPLC_GET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obj_type'
// Member 'relay_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/IoplcGet in the package api_msgs.
typedef struct api_msgs__srv__IoplcGet_Request
{
  rosidl_runtime_c__String obj_type;
  int32_t obj_idx;
  rosidl_runtime_c__String relay_type;
  int32_t st;
  int32_t len;
} api_msgs__srv__IoplcGet_Request;

// Struct for a sequence of api_msgs__srv__IoplcGet_Request.
typedef struct api_msgs__srv__IoplcGet_Request__Sequence
{
  api_msgs__srv__IoplcGet_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} api_msgs__srv__IoplcGet_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/IoplcGet in the package api_msgs.
typedef struct api_msgs__srv__IoplcGet_Response
{
  rosidl_runtime_c__String message;
  bool success;
} api_msgs__srv__IoplcGet_Response;

// Struct for a sequence of api_msgs__srv__IoplcGet_Response.
typedef struct api_msgs__srv__IoplcGet_Response__Sequence
{
  api_msgs__srv__IoplcGet_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} api_msgs__srv__IoplcGet_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // API_MSGS__SRV__DETAIL__IOPLC_GET__STRUCT_H_
