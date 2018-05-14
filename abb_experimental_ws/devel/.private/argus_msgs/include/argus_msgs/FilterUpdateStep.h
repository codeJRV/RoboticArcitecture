// Generated by gencpp from file argus_msgs/FilterUpdateStep.msg
// DO NOT EDIT!


#ifndef ARGUS_MSGS_MESSAGE_FILTERUPDATESTEP_H
#define ARGUS_MSGS_MESSAGE_FILTERUPDATESTEP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <argus_msgs/MatrixFloat64.h>
#include <argus_msgs/MatrixFloat64.h>
#include <argus_msgs/MatrixFloat64.h>
#include <argus_msgs/MatrixFloat64.h>
#include <argus_msgs/MatrixFloat64.h>

namespace argus_msgs
{
template <class ContainerAllocator>
struct FilterUpdateStep_
{
  typedef FilterUpdateStep_<ContainerAllocator> Type;

  FilterUpdateStep_()
    : prior_state_cov()
    , prior_obs_error()
    , obs_error_cov()
    , post_state_cov()
    , state_delta()
    , post_obs_error()
    , obs_jacobian()
    , obs_noise_cov()  {
    }
  FilterUpdateStep_(const ContainerAllocator& _alloc)
    : prior_state_cov(_alloc)
    , prior_obs_error(_alloc)
    , obs_error_cov(_alloc)
    , post_state_cov(_alloc)
    , state_delta(_alloc)
    , post_obs_error(_alloc)
    , obs_jacobian(_alloc)
    , obs_noise_cov(_alloc)  {
  (void)_alloc;
    }



   typedef  ::argus_msgs::MatrixFloat64_<ContainerAllocator>  _prior_state_cov_type;
  _prior_state_cov_type prior_state_cov;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _prior_obs_error_type;
  _prior_obs_error_type prior_obs_error;

   typedef  ::argus_msgs::MatrixFloat64_<ContainerAllocator>  _obs_error_cov_type;
  _obs_error_cov_type obs_error_cov;

   typedef  ::argus_msgs::MatrixFloat64_<ContainerAllocator>  _post_state_cov_type;
  _post_state_cov_type post_state_cov;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _state_delta_type;
  _state_delta_type state_delta;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _post_obs_error_type;
  _post_obs_error_type post_obs_error;

   typedef  ::argus_msgs::MatrixFloat64_<ContainerAllocator>  _obs_jacobian_type;
  _obs_jacobian_type obs_jacobian;

   typedef  ::argus_msgs::MatrixFloat64_<ContainerAllocator>  _obs_noise_cov_type;
  _obs_noise_cov_type obs_noise_cov;





  typedef boost::shared_ptr< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> const> ConstPtr;

}; // struct FilterUpdateStep_

typedef ::argus_msgs::FilterUpdateStep_<std::allocator<void> > FilterUpdateStep;

typedef boost::shared_ptr< ::argus_msgs::FilterUpdateStep > FilterUpdateStepPtr;
typedef boost::shared_ptr< ::argus_msgs::FilterUpdateStep const> FilterUpdateStepConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::argus_msgs::FilterUpdateStep_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> >
{
  static const char* value()
  {
    return "451710d77b207f2e2068272b8ce64023";
  }

  static const char* value(const ::argus_msgs::FilterUpdateStep_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x451710d77b207f2eULL;
  static const uint64_t static_value2 = 0x2068272b8ce64023ULL;
};

template<class ContainerAllocator>
struct DataType< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> >
{
  static const char* value()
  {
    return "argus_msgs/FilterUpdateStep";
  }

  static const char* value(const ::argus_msgs::FilterUpdateStep_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Message detailing a filter update step\n\
#\n\
# Fields\n\
# ======\n\
# prior_state_cov : State covariance before update\n\
# prior_obs_error : Observation prediction error before update\n\
# obs_error_cov   : Theoretical covariance of prediction error before update\n\
# post_state_cov  : State covariance after update\n\
# state_delta     : Correction applied to state from update\n\
# post_obs_error  : Observation prediction error after update\n\
# obs_jacobian    : Observation function jacobian\n\
# obs_noise_cov   : Observation noise covariance \n\
\n\
MatrixFloat64 prior_state_cov\n\
float64[] prior_obs_error\n\
MatrixFloat64 obs_error_cov\n\
\n\
MatrixFloat64 post_state_cov\n\
float64[] state_delta\n\
float64[] post_obs_error\n\
\n\
MatrixFloat64 obs_jacobian\n\
MatrixFloat64 obs_noise_cov\n\
================================================================================\n\
MSG: argus_msgs/MatrixFloat64\n\
# Double-precision dynamic-sized matrix message type\n\
bool column_major\n\
uint32 rows\n\
uint32 cols\n\
float64[] data\n\
";
  }

  static const char* value(const ::argus_msgs::FilterUpdateStep_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.prior_state_cov);
      stream.next(m.prior_obs_error);
      stream.next(m.obs_error_cov);
      stream.next(m.post_state_cov);
      stream.next(m.state_delta);
      stream.next(m.post_obs_error);
      stream.next(m.obs_jacobian);
      stream.next(m.obs_noise_cov);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FilterUpdateStep_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::argus_msgs::FilterUpdateStep_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::argus_msgs::FilterUpdateStep_<ContainerAllocator>& v)
  {
    s << indent << "prior_state_cov: ";
    s << std::endl;
    Printer< ::argus_msgs::MatrixFloat64_<ContainerAllocator> >::stream(s, indent + "  ", v.prior_state_cov);
    s << indent << "prior_obs_error[]" << std::endl;
    for (size_t i = 0; i < v.prior_obs_error.size(); ++i)
    {
      s << indent << "  prior_obs_error[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.prior_obs_error[i]);
    }
    s << indent << "obs_error_cov: ";
    s << std::endl;
    Printer< ::argus_msgs::MatrixFloat64_<ContainerAllocator> >::stream(s, indent + "  ", v.obs_error_cov);
    s << indent << "post_state_cov: ";
    s << std::endl;
    Printer< ::argus_msgs::MatrixFloat64_<ContainerAllocator> >::stream(s, indent + "  ", v.post_state_cov);
    s << indent << "state_delta[]" << std::endl;
    for (size_t i = 0; i < v.state_delta.size(); ++i)
    {
      s << indent << "  state_delta[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.state_delta[i]);
    }
    s << indent << "post_obs_error[]" << std::endl;
    for (size_t i = 0; i < v.post_obs_error.size(); ++i)
    {
      s << indent << "  post_obs_error[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.post_obs_error[i]);
    }
    s << indent << "obs_jacobian: ";
    s << std::endl;
    Printer< ::argus_msgs::MatrixFloat64_<ContainerAllocator> >::stream(s, indent + "  ", v.obs_jacobian);
    s << indent << "obs_noise_cov: ";
    s << std::endl;
    Printer< ::argus_msgs::MatrixFloat64_<ContainerAllocator> >::stream(s, indent + "  ", v.obs_noise_cov);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ARGUS_MSGS_MESSAGE_FILTERUPDATESTEP_H