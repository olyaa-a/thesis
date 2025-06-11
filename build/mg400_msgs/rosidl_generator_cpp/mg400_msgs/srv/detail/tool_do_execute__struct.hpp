// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mg400_msgs:srv/ToolDOExecute.idl
// generated code does not contain a copyright notice

#ifndef MG400_MSGS__SRV__DETAIL__TOOL_DO_EXECUTE__STRUCT_HPP_
#define MG400_MSGS__SRV__DETAIL__TOOL_DO_EXECUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'index'
#include "mg400_msgs/msg/detail/tool_do_index__struct.hpp"
// Member 'status'
#include "mg400_msgs/msg/detail/do_status__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mg400_msgs__srv__ToolDOExecute_Request __attribute__((deprecated))
#else
# define DEPRECATED__mg400_msgs__srv__ToolDOExecute_Request __declspec(deprecated)
#endif

namespace mg400_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ToolDOExecute_Request_
{
  using Type = ToolDOExecute_Request_<ContainerAllocator>;

  explicit ToolDOExecute_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : index(_init),
    status(_init)
  {
    (void)_init;
  }

  explicit ToolDOExecute_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : index(_alloc, _init),
    status(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _index_type =
    mg400_msgs::msg::ToolDOIndex_<ContainerAllocator>;
  _index_type index;
  using _status_type =
    mg400_msgs::msg::DOStatus_<ContainerAllocator>;
  _status_type status;

  // setters for named parameter idiom
  Type & set__index(
    const mg400_msgs::msg::ToolDOIndex_<ContainerAllocator> & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__status(
    const mg400_msgs::msg::DOStatus_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mg400_msgs::srv::ToolDOExecute_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mg400_msgs::srv::ToolDOExecute_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mg400_msgs::srv::ToolDOExecute_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mg400_msgs::srv::ToolDOExecute_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mg400_msgs::srv::ToolDOExecute_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mg400_msgs::srv::ToolDOExecute_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mg400_msgs::srv::ToolDOExecute_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mg400_msgs::srv::ToolDOExecute_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mg400_msgs::srv::ToolDOExecute_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mg400_msgs::srv::ToolDOExecute_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mg400_msgs__srv__ToolDOExecute_Request
    std::shared_ptr<mg400_msgs::srv::ToolDOExecute_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mg400_msgs__srv__ToolDOExecute_Request
    std::shared_ptr<mg400_msgs::srv::ToolDOExecute_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ToolDOExecute_Request_ & other) const
  {
    if (this->index != other.index) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const ToolDOExecute_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ToolDOExecute_Request_

// alias to use template instance with default allocator
using ToolDOExecute_Request =
  mg400_msgs::srv::ToolDOExecute_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mg400_msgs


#ifndef _WIN32
# define DEPRECATED__mg400_msgs__srv__ToolDOExecute_Response __attribute__((deprecated))
#else
# define DEPRECATED__mg400_msgs__srv__ToolDOExecute_Response __declspec(deprecated)
#endif

namespace mg400_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ToolDOExecute_Response_
{
  using Type = ToolDOExecute_Response_<ContainerAllocator>;

  explicit ToolDOExecute_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->error_id = 0l;
    }
  }

  explicit ToolDOExecute_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = false;
      this->error_id = 0l;
    }
  }

  // field types and members
  using _result_type =
    bool;
  _result_type result;
  using _error_id_type =
    int32_t;
  _error_id_type error_id;

  // setters for named parameter idiom
  Type & set__result(
    const bool & _arg)
  {
    this->result = _arg;
    return *this;
  }
  Type & set__error_id(
    const int32_t & _arg)
  {
    this->error_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mg400_msgs::srv::ToolDOExecute_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mg400_msgs::srv::ToolDOExecute_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mg400_msgs::srv::ToolDOExecute_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mg400_msgs::srv::ToolDOExecute_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mg400_msgs::srv::ToolDOExecute_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mg400_msgs::srv::ToolDOExecute_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mg400_msgs::srv::ToolDOExecute_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mg400_msgs::srv::ToolDOExecute_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mg400_msgs::srv::ToolDOExecute_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mg400_msgs::srv::ToolDOExecute_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mg400_msgs__srv__ToolDOExecute_Response
    std::shared_ptr<mg400_msgs::srv::ToolDOExecute_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mg400_msgs__srv__ToolDOExecute_Response
    std::shared_ptr<mg400_msgs::srv::ToolDOExecute_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ToolDOExecute_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    if (this->error_id != other.error_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const ToolDOExecute_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ToolDOExecute_Response_

// alias to use template instance with default allocator
using ToolDOExecute_Response =
  mg400_msgs::srv::ToolDOExecute_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mg400_msgs

namespace mg400_msgs
{

namespace srv
{

struct ToolDOExecute
{
  using Request = mg400_msgs::srv::ToolDOExecute_Request;
  using Response = mg400_msgs::srv::ToolDOExecute_Response;
};

}  // namespace srv

}  // namespace mg400_msgs

#endif  // MG400_MSGS__SRV__DETAIL__TOOL_DO_EXECUTE__STRUCT_HPP_
