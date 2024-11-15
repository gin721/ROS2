// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from task3:srv/Custom.idl
// generated code does not contain a copyright notice
#include "task3/srv/detail/custom__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
task3__srv__Custom_Request__init(task3__srv__Custom_Request * msg)
{
  if (!msg) {
    return false;
  }
  // request
  return true;
}

void
task3__srv__Custom_Request__fini(task3__srv__Custom_Request * msg)
{
  if (!msg) {
    return;
  }
  // request
}

bool
task3__srv__Custom_Request__are_equal(const task3__srv__Custom_Request * lhs, const task3__srv__Custom_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (lhs->request != rhs->request) {
    return false;
  }
  return true;
}

bool
task3__srv__Custom_Request__copy(
  const task3__srv__Custom_Request * input,
  task3__srv__Custom_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  output->request = input->request;
  return true;
}

task3__srv__Custom_Request *
task3__srv__Custom_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task3__srv__Custom_Request * msg = (task3__srv__Custom_Request *)allocator.allocate(sizeof(task3__srv__Custom_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task3__srv__Custom_Request));
  bool success = task3__srv__Custom_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task3__srv__Custom_Request__destroy(task3__srv__Custom_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task3__srv__Custom_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task3__srv__Custom_Request__Sequence__init(task3__srv__Custom_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task3__srv__Custom_Request * data = NULL;

  if (size) {
    data = (task3__srv__Custom_Request *)allocator.zero_allocate(size, sizeof(task3__srv__Custom_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task3__srv__Custom_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task3__srv__Custom_Request__fini(&data[i - 1]);
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
task3__srv__Custom_Request__Sequence__fini(task3__srv__Custom_Request__Sequence * array)
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
      task3__srv__Custom_Request__fini(&array->data[i]);
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

task3__srv__Custom_Request__Sequence *
task3__srv__Custom_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task3__srv__Custom_Request__Sequence * array = (task3__srv__Custom_Request__Sequence *)allocator.allocate(sizeof(task3__srv__Custom_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task3__srv__Custom_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task3__srv__Custom_Request__Sequence__destroy(task3__srv__Custom_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task3__srv__Custom_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task3__srv__Custom_Request__Sequence__are_equal(const task3__srv__Custom_Request__Sequence * lhs, const task3__srv__Custom_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task3__srv__Custom_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task3__srv__Custom_Request__Sequence__copy(
  const task3__srv__Custom_Request__Sequence * input,
  task3__srv__Custom_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task3__srv__Custom_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task3__srv__Custom_Request * data =
      (task3__srv__Custom_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task3__srv__Custom_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task3__srv__Custom_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task3__srv__Custom_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `response`
#include "rosidl_runtime_c/string_functions.h"

bool
task3__srv__Custom_Response__init(task3__srv__Custom_Response * msg)
{
  if (!msg) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__init(&msg->response)) {
    task3__srv__Custom_Response__fini(msg);
    return false;
  }
  return true;
}

void
task3__srv__Custom_Response__fini(task3__srv__Custom_Response * msg)
{
  if (!msg) {
    return;
  }
  // response
  rosidl_runtime_c__String__fini(&msg->response);
}

bool
task3__srv__Custom_Response__are_equal(const task3__srv__Custom_Response * lhs, const task3__srv__Custom_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
task3__srv__Custom_Response__copy(
  const task3__srv__Custom_Response * input,
  task3__srv__Custom_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // response
  if (!rosidl_runtime_c__String__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

task3__srv__Custom_Response *
task3__srv__Custom_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task3__srv__Custom_Response * msg = (task3__srv__Custom_Response *)allocator.allocate(sizeof(task3__srv__Custom_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(task3__srv__Custom_Response));
  bool success = task3__srv__Custom_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
task3__srv__Custom_Response__destroy(task3__srv__Custom_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    task3__srv__Custom_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
task3__srv__Custom_Response__Sequence__init(task3__srv__Custom_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task3__srv__Custom_Response * data = NULL;

  if (size) {
    data = (task3__srv__Custom_Response *)allocator.zero_allocate(size, sizeof(task3__srv__Custom_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = task3__srv__Custom_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        task3__srv__Custom_Response__fini(&data[i - 1]);
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
task3__srv__Custom_Response__Sequence__fini(task3__srv__Custom_Response__Sequence * array)
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
      task3__srv__Custom_Response__fini(&array->data[i]);
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

task3__srv__Custom_Response__Sequence *
task3__srv__Custom_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  task3__srv__Custom_Response__Sequence * array = (task3__srv__Custom_Response__Sequence *)allocator.allocate(sizeof(task3__srv__Custom_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = task3__srv__Custom_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
task3__srv__Custom_Response__Sequence__destroy(task3__srv__Custom_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    task3__srv__Custom_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
task3__srv__Custom_Response__Sequence__are_equal(const task3__srv__Custom_Response__Sequence * lhs, const task3__srv__Custom_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!task3__srv__Custom_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
task3__srv__Custom_Response__Sequence__copy(
  const task3__srv__Custom_Response__Sequence * input,
  task3__srv__Custom_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(task3__srv__Custom_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    task3__srv__Custom_Response * data =
      (task3__srv__Custom_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!task3__srv__Custom_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          task3__srv__Custom_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!task3__srv__Custom_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
