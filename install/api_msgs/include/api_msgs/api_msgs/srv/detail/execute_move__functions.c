// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from api_msgs:srv/ExecuteMove.idl
// generated code does not contain a copyright notice
#include "api_msgs/srv/detail/execute_move__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `stmt`
#include "rosidl_runtime_c/string_functions.h"

bool
api_msgs__srv__ExecuteMove_Request__init(api_msgs__srv__ExecuteMove_Request * msg)
{
  if (!msg) {
    return false;
  }
  // task_no
  // stmt
  if (!rosidl_runtime_c__String__init(&msg->stmt)) {
    api_msgs__srv__ExecuteMove_Request__fini(msg);
    return false;
  }
  return true;
}

void
api_msgs__srv__ExecuteMove_Request__fini(api_msgs__srv__ExecuteMove_Request * msg)
{
  if (!msg) {
    return;
  }
  // task_no
  // stmt
  rosidl_runtime_c__String__fini(&msg->stmt);
}

bool
api_msgs__srv__ExecuteMove_Request__are_equal(const api_msgs__srv__ExecuteMove_Request * lhs, const api_msgs__srv__ExecuteMove_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_no
  if (lhs->task_no != rhs->task_no) {
    return false;
  }
  // stmt
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->stmt), &(rhs->stmt)))
  {
    return false;
  }
  return true;
}

bool
api_msgs__srv__ExecuteMove_Request__copy(
  const api_msgs__srv__ExecuteMove_Request * input,
  api_msgs__srv__ExecuteMove_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // task_no
  output->task_no = input->task_no;
  // stmt
  if (!rosidl_runtime_c__String__copy(
      &(input->stmt), &(output->stmt)))
  {
    return false;
  }
  return true;
}

api_msgs__srv__ExecuteMove_Request *
api_msgs__srv__ExecuteMove_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  api_msgs__srv__ExecuteMove_Request * msg = (api_msgs__srv__ExecuteMove_Request *)allocator.allocate(sizeof(api_msgs__srv__ExecuteMove_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(api_msgs__srv__ExecuteMove_Request));
  bool success = api_msgs__srv__ExecuteMove_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
api_msgs__srv__ExecuteMove_Request__destroy(api_msgs__srv__ExecuteMove_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    api_msgs__srv__ExecuteMove_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
api_msgs__srv__ExecuteMove_Request__Sequence__init(api_msgs__srv__ExecuteMove_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  api_msgs__srv__ExecuteMove_Request * data = NULL;

  if (size) {
    data = (api_msgs__srv__ExecuteMove_Request *)allocator.zero_allocate(size, sizeof(api_msgs__srv__ExecuteMove_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = api_msgs__srv__ExecuteMove_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        api_msgs__srv__ExecuteMove_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
api_msgs__srv__ExecuteMove_Request__Sequence__fini(api_msgs__srv__ExecuteMove_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      api_msgs__srv__ExecuteMove_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

api_msgs__srv__ExecuteMove_Request__Sequence *
api_msgs__srv__ExecuteMove_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  api_msgs__srv__ExecuteMove_Request__Sequence * array = (api_msgs__srv__ExecuteMove_Request__Sequence *)allocator.allocate(sizeof(api_msgs__srv__ExecuteMove_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = api_msgs__srv__ExecuteMove_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
api_msgs__srv__ExecuteMove_Request__Sequence__destroy(api_msgs__srv__ExecuteMove_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    api_msgs__srv__ExecuteMove_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
api_msgs__srv__ExecuteMove_Request__Sequence__are_equal(const api_msgs__srv__ExecuteMove_Request__Sequence * lhs, const api_msgs__srv__ExecuteMove_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!api_msgs__srv__ExecuteMove_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
api_msgs__srv__ExecuteMove_Request__Sequence__copy(
  const api_msgs__srv__ExecuteMove_Request__Sequence * input,
  api_msgs__srv__ExecuteMove_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(api_msgs__srv__ExecuteMove_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    api_msgs__srv__ExecuteMove_Request * data =
      (api_msgs__srv__ExecuteMove_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!api_msgs__srv__ExecuteMove_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          api_msgs__srv__ExecuteMove_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!api_msgs__srv__ExecuteMove_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
api_msgs__srv__ExecuteMove_Response__init(api_msgs__srv__ExecuteMove_Response * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    api_msgs__srv__ExecuteMove_Response__fini(msg);
    return false;
  }
  // success
  return true;
}

void
api_msgs__srv__ExecuteMove_Response__fini(api_msgs__srv__ExecuteMove_Response * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // success
}

bool
api_msgs__srv__ExecuteMove_Response__are_equal(const api_msgs__srv__ExecuteMove_Response * lhs, const api_msgs__srv__ExecuteMove_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
api_msgs__srv__ExecuteMove_Response__copy(
  const api_msgs__srv__ExecuteMove_Response * input,
  api_msgs__srv__ExecuteMove_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

api_msgs__srv__ExecuteMove_Response *
api_msgs__srv__ExecuteMove_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  api_msgs__srv__ExecuteMove_Response * msg = (api_msgs__srv__ExecuteMove_Response *)allocator.allocate(sizeof(api_msgs__srv__ExecuteMove_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(api_msgs__srv__ExecuteMove_Response));
  bool success = api_msgs__srv__ExecuteMove_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
api_msgs__srv__ExecuteMove_Response__destroy(api_msgs__srv__ExecuteMove_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    api_msgs__srv__ExecuteMove_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
api_msgs__srv__ExecuteMove_Response__Sequence__init(api_msgs__srv__ExecuteMove_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  api_msgs__srv__ExecuteMove_Response * data = NULL;

  if (size) {
    data = (api_msgs__srv__ExecuteMove_Response *)allocator.zero_allocate(size, sizeof(api_msgs__srv__ExecuteMove_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = api_msgs__srv__ExecuteMove_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        api_msgs__srv__ExecuteMove_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
api_msgs__srv__ExecuteMove_Response__Sequence__fini(api_msgs__srv__ExecuteMove_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      api_msgs__srv__ExecuteMove_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

api_msgs__srv__ExecuteMove_Response__Sequence *
api_msgs__srv__ExecuteMove_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  api_msgs__srv__ExecuteMove_Response__Sequence * array = (api_msgs__srv__ExecuteMove_Response__Sequence *)allocator.allocate(sizeof(api_msgs__srv__ExecuteMove_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = api_msgs__srv__ExecuteMove_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
api_msgs__srv__ExecuteMove_Response__Sequence__destroy(api_msgs__srv__ExecuteMove_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    api_msgs__srv__ExecuteMove_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
api_msgs__srv__ExecuteMove_Response__Sequence__are_equal(const api_msgs__srv__ExecuteMove_Response__Sequence * lhs, const api_msgs__srv__ExecuteMove_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!api_msgs__srv__ExecuteMove_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
api_msgs__srv__ExecuteMove_Response__Sequence__copy(
  const api_msgs__srv__ExecuteMove_Response__Sequence * input,
  api_msgs__srv__ExecuteMove_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(api_msgs__srv__ExecuteMove_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    api_msgs__srv__ExecuteMove_Response * data =
      (api_msgs__srv__ExecuteMove_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!api_msgs__srv__ExecuteMove_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          api_msgs__srv__ExecuteMove_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!api_msgs__srv__ExecuteMove_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
