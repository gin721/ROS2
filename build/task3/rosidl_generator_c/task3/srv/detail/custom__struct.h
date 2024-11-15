// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from task3:srv/Custom.idl
// generated code does not contain a copyright notice

#ifndef TASK3__SRV__DETAIL__CUSTOM__STRUCT_H_
#define TASK3__SRV__DETAIL__CUSTOM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Custom in the package task3.
typedef struct task3__srv__Custom_Request
{
  int32_t request;
} task3__srv__Custom_Request;

// Struct for a sequence of task3__srv__Custom_Request.
typedef struct task3__srv__Custom_Request__Sequence
{
  task3__srv__Custom_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task3__srv__Custom_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/Custom in the package task3.
typedef struct task3__srv__Custom_Response
{
  rosidl_runtime_c__String response;
} task3__srv__Custom_Response;

// Struct for a sequence of task3__srv__Custom_Response.
typedef struct task3__srv__Custom_Response__Sequence
{
  task3__srv__Custom_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} task3__srv__Custom_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TASK3__SRV__DETAIL__CUSTOM__STRUCT_H_