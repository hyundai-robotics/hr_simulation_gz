// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from api_msgs:srv/DateTime.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "api_msgs/srv/detail/date_time__rosidl_typesupport_introspection_c.h"
#include "api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "api_msgs/srv/detail/date_time__functions.h"
#include "api_msgs/srv/detail/date_time__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void api_msgs__srv__DateTime_Request__rosidl_typesupport_introspection_c__DateTime_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  api_msgs__srv__DateTime_Request__init(message_memory);
}

void api_msgs__srv__DateTime_Request__rosidl_typesupport_introspection_c__DateTime_Request_fini_function(void * message_memory)
{
  api_msgs__srv__DateTime_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember api_msgs__srv__DateTime_Request__rosidl_typesupport_introspection_c__DateTime_Request_message_member_array[6] = {
  {
    "year",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(api_msgs__srv__DateTime_Request, year),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(api_msgs__srv__DateTime_Request, mon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "day",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(api_msgs__srv__DateTime_Request, day),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hour",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(api_msgs__srv__DateTime_Request, hour),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(api_msgs__srv__DateTime_Request, min),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(api_msgs__srv__DateTime_Request, sec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers api_msgs__srv__DateTime_Request__rosidl_typesupport_introspection_c__DateTime_Request_message_members = {
  "api_msgs__srv",  // message namespace
  "DateTime_Request",  // message name
  6,  // number of fields
  sizeof(api_msgs__srv__DateTime_Request),
  api_msgs__srv__DateTime_Request__rosidl_typesupport_introspection_c__DateTime_Request_message_member_array,  // message members
  api_msgs__srv__DateTime_Request__rosidl_typesupport_introspection_c__DateTime_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  api_msgs__srv__DateTime_Request__rosidl_typesupport_introspection_c__DateTime_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t api_msgs__srv__DateTime_Request__rosidl_typesupport_introspection_c__DateTime_Request_message_type_support_handle = {
  0,
  &api_msgs__srv__DateTime_Request__rosidl_typesupport_introspection_c__DateTime_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, api_msgs, srv, DateTime_Request)() {
  if (!api_msgs__srv__DateTime_Request__rosidl_typesupport_introspection_c__DateTime_Request_message_type_support_handle.typesupport_identifier) {
    api_msgs__srv__DateTime_Request__rosidl_typesupport_introspection_c__DateTime_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &api_msgs__srv__DateTime_Request__rosidl_typesupport_introspection_c__DateTime_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "api_msgs/srv/detail/date_time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "api_msgs/srv/detail/date_time__functions.h"
// already included above
// #include "api_msgs/srv/detail/date_time__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void api_msgs__srv__DateTime_Response__rosidl_typesupport_introspection_c__DateTime_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  api_msgs__srv__DateTime_Response__init(message_memory);
}

void api_msgs__srv__DateTime_Response__rosidl_typesupport_introspection_c__DateTime_Response_fini_function(void * message_memory)
{
  api_msgs__srv__DateTime_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember api_msgs__srv__DateTime_Response__rosidl_typesupport_introspection_c__DateTime_Response_message_member_array[2] = {
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(api_msgs__srv__DateTime_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(api_msgs__srv__DateTime_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers api_msgs__srv__DateTime_Response__rosidl_typesupport_introspection_c__DateTime_Response_message_members = {
  "api_msgs__srv",  // message namespace
  "DateTime_Response",  // message name
  2,  // number of fields
  sizeof(api_msgs__srv__DateTime_Response),
  api_msgs__srv__DateTime_Response__rosidl_typesupport_introspection_c__DateTime_Response_message_member_array,  // message members
  api_msgs__srv__DateTime_Response__rosidl_typesupport_introspection_c__DateTime_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  api_msgs__srv__DateTime_Response__rosidl_typesupport_introspection_c__DateTime_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t api_msgs__srv__DateTime_Response__rosidl_typesupport_introspection_c__DateTime_Response_message_type_support_handle = {
  0,
  &api_msgs__srv__DateTime_Response__rosidl_typesupport_introspection_c__DateTime_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_api_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, api_msgs, srv, DateTime_Response)() {
  if (!api_msgs__srv__DateTime_Response__rosidl_typesupport_introspection_c__DateTime_Response_message_type_support_handle.typesupport_identifier) {
    api_msgs__srv__DateTime_Response__rosidl_typesupport_introspection_c__DateTime_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &api_msgs__srv__DateTime_Response__rosidl_typesupport_introspection_c__DateTime_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "api_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "api_msgs/srv/detail/date_time__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers api_msgs__srv__detail__date_time__rosidl_typesupport_introspection_c__DateTime_service_members = {
  "api_msgs__srv",  // service namespace
  "DateTime",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // api_msgs__srv__detail__date_time__rosidl_typesupport_introspection_c__DateTime_Request_message_type_support_handle,
  NULL  // response message
  // api_msgs__srv__detail__date_time__rosidl_typesupport_introspection_c__DateTime_Response_message_type_support_handle
};

static rosidl_service_type_support_t api_msgs__srv__detail__date_time__rosidl_typesupport_introspection_c__DateTime_service_type_support_handle = {
  0,
  &api_msgs__srv__detail__date_time__rosidl_typesupport_introspection_c__DateTime_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, api_msgs, srv, DateTime_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, api_msgs, srv, DateTime_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_api_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, api_msgs, srv, DateTime)() {
  if (!api_msgs__srv__detail__date_time__rosidl_typesupport_introspection_c__DateTime_service_type_support_handle.typesupport_identifier) {
    api_msgs__srv__detail__date_time__rosidl_typesupport_introspection_c__DateTime_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)api_msgs__srv__detail__date_time__rosidl_typesupport_introspection_c__DateTime_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, api_msgs, srv, DateTime_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, api_msgs, srv, DateTime_Response)()->data;
  }

  return &api_msgs__srv__detail__date_time__rosidl_typesupport_introspection_c__DateTime_service_type_support_handle;
}
