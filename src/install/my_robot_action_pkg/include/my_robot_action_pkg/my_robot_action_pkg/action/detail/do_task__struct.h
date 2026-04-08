// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_robot_action_pkg:action/DoTask.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_ACTION_PKG__ACTION__DETAIL__DO_TASK__STRUCT_H_
#define MY_ROBOT_ACTION_PKG__ACTION__DETAIL__DO_TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/DoTask in the package my_robot_action_pkg.
typedef struct my_robot_action_pkg__action__DoTask_Goal
{
  int32_t task_duration;
} my_robot_action_pkg__action__DoTask_Goal;

// Struct for a sequence of my_robot_action_pkg__action__DoTask_Goal.
typedef struct my_robot_action_pkg__action__DoTask_Goal__Sequence
{
  my_robot_action_pkg__action__DoTask_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_action_pkg__action__DoTask_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/DoTask in the package my_robot_action_pkg.
typedef struct my_robot_action_pkg__action__DoTask_Result
{
  bool success;
  rosidl_runtime_c__String message;
} my_robot_action_pkg__action__DoTask_Result;

// Struct for a sequence of my_robot_action_pkg__action__DoTask_Result.
typedef struct my_robot_action_pkg__action__DoTask_Result__Sequence
{
  my_robot_action_pkg__action__DoTask_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_action_pkg__action__DoTask_Result__Sequence;


// Constants defined in the message

/// Struct defined in action/DoTask in the package my_robot_action_pkg.
typedef struct my_robot_action_pkg__action__DoTask_Feedback
{
  float progress;
} my_robot_action_pkg__action__DoTask_Feedback;

// Struct for a sequence of my_robot_action_pkg__action__DoTask_Feedback.
typedef struct my_robot_action_pkg__action__DoTask_Feedback__Sequence
{
  my_robot_action_pkg__action__DoTask_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_action_pkg__action__DoTask_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "my_robot_action_pkg/action/detail/do_task__struct.h"

/// Struct defined in action/DoTask in the package my_robot_action_pkg.
typedef struct my_robot_action_pkg__action__DoTask_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_robot_action_pkg__action__DoTask_Goal goal;
} my_robot_action_pkg__action__DoTask_SendGoal_Request;

// Struct for a sequence of my_robot_action_pkg__action__DoTask_SendGoal_Request.
typedef struct my_robot_action_pkg__action__DoTask_SendGoal_Request__Sequence
{
  my_robot_action_pkg__action__DoTask_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_action_pkg__action__DoTask_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DoTask in the package my_robot_action_pkg.
typedef struct my_robot_action_pkg__action__DoTask_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} my_robot_action_pkg__action__DoTask_SendGoal_Response;

// Struct for a sequence of my_robot_action_pkg__action__DoTask_SendGoal_Response.
typedef struct my_robot_action_pkg__action__DoTask_SendGoal_Response__Sequence
{
  my_robot_action_pkg__action__DoTask_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_action_pkg__action__DoTask_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DoTask in the package my_robot_action_pkg.
typedef struct my_robot_action_pkg__action__DoTask_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} my_robot_action_pkg__action__DoTask_GetResult_Request;

// Struct for a sequence of my_robot_action_pkg__action__DoTask_GetResult_Request.
typedef struct my_robot_action_pkg__action__DoTask_GetResult_Request__Sequence
{
  my_robot_action_pkg__action__DoTask_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_action_pkg__action__DoTask_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "my_robot_action_pkg/action/detail/do_task__struct.h"

/// Struct defined in action/DoTask in the package my_robot_action_pkg.
typedef struct my_robot_action_pkg__action__DoTask_GetResult_Response
{
  int8_t status;
  my_robot_action_pkg__action__DoTask_Result result;
} my_robot_action_pkg__action__DoTask_GetResult_Response;

// Struct for a sequence of my_robot_action_pkg__action__DoTask_GetResult_Response.
typedef struct my_robot_action_pkg__action__DoTask_GetResult_Response__Sequence
{
  my_robot_action_pkg__action__DoTask_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_action_pkg__action__DoTask_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "my_robot_action_pkg/action/detail/do_task__struct.h"

/// Struct defined in action/DoTask in the package my_robot_action_pkg.
typedef struct my_robot_action_pkg__action__DoTask_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  my_robot_action_pkg__action__DoTask_Feedback feedback;
} my_robot_action_pkg__action__DoTask_FeedbackMessage;

// Struct for a sequence of my_robot_action_pkg__action__DoTask_FeedbackMessage.
typedef struct my_robot_action_pkg__action__DoTask_FeedbackMessage__Sequence
{
  my_robot_action_pkg__action__DoTask_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_robot_action_pkg__action__DoTask_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_ROBOT_ACTION_PKG__ACTION__DETAIL__DO_TASK__STRUCT_H_
