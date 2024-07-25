// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from api_msgs:srv/FileList.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__FILE_LIST__STRUCT_H_
#define API_MSGS__SRV__DETAIL__FILE_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FileList in the package api_msgs.
typedef struct api_msgs__srv__FileList_Request
{
  rosidl_runtime_c__String path;
  bool incl_file;
  bool incl_dir;
} api_msgs__srv__FileList_Request;

// Struct for a sequence of api_msgs__srv__FileList_Request.
typedef struct api_msgs__srv__FileList_Request__Sequence
{
  api_msgs__srv__FileList_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} api_msgs__srv__FileList_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FileList in the package api_msgs.
typedef struct api_msgs__srv__FileList_Response
{
  rosidl_runtime_c__String message;
  bool success;
} api_msgs__srv__FileList_Response;

// Struct for a sequence of api_msgs__srv__FileList_Response.
typedef struct api_msgs__srv__FileList_Response__Sequence
{
  api_msgs__srv__FileList_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} api_msgs__srv__FileList_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // API_MSGS__SRV__DETAIL__FILE_LIST__STRUCT_H_
