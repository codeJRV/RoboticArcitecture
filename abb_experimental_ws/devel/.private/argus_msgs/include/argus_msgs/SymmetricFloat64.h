// Generated by gencpp from file argus_msgs/SymmetricFloat64.msg
// DO NOT EDIT!


#ifndef ARGUS_MSGS_MESSAGE_SYMMETRICFLOAT64_H
#define ARGUS_MSGS_MESSAGE_SYMMETRICFLOAT64_H


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
struct SymmetricFloat64_
{
  typedef SymmetricFloat64_<ContainerAllocator> Type;

  SymmetricFloat64_()
    : dim(0)
    , data()  {
    }
  SymmetricFloat64_(const ContainerAllocator& _alloc)
    : dim(0)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef uint32_t _dim_type;
  _dim_type dim;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> const> ConstPtr;

}; // struct SymmetricFloat64_

typedef ::argus_msgs::SymmetricFloat64_<std::allocator<void> > SymmetricFloat64;

typedef boost::shared_ptr< ::argus_msgs::SymmetricFloat64 > SymmetricFloat64Ptr;
typedef boost::shared_ptr< ::argus_msgs::SymmetricFloat64 const> SymmetricFloat64ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::argus_msgs::SymmetricFloat64_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace argus_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'argus_msgs': ['/home/jrv/Research/RoboticArcitecture/abb_experimental_ws/src/argus_utils/argus_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> >
{
  static const char* value()
  {
    return "099dfa5da2b4d88d46f9e50c2fc822ad";
  }

  static const char* value(const ::argus_msgs::SymmetricFloat64_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x099dfa5da2b4d88dULL;
  static const uint64_t static_value2 = 0x46f9e50c2fc822adULL;
};

template<class ContainerAllocator>
struct DataType< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> >
{
  static const char* value()
  {
    return "argus_msgs/SymmetricFloat64";
  }

  static const char* value(const ::argus_msgs::SymmetricFloat64_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Double-precision symmetric matrix message type\n\
uint32 dim # Rows = cols\n\
float64[] data\n\
";
  }

  static const char* value(const ::argus_msgs::SymmetricFloat64_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dim);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SymmetricFloat64_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::argus_msgs::SymmetricFloat64_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::argus_msgs::SymmetricFloat64_<ContainerAllocator>& v)
  {
    s << indent << "dim: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.dim);
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARGUS_MSGS_MESSAGE_SYMMETRICFLOAT64_H
