// Generated by gencpp from file argus_msgs/EstimatePerformance.msg
// DO NOT EDIT!


#ifndef ARGUS_MSGS_MESSAGE_ESTIMATEPERFORMANCE_H
#define ARGUS_MSGS_MESSAGE_ESTIMATEPERFORMANCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace argus_msgs
{
template <class ContainerAllocator>
struct EstimatePerformance_
{
  typedef EstimatePerformance_<ContainerAllocator> Type;

  EstimatePerformance_()
    : rms_linear_vel(0.0)
    , rms_angular_vel(0.0)  {
    }
  EstimatePerformance_(const ContainerAllocator& _alloc)
    : rms_linear_vel(0.0)
    , rms_angular_vel(0.0)  {
  (void)_alloc;
    }



   typedef double _rms_linear_vel_type;
  _rms_linear_vel_type rms_linear_vel;

   typedef double _rms_angular_vel_type;
  _rms_angular_vel_type rms_angular_vel;





  typedef boost::shared_ptr< ::argus_msgs::EstimatePerformance_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::argus_msgs::EstimatePerformance_<ContainerAllocator> const> ConstPtr;

}; // struct EstimatePerformance_

typedef ::argus_msgs::EstimatePerformance_<std::allocator<void> > EstimatePerformance;

typedef boost::shared_ptr< ::argus_msgs::EstimatePerformance > EstimatePerformancePtr;
typedef boost::shared_ptr< ::argus_msgs::EstimatePerformance const> EstimatePerformanceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::argus_msgs::EstimatePerformance_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::argus_msgs::EstimatePerformance_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace argus_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'argus_msgs': ['/home/jrv/Research/RoboticArcitecture/abb_experimental_ws/src/argus_utils/argus_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::argus_msgs::EstimatePerformance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::argus_msgs::EstimatePerformance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::argus_msgs::EstimatePerformance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::argus_msgs::EstimatePerformance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::argus_msgs::EstimatePerformance_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::argus_msgs::EstimatePerformance_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::argus_msgs::EstimatePerformance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "17e5293affcaac44e00d9f001150b5b3";
  }

  static const char* value(const ::argus_msgs::EstimatePerformance_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x17e5293affcaac44ULL;
  static const uint64_t static_value2 = 0xe00d9f001150b5b3ULL;
};

template<class ContainerAllocator>
struct DataType< ::argus_msgs::EstimatePerformance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "argus_msgs/EstimatePerformance";
  }

  static const char* value(const ::argus_msgs::EstimatePerformance_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::argus_msgs::EstimatePerformance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message with state estimate performance\n\
\n\
# Root mean square error for linear velocity\n\
float64 rms_linear_vel\n\
\n\
# Root mean square error for angular velocity\n\
float64 rms_angular_vel\n\
";
  }

  static const char* value(const ::argus_msgs::EstimatePerformance_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::argus_msgs::EstimatePerformance_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rms_linear_vel);
      stream.next(m.rms_angular_vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EstimatePerformance_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::argus_msgs::EstimatePerformance_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::argus_msgs::EstimatePerformance_<ContainerAllocator>& v)
  {
    s << indent << "rms_linear_vel: ";
    Printer<double>::stream(s, indent + "  ", v.rms_linear_vel);
    s << indent << "rms_angular_vel: ";
    Printer<double>::stream(s, indent + "  ", v.rms_angular_vel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARGUS_MSGS_MESSAGE_ESTIMATEPERFORMANCE_H
