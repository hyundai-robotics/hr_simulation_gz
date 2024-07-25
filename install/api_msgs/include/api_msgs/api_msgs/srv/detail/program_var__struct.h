// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from api_msgs:srv/ProgramVar.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__PROGRAM_VAR__STRUCT_H_
#define API_MSGS__SRV__DETAIL__PROGRAM_VAR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
// Member 'scope'
// Member 'expr'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ProgramVar in the package api_msgs.
typedef struct api_msgs__srv__ProgramVar_Request
{
  rosidl_runtime_c__String name;
  rosidl_runtime_c__String scope;
  rosidl_runtime_c__String expr;
  bool save;
} api_msgs__srv__ProgramVar_Request;

// Struct for a sequence of api_msgs__srv__ProgramVar_Request.
typedef struct api_msgs__srv__ProgramVar_Request__Sequence
{
  api_msgs__srv__ProgramVar_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} api_msgs__srv__ProgramVar_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ProgramVar in the package api_msgs.
typedef struct api_msgs__srv__ProgramVar_Response
{
  rosidl_runtime_c__String message;
  bool success;
} api_msgs__srv__ProgramVar_Response;

// Struct for a sequence of api_msgs__srv__ProgramVar_Response.
typedef struct api_msgs__srv__ProgramVar_Response__Sequence
{
  api_msgs__srv__ProgramVar_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} api_msgs__srv__ProgramVar_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // API_MSGS__SRV__DETAIL__PROGRAM_VAR__STRUCT_H_
