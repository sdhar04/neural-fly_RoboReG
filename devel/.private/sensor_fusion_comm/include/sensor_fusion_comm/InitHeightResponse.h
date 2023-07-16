// Generated by gencpp from file sensor_fusion_comm/InitHeightResponse.msg
// DO NOT EDIT!


#ifndef SENSOR_FUSION_COMM_MESSAGE_INITHEIGHTRESPONSE_H
#define SENSOR_FUSION_COMM_MESSAGE_INITHEIGHTRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sensor_fusion_comm
{
template <class ContainerAllocator>
struct InitHeightResponse_
{
  typedef InitHeightResponse_<ContainerAllocator> Type;

  InitHeightResponse_()
    : result()  {
    }
  InitHeightResponse_(const ContainerAllocator& _alloc)
    : result(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _result_type;
  _result_type result;





  typedef boost::shared_ptr< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> const> ConstPtr;

}; // struct InitHeightResponse_

typedef ::sensor_fusion_comm::InitHeightResponse_<std::allocator<void> > InitHeightResponse;

typedef boost::shared_ptr< ::sensor_fusion_comm::InitHeightResponse > InitHeightResponsePtr;
typedef boost::shared_ptr< ::sensor_fusion_comm::InitHeightResponse const> InitHeightResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator1> & lhs, const ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator1> & lhs, const ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sensor_fusion_comm

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c22f2a1ed8654a0b365f1bb3f7ff2c0f";
  }

  static const char* value(const ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc22f2a1ed8654a0bULL;
  static const uint64_t static_value2 = 0x365f1bb3f7ff2c0fULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_fusion_comm/InitHeightResponse";
  }

  static const char* value(const ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string result\n"
;
  }

  static const char* value(const ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct InitHeightResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_fusion_comm::InitHeightResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_FUSION_COMM_MESSAGE_INITHEIGHTRESPONSE_H
