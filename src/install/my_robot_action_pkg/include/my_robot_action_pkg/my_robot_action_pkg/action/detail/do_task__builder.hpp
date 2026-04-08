// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_robot_action_pkg:action/DoTask.idl
// generated code does not contain a copyright notice

#ifndef MY_ROBOT_ACTION_PKG__ACTION__DETAIL__DO_TASK__BUILDER_HPP_
#define MY_ROBOT_ACTION_PKG__ACTION__DETAIL__DO_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "my_robot_action_pkg/action/detail/do_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace my_robot_action_pkg
{

namespace action
{

namespace builder
{

class Init_DoTask_Goal_task_duration
{
public:
  Init_DoTask_Goal_task_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_action_pkg::action::DoTask_Goal task_duration(::my_robot_action_pkg::action::DoTask_Goal::_task_duration_type arg)
  {
    msg_.task_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action_pkg::action::DoTask_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action_pkg::action::DoTask_Goal>()
{
  return my_robot_action_pkg::action::builder::Init_DoTask_Goal_task_duration();
}

}  // namespace my_robot_action_pkg


namespace my_robot_action_pkg
{

namespace action
{

namespace builder
{

class Init_DoTask_Result_message
{
public:
  explicit Init_DoTask_Result_message(::my_robot_action_pkg::action::DoTask_Result & msg)
  : msg_(msg)
  {}
  ::my_robot_action_pkg::action::DoTask_Result message(::my_robot_action_pkg::action::DoTask_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action_pkg::action::DoTask_Result msg_;
};

class Init_DoTask_Result_success
{
public:
  Init_DoTask_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoTask_Result_message success(::my_robot_action_pkg::action::DoTask_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DoTask_Result_message(msg_);
  }

private:
  ::my_robot_action_pkg::action::DoTask_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action_pkg::action::DoTask_Result>()
{
  return my_robot_action_pkg::action::builder::Init_DoTask_Result_success();
}

}  // namespace my_robot_action_pkg


namespace my_robot_action_pkg
{

namespace action
{

namespace builder
{

class Init_DoTask_Feedback_progress
{
public:
  Init_DoTask_Feedback_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_action_pkg::action::DoTask_Feedback progress(::my_robot_action_pkg::action::DoTask_Feedback::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action_pkg::action::DoTask_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action_pkg::action::DoTask_Feedback>()
{
  return my_robot_action_pkg::action::builder::Init_DoTask_Feedback_progress();
}

}  // namespace my_robot_action_pkg


namespace my_robot_action_pkg
{

namespace action
{

namespace builder
{

class Init_DoTask_SendGoal_Request_goal
{
public:
  explicit Init_DoTask_SendGoal_Request_goal(::my_robot_action_pkg::action::DoTask_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::my_robot_action_pkg::action::DoTask_SendGoal_Request goal(::my_robot_action_pkg::action::DoTask_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action_pkg::action::DoTask_SendGoal_Request msg_;
};

class Init_DoTask_SendGoal_Request_goal_id
{
public:
  Init_DoTask_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoTask_SendGoal_Request_goal goal_id(::my_robot_action_pkg::action::DoTask_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DoTask_SendGoal_Request_goal(msg_);
  }

private:
  ::my_robot_action_pkg::action::DoTask_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action_pkg::action::DoTask_SendGoal_Request>()
{
  return my_robot_action_pkg::action::builder::Init_DoTask_SendGoal_Request_goal_id();
}

}  // namespace my_robot_action_pkg


namespace my_robot_action_pkg
{

namespace action
{

namespace builder
{

class Init_DoTask_SendGoal_Response_stamp
{
public:
  explicit Init_DoTask_SendGoal_Response_stamp(::my_robot_action_pkg::action::DoTask_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::my_robot_action_pkg::action::DoTask_SendGoal_Response stamp(::my_robot_action_pkg::action::DoTask_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action_pkg::action::DoTask_SendGoal_Response msg_;
};

class Init_DoTask_SendGoal_Response_accepted
{
public:
  Init_DoTask_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoTask_SendGoal_Response_stamp accepted(::my_robot_action_pkg::action::DoTask_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DoTask_SendGoal_Response_stamp(msg_);
  }

private:
  ::my_robot_action_pkg::action::DoTask_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action_pkg::action::DoTask_SendGoal_Response>()
{
  return my_robot_action_pkg::action::builder::Init_DoTask_SendGoal_Response_accepted();
}

}  // namespace my_robot_action_pkg


namespace my_robot_action_pkg
{

namespace action
{

namespace builder
{

class Init_DoTask_GetResult_Request_goal_id
{
public:
  Init_DoTask_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::my_robot_action_pkg::action::DoTask_GetResult_Request goal_id(::my_robot_action_pkg::action::DoTask_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action_pkg::action::DoTask_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action_pkg::action::DoTask_GetResult_Request>()
{
  return my_robot_action_pkg::action::builder::Init_DoTask_GetResult_Request_goal_id();
}

}  // namespace my_robot_action_pkg


namespace my_robot_action_pkg
{

namespace action
{

namespace builder
{

class Init_DoTask_GetResult_Response_result
{
public:
  explicit Init_DoTask_GetResult_Response_result(::my_robot_action_pkg::action::DoTask_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::my_robot_action_pkg::action::DoTask_GetResult_Response result(::my_robot_action_pkg::action::DoTask_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action_pkg::action::DoTask_GetResult_Response msg_;
};

class Init_DoTask_GetResult_Response_status
{
public:
  Init_DoTask_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoTask_GetResult_Response_result status(::my_robot_action_pkg::action::DoTask_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DoTask_GetResult_Response_result(msg_);
  }

private:
  ::my_robot_action_pkg::action::DoTask_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action_pkg::action::DoTask_GetResult_Response>()
{
  return my_robot_action_pkg::action::builder::Init_DoTask_GetResult_Response_status();
}

}  // namespace my_robot_action_pkg


namespace my_robot_action_pkg
{

namespace action
{

namespace builder
{

class Init_DoTask_FeedbackMessage_feedback
{
public:
  explicit Init_DoTask_FeedbackMessage_feedback(::my_robot_action_pkg::action::DoTask_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::my_robot_action_pkg::action::DoTask_FeedbackMessage feedback(::my_robot_action_pkg::action::DoTask_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_robot_action_pkg::action::DoTask_FeedbackMessage msg_;
};

class Init_DoTask_FeedbackMessage_goal_id
{
public:
  Init_DoTask_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoTask_FeedbackMessage_feedback goal_id(::my_robot_action_pkg::action::DoTask_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DoTask_FeedbackMessage_feedback(msg_);
  }

private:
  ::my_robot_action_pkg::action::DoTask_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_robot_action_pkg::action::DoTask_FeedbackMessage>()
{
  return my_robot_action_pkg::action::builder::Init_DoTask_FeedbackMessage_goal_id();
}

}  // namespace my_robot_action_pkg

#endif  // MY_ROBOT_ACTION_PKG__ACTION__DETAIL__DO_TASK__BUILDER_HPP_
