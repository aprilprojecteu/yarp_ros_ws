// Generated by gencpp from file yarp/Yarpinfo.msg
// DO NOT EDIT!


#ifndef YARP_MESSAGE_YARPINFO_H
#define YARP_MESSAGE_YARPINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace yarp
{
template <class ContainerAllocator>
struct Yarpinfo_
{
  typedef Yarpinfo_<ContainerAllocator> Type;

  Yarpinfo_()
    : msg()  {
    }
  Yarpinfo_(const ContainerAllocator& _alloc)
    : msg(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _msg_type;
  _msg_type msg;





  typedef boost::shared_ptr< ::yarp::Yarpinfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yarp::Yarpinfo_<ContainerAllocator> const> ConstPtr;

}; // struct Yarpinfo_

typedef ::yarp::Yarpinfo_<std::allocator<void> > Yarpinfo;

typedef boost::shared_ptr< ::yarp::Yarpinfo > YarpinfoPtr;
typedef boost::shared_ptr< ::yarp::Yarpinfo const> YarpinfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yarp::Yarpinfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yarp::Yarpinfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::yarp::Yarpinfo_<ContainerAllocator1> & lhs, const ::yarp::Yarpinfo_<ContainerAllocator2> & rhs)
{
  return lhs.msg == rhs.msg;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::yarp::Yarpinfo_<ContainerAllocator1> & lhs, const ::yarp::Yarpinfo_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace yarp

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::yarp::Yarpinfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yarp::Yarpinfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yarp::Yarpinfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yarp::Yarpinfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yarp::Yarpinfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yarp::Yarpinfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yarp::Yarpinfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7d96ed730776804754140b85e64c862e";
  }

  static const char* value(const ::yarp::Yarpinfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7d96ed7307768047ULL;
  static const uint64_t static_value2 = 0x54140b85e64c862eULL;
};

template<class ContainerAllocator>
struct DataType< ::yarp::Yarpinfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yarp/Yarpinfo";
  }

  static const char* value(const ::yarp::Yarpinfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yarp::Yarpinfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#std_msgs/Header Header\n"
"string msg\n"
;
  }

  static const char* value(const ::yarp::Yarpinfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yarp::Yarpinfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.msg);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Yarpinfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yarp::Yarpinfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yarp::Yarpinfo_<ContainerAllocator>& v)
  {
    s << indent << "msg: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.msg);
  }
};

} // namespace message_operations
} // namespace ros

#endif // YARP_MESSAGE_YARPINFO_H