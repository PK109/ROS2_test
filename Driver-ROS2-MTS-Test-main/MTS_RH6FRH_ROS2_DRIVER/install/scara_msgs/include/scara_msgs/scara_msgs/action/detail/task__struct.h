// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from scara_msgs:action/Task.idl
// generated code does not contain a copyright notice

#ifndef SCARA_MSGS__ACTION__DETAIL__TASK__STRUCT_H_
#define SCARA_MSGS__ACTION__DETAIL__TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Task in the package scara_msgs.
typedef struct scara_msgs__action__Task_Goal
{
  int32_t task_number;
} scara_msgs__action__Task_Goal;

// Struct for a sequence of scara_msgs__action__Task_Goal.
typedef struct scara_msgs__action__Task_Goal__Sequence
{
  scara_msgs__action__Task_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_msgs__action__Task_Goal__Sequence;


// Constants defined in the message

/// Struct defined in action/Task in the package scara_msgs.
typedef struct scara_msgs__action__Task_Result
{
  bool success;
} scara_msgs__action__Task_Result;

// Struct for a sequence of scara_msgs__action__Task_Result.
typedef struct scara_msgs__action__Task_Result__Sequence
{
  scara_msgs__action__Task_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_msgs__action__Task_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/Task in the package scara_msgs.
typedef struct scara_msgs__action__Task_Feedback
{
  int32_t percentage;
} scara_msgs__action__Task_Feedback;

// Struct for a sequence of scara_msgs__action__Task_Feedback.
typedef struct scara_msgs__action__Task_Feedback__Sequence
{
  scara_msgs__action__Task_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_msgs__action__Task_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "scara_msgs/action/detail/task__struct.h"

/// Struct defined in action/Task in the package scara_msgs.
typedef struct scara_msgs__action__Task_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  scara_msgs__action__Task_Goal goal;
} scara_msgs__action__Task_SendGoal_Request;

// Struct for a sequence of scara_msgs__action__Task_SendGoal_Request.
typedef struct scara_msgs__action__Task_SendGoal_Request__Sequence
{
  scara_msgs__action__Task_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_msgs__action__Task_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Task in the package scara_msgs.
typedef struct scara_msgs__action__Task_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} scara_msgs__action__Task_SendGoal_Response;

// Struct for a sequence of scara_msgs__action__Task_SendGoal_Response.
typedef struct scara_msgs__action__Task_SendGoal_Response__Sequence
{
  scara_msgs__action__Task_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_msgs__action__Task_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Task in the package scara_msgs.
typedef struct scara_msgs__action__Task_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} scara_msgs__action__Task_GetResult_Request;

// Struct for a sequence of scara_msgs__action__Task_GetResult_Request.
typedef struct scara_msgs__action__Task_GetResult_Request__Sequence
{
  scara_msgs__action__Task_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_msgs__action__Task_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "scara_msgs/action/detail/task__struct.h"

/// Struct defined in action/Task in the package scara_msgs.
typedef struct scara_msgs__action__Task_GetResult_Response
{
  int8_t status;
  scara_msgs__action__Task_Result result;
} scara_msgs__action__Task_GetResult_Response;

// Struct for a sequence of scara_msgs__action__Task_GetResult_Response.
typedef struct scara_msgs__action__Task_GetResult_Response__Sequence
{
  scara_msgs__action__Task_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_msgs__action__Task_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "scara_msgs/action/detail/task__struct.h"

/// Struct defined in action/Task in the package scara_msgs.
typedef struct scara_msgs__action__Task_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  scara_msgs__action__Task_Feedback feedback;
} scara_msgs__action__Task_FeedbackMessage;

// Struct for a sequence of scara_msgs__action__Task_FeedbackMessage.
typedef struct scara_msgs__action__Task_FeedbackMessage__Sequence
{
  scara_msgs__action__Task_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} scara_msgs__action__Task_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCARA_MSGS__ACTION__DETAIL__TASK__STRUCT_H_
