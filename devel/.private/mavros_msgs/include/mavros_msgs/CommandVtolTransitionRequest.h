// Generated by gencpp from file mavros_msgs/CommandVtolTransitionRequest.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_COMMANDVTOLTRANSITIONREQUEST_H
#define MAVROS_MSGS_MESSAGE_COMMANDVTOLTRANSITIONREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct CommandVtolTransitionRequest_
{
  typedef CommandVtolTransitionRequest_<ContainerAllocator> Type;

  CommandVtolTransitionRequest_()
    : header()
    , state(0)  {
    }
  CommandVtolTransitionRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , state(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _state_type;
  _state_type state;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(STATE_MC)
  #undef STATE_MC
#endif
#if defined(_WIN32) && defined(STATE_FW)
  #undef STATE_FW
#endif

  enum {
    STATE_MC = 3u,
    STATE_FW = 4u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct CommandVtolTransitionRequest_

typedef ::mavros_msgs::CommandVtolTransitionRequest_<std::allocator<void> > CommandVtolTransitionRequest;

typedef boost::shared_ptr< ::mavros_msgs::CommandVtolTransitionRequest > CommandVtolTransitionRequestPtr;
typedef boost::shared_ptr< ::mavros_msgs::CommandVtolTransitionRequest const> CommandVtolTransitionRequestConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.state == rhs.state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator1> & lhs, const ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0f073c606cdf8c014b856a5033900f3e";
  }

  static const char* value(const ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0f073c606cdf8c01ULL;
  static const uint64_t static_value2 = 0x4b856a5033900f3eULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/CommandVtolTransitionRequest";
  }

  static const char* value(const ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"# MAVLink command: DO_VTOL_TRANSITION\n"
"# https://mavlink.io/en/messages/common.html#MAV_CMD_DO_VTOL_TRANSITION\n"
"\n"
"std_msgs/Header header\n"
"\n"
"# MAV_VTOL_STATE\n"
"uint8 STATE_MC = 3\n"
"uint8 STATE_FW = 4\n"
"\n"
"uint8 state              # See enum MAV_VTOL_STATE.\n"
"\n"
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
;
  }

  static const char* value(const ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommandVtolTransitionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::CommandVtolTransitionRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_COMMANDVTOLTRANSITIONREQUEST_H