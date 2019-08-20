// Generated by gencpp from file turtlebot3_example/Turtlebot3Action.msg
// DO NOT EDIT!


#ifndef TURTLEBOT3_EXAMPLE_MESSAGE_TURTLEBOT3ACTION_H
#define TURTLEBOT3_EXAMPLE_MESSAGE_TURTLEBOT3ACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <turtlebot3_example/Turtlebot3ActionGoal.h>
#include <turtlebot3_example/Turtlebot3ActionResult.h>
#include <turtlebot3_example/Turtlebot3ActionFeedback.h>

namespace turtlebot3_example
{
template <class ContainerAllocator>
struct Turtlebot3Action_
{
  typedef Turtlebot3Action_<ContainerAllocator> Type;

  Turtlebot3Action_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  Turtlebot3Action_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::turtlebot3_example::Turtlebot3ActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::turtlebot3_example::Turtlebot3ActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::turtlebot3_example::Turtlebot3ActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;





  typedef boost::shared_ptr< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> const> ConstPtr;

}; // struct Turtlebot3Action_

typedef ::turtlebot3_example::Turtlebot3Action_<std::allocator<void> > Turtlebot3Action;

typedef boost::shared_ptr< ::turtlebot3_example::Turtlebot3Action > Turtlebot3ActionPtr;
typedef boost::shared_ptr< ::turtlebot3_example::Turtlebot3Action const> Turtlebot3ActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace turtlebot3_example

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'turtlebot3_example': ['/home/sylar257/catkin_ws/devel/share/turtlebot3_example/msg'], 'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> >
{
  static const char* value()
  {
    return "86a69578ab4eb5bb3e55984730f14503";
  }

  static const char* value(const ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x86a69578ab4eb5bbULL;
  static const uint64_t static_value2 = 0x3e55984730f14503ULL;
};

template<class ContainerAllocator>
struct DataType< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> >
{
  static const char* value()
  {
    return "turtlebot3_example/Turtlebot3Action";
  }

  static const char* value(const ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Turtlebot3ActionGoal action_goal\n"
"Turtlebot3ActionResult action_result\n"
"Turtlebot3ActionFeedback action_feedback\n"
"\n"
"================================================================================\n"
"MSG: turtlebot3_example/Turtlebot3ActionGoal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalID goal_id\n"
"Turtlebot3Goal goal\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: turtlebot3_example/Turtlebot3Goal\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the goal\n"
"geometry_msgs/Vector3 goal\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: turtlebot3_example/Turtlebot3ActionResult\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"Turtlebot3Result result\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
"\n"
"================================================================================\n"
"MSG: turtlebot3_example/Turtlebot3Result\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define the result\n"
"string result\n"
"\n"
"================================================================================\n"
"MSG: turtlebot3_example/Turtlebot3ActionFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"Turtlebot3Feedback feedback\n"
"\n"
"================================================================================\n"
"MSG: turtlebot3_example/Turtlebot3Feedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# Define a feedback message\n"
"string state\n"
"\n"
;
  }

  static const char* value(const ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Turtlebot3Action_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::turtlebot3_example::Turtlebot3Action_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::turtlebot3_example::Turtlebot3ActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::turtlebot3_example::Turtlebot3ActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::turtlebot3_example::Turtlebot3ActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TURTLEBOT3_EXAMPLE_MESSAGE_TURTLEBOT3ACTION_H
