// Generated by gencpp from file geometry_msgs/Inertia.msg
// DO NOT EDIT!


#ifndef GEOMETRY_MSGS_MESSAGE_INERTIA_H
#define GEOMETRY_MSGS_MESSAGE_INERTIA_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace geometry_msgs
{
template <class ContainerAllocator>
struct Inertia_
{
  typedef Inertia_<ContainerAllocator> Type;

  Inertia_()
    : m(0.0)
    , com()
    , ixx(0.0)
    , ixy(0.0)
    , ixz(0.0)
    , iyy(0.0)
    , iyz(0.0)
    , izz(0.0)  {
    }
  Inertia_(const ContainerAllocator& _alloc)
    : m(0.0)
    , com(_alloc)
    , ixx(0.0)
    , ixy(0.0)
    , ixz(0.0)
    , iyy(0.0)
    , iyz(0.0)
    , izz(0.0)  {
  (void)_alloc;
    }



   typedef double _m_type;
  _m_type m;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _com_type;
  _com_type com;

   typedef double _ixx_type;
  _ixx_type ixx;

   typedef double _ixy_type;
  _ixy_type ixy;

   typedef double _ixz_type;
  _ixz_type ixz;

   typedef double _iyy_type;
  _iyy_type iyy;

   typedef double _iyz_type;
  _iyz_type iyz;

   typedef double _izz_type;
  _izz_type izz;





  typedef boost::shared_ptr< ::geometry_msgs::Inertia_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::geometry_msgs::Inertia_<ContainerAllocator> const> ConstPtr;

}; // struct Inertia_

typedef ::geometry_msgs::Inertia_<std::allocator<void> > Inertia;

typedef boost::shared_ptr< ::geometry_msgs::Inertia > InertiaPtr;
typedef boost::shared_ptr< ::geometry_msgs::Inertia const> InertiaConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::geometry_msgs::Inertia_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::geometry_msgs::Inertia_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::geometry_msgs::Inertia_<ContainerAllocator1> & lhs, const ::geometry_msgs::Inertia_<ContainerAllocator2> & rhs)
{
  return lhs.m == rhs.m &&
    lhs.com == rhs.com &&
    lhs.ixx == rhs.ixx &&
    lhs.ixy == rhs.ixy &&
    lhs.ixz == rhs.ixz &&
    lhs.iyy == rhs.iyy &&
    lhs.iyz == rhs.iyz &&
    lhs.izz == rhs.izz;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::geometry_msgs::Inertia_<ContainerAllocator1> & lhs, const ::geometry_msgs::Inertia_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace geometry_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::geometry_msgs::Inertia_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::geometry_msgs::Inertia_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geometry_msgs::Inertia_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::geometry_msgs::Inertia_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geometry_msgs::Inertia_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::geometry_msgs::Inertia_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::geometry_msgs::Inertia_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1d26e4bb6c83ff141c5cf0d883c2b0fe";
  }

  static const char* value(const ::geometry_msgs::Inertia_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1d26e4bb6c83ff14ULL;
  static const uint64_t static_value2 = 0x1c5cf0d883c2b0feULL;
};

template<class ContainerAllocator>
struct DataType< ::geometry_msgs::Inertia_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Inertia";
  }

  static const char* value(const ::geometry_msgs::Inertia_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::geometry_msgs::Inertia_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Mass [kg]\n"
"float64 m\n"
"\n"
"# Center of mass [m]\n"
"geometry_msgs/Vector3 com\n"
"\n"
"# Inertia Tensor [kg-m^2]\n"
"#     | ixx ixy ixz |\n"
"# I = | ixy iyy iyz |\n"
"#     | ixz iyz izz |\n"
"float64 ixx\n"
"float64 ixy\n"
"float64 ixz\n"
"float64 iyy\n"
"float64 iyz\n"
"float64 izz\n"
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
;
  }

  static const char* value(const ::geometry_msgs::Inertia_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::geometry_msgs::Inertia_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.m);
      stream.next(m.com);
      stream.next(m.ixx);
      stream.next(m.ixy);
      stream.next(m.ixz);
      stream.next(m.iyy);
      stream.next(m.iyz);
      stream.next(m.izz);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Inertia_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::geometry_msgs::Inertia_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::geometry_msgs::Inertia_<ContainerAllocator>& v)
  {
    s << indent << "m: ";
    Printer<double>::stream(s, indent + "  ", v.m);
    s << indent << "com: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.com);
    s << indent << "ixx: ";
    Printer<double>::stream(s, indent + "  ", v.ixx);
    s << indent << "ixy: ";
    Printer<double>::stream(s, indent + "  ", v.ixy);
    s << indent << "ixz: ";
    Printer<double>::stream(s, indent + "  ", v.ixz);
    s << indent << "iyy: ";
    Printer<double>::stream(s, indent + "  ", v.iyy);
    s << indent << "iyz: ";
    Printer<double>::stream(s, indent + "  ", v.iyz);
    s << indent << "izz: ";
    Printer<double>::stream(s, indent + "  ", v.izz);
  }
};

} // namespace message_operations
} // namespace ros

#endif // GEOMETRY_MSGS_MESSAGE_INERTIA_H
