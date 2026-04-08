#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from my_robot_action_pkg.action import DoTask
import time

class DoTaskActionServer(Node):
    def __init__(self):
        super().__init__('do_task_action_server')
        self._action_server = ActionServer(
            self,
            DoTask,
            'do_task',
            self.execute_callback
        )
        self.get_logger().info("Action Server is ready!")

    async def execute_callback(self, goal_handle):
        self.get_logger().info(f"Processing task for {goal_handle.request.task_duration} seconds...")

        feedback_msg = DoTask.Feedback()
        total_duration = goal_handle.request.task_duration

        for i in range(1, 11):
            # Check for cancellation requests
            if goal_handle.is_cancel_requested:
                goal_handle.canceled()
                self.get_logger().info('Goal canceled')
                return DoTask.Result(success=False, message="Task was canceled")

            feedback_msg.progress = float(i * 10) # Using percentage as a float
            self.get_logger().info(f"Progress: {feedback_msg.progress}%")
            goal_handle.publish_feedback(feedback_msg)
            
            # CRITICAL: Use the node's sleep or asyncio.sleep in an async callback
            # time.sleep() blocks the entire thread, preventing other callbacks from running
            time.sleep(total_duration / 10.0) 

        # Complete the action
        goal_handle.succeed()
        
        result = DoTask.Result()
        result.success = True
        result.message = "Task completed successfully!"
        return result

def main(args=None):
    rclpy.init(args=args)
    node = DoTaskActionServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()