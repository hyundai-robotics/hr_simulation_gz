// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from api_msgs:srv/FileSend.idl
// generated code does not contain a copyright notice

#ifndef API_MSGS__SRV__DETAIL__FILE_SEND__FUNCTIONS_H_
#define API_MSGS__SRV__DETAIL__FILE_SEND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "api_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "api_msgs/srv/detail/file_send__struct.h"

/// Initialize srv/FileSend message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * api_msgs__srv__FileSend_Request
 * )) before or use
 * api_msgs__srv__FileSend_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
bool
api_msgs__srv__FileSend_Request__init(api_msgs__srv__FileSend_Request * msg);

/// Finalize srv/FileSend message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
void
api_msgs__srv__FileSend_Request__fini(api_msgs__srv__FileSend_Request * msg);

/// Create srv/FileSend message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * api_msgs__srv__FileSend_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
api_msgs__srv__FileSend_Request *
api_msgs__srv__FileSend_Request__create();

/// Destroy srv/FileSend message.
/**
 * It calls
 * api_msgs__srv__FileSend_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
void
api_msgs__srv__FileSend_Request__destroy(api_msgs__srv__FileSend_Request * msg);

/// Check for srv/FileSend message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
bool
api_msgs__srv__FileSend_Request__are_equal(const api_msgs__srv__FileSend_Request * lhs, const api_msgs__srv__FileSend_Request * rhs);

/// Copy a srv/FileSend message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
bool
api_msgs__srv__FileSend_Request__copy(
  const api_msgs__srv__FileSend_Request * input,
  api_msgs__srv__FileSend_Request * output);

/// Initialize array of srv/FileSend messages.
/**
 * It allocates the memory for the number of elements and calls
 * api_msgs__srv__FileSend_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
bool
api_msgs__srv__FileSend_Request__Sequence__init(api_msgs__srv__FileSend_Request__Sequence * array, size_t size);

/// Finalize array of srv/FileSend messages.
/**
 * It calls
 * api_msgs__srv__FileSend_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
void
api_msgs__srv__FileSend_Request__Sequence__fini(api_msgs__srv__FileSend_Request__Sequence * array);

/// Create array of srv/FileSend messages.
/**
 * It allocates the memory for the array and calls
 * api_msgs__srv__FileSend_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
api_msgs__srv__FileSend_Request__Sequence *
api_msgs__srv__FileSend_Request__Sequence__create(size_t size);

/// Destroy array of srv/FileSend messages.
/**
 * It calls
 * api_msgs__srv__FileSend_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
void
api_msgs__srv__FileSend_Request__Sequence__destroy(api_msgs__srv__FileSend_Request__Sequence * array);

/// Check for srv/FileSend message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
bool
api_msgs__srv__FileSend_Request__Sequence__are_equal(const api_msgs__srv__FileSend_Request__Sequence * lhs, const api_msgs__srv__FileSend_Request__Sequence * rhs);

/// Copy an array of srv/FileSend messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
bool
api_msgs__srv__FileSend_Request__Sequence__copy(
  const api_msgs__srv__FileSend_Request__Sequence * input,
  api_msgs__srv__FileSend_Request__Sequence * output);

/// Initialize srv/FileSend message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * api_msgs__srv__FileSend_Response
 * )) before or use
 * api_msgs__srv__FileSend_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
bool
api_msgs__srv__FileSend_Response__init(api_msgs__srv__FileSend_Response * msg);

/// Finalize srv/FileSend message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
void
api_msgs__srv__FileSend_Response__fini(api_msgs__srv__FileSend_Response * msg);

/// Create srv/FileSend message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * api_msgs__srv__FileSend_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
api_msgs__srv__FileSend_Response *
api_msgs__srv__FileSend_Response__create();

/// Destroy srv/FileSend message.
/**
 * It calls
 * api_msgs__srv__FileSend_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
void
api_msgs__srv__FileSend_Response__destroy(api_msgs__srv__FileSend_Response * msg);

/// Check for srv/FileSend message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
bool
api_msgs__srv__FileSend_Response__are_equal(const api_msgs__srv__FileSend_Response * lhs, const api_msgs__srv__FileSend_Response * rhs);

/// Copy a srv/FileSend message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
bool
api_msgs__srv__FileSend_Response__copy(
  const api_msgs__srv__FileSend_Response * input,
  api_msgs__srv__FileSend_Response * output);

/// Initialize array of srv/FileSend messages.
/**
 * It allocates the memory for the number of elements and calls
 * api_msgs__srv__FileSend_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
bool
api_msgs__srv__FileSend_Response__Sequence__init(api_msgs__srv__FileSend_Response__Sequence * array, size_t size);

/// Finalize array of srv/FileSend messages.
/**
 * It calls
 * api_msgs__srv__FileSend_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
void
api_msgs__srv__FileSend_Response__Sequence__fini(api_msgs__srv__FileSend_Response__Sequence * array);

/// Create array of srv/FileSend messages.
/**
 * It allocates the memory for the array and calls
 * api_msgs__srv__FileSend_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
api_msgs__srv__FileSend_Response__Sequence *
api_msgs__srv__FileSend_Response__Sequence__create(size_t size);

/// Destroy array of srv/FileSend messages.
/**
 * It calls
 * api_msgs__srv__FileSend_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
void
api_msgs__srv__FileSend_Response__Sequence__destroy(api_msgs__srv__FileSend_Response__Sequence * array);

/// Check for srv/FileSend message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
bool
api_msgs__srv__FileSend_Response__Sequence__are_equal(const api_msgs__srv__FileSend_Response__Sequence * lhs, const api_msgs__srv__FileSend_Response__Sequence * rhs);

/// Copy an array of srv/FileSend messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_api_msgs
bool
api_msgs__srv__FileSend_Response__Sequence__copy(
  const api_msgs__srv__FileSend_Response__Sequence * input,
  api_msgs__srv__FileSend_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // API_MSGS__SRV__DETAIL__FILE_SEND__FUNCTIONS_H_
