// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mg400_msgs:msg/DOStatus.idl
// generated code does not contain a copyright notice

#ifndef MG400_MSGS__MSG__DETAIL__DO_STATUS__TRAITS_HPP_
#define MG400_MSGS__MSG__DETAIL__DO_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mg400_msgs/msg/detail/do_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace mg400_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DOStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DOStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DOStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mg400_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mg400_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mg400_msgs::msg::DOStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  mg400_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mg400_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mg400_msgs::msg::DOStatus & msg)
{
  return mg400_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mg400_msgs::msg::DOStatus>()
{
  return "mg400_msgs::msg::DOStatus";
}

template<>
inline const char * name<mg400_msgs::msg::DOStatus>()
{
  return "mg400_msgs/msg/DOStatus";
}

template<>
struct has_fixed_size<mg400_msgs::msg::DOStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mg400_msgs::msg::DOStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mg400_msgs::msg::DOStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MG400_MSGS__MSG__DETAIL__DO_STATUS__TRAITS_HPP_
