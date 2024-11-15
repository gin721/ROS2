// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from task3:srv/CustomService.idl
// generated code does not contain a copyright notice

#ifndef TASK3__SRV__DETAIL__CUSTOM_SERVICE__STRUCT_HPP_
#define TASK3__SRV__DETAIL__CUSTOM_SERVICE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__task3__srv__CustomService_Request __attribute__((deprecated))
#else
# define DEPRECATED__task3__srv__CustomService_Request __declspec(deprecated)
#endif

namespace task3
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CustomService_Request_
{
  using Type = CustomService_Request_<ContainerAllocator>;

  explicit CustomService_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = 0l;
    }
  }

  explicit CustomService_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request = 0l;
    }
  }

  // field types and members
  using _request_type =
    int32_t;
  _request_type request;

  // setters for named parameter idiom
  Type & set__request(
    const int32_t & _arg)
  {
    this->request = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task3::srv::CustomService_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const task3::srv::CustomService_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task3::srv::CustomService_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task3::srv::CustomService_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task3::srv::CustomService_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task3::srv::CustomService_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task3::srv::CustomService_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task3::srv::CustomService_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task3::srv::CustomService_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task3::srv::CustomService_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task3__srv__CustomService_Request
    std::shared_ptr<task3::srv::CustomService_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task3__srv__CustomService_Request
    std::shared_ptr<task3::srv::CustomService_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomService_Request_ & other) const
  {
    if (this->request != other.request) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomService_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomService_Request_

// alias to use template instance with default allocator
using CustomService_Request =
  task3::srv::CustomService_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace task3


#ifndef _WIN32
# define DEPRECATED__task3__srv__CustomService_Response __attribute__((deprecated))
#else
# define DEPRECATED__task3__srv__CustomService_Response __declspec(deprecated)
#endif

namespace task3
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CustomService_Response_
{
  using Type = CustomService_Response_<ContainerAllocator>;

  explicit CustomService_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  explicit CustomService_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response = "";
    }
  }

  // field types and members
  using _response_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__response(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    task3::srv::CustomService_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const task3::srv::CustomService_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<task3::srv::CustomService_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<task3::srv::CustomService_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      task3::srv::CustomService_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<task3::srv::CustomService_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      task3::srv::CustomService_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<task3::srv::CustomService_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<task3::srv::CustomService_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<task3::srv::CustomService_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__task3__srv__CustomService_Response
    std::shared_ptr<task3::srv::CustomService_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__task3__srv__CustomService_Response
    std::shared_ptr<task3::srv::CustomService_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CustomService_Response_ & other) const
  {
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const CustomService_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CustomService_Response_

// alias to use template instance with default allocator
using CustomService_Response =
  task3::srv::CustomService_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace task3

namespace task3
{

namespace srv
{

struct CustomService
{
  using Request = task3::srv::CustomService_Request;
  using Response = task3::srv::CustomService_Response;
};

}  // namespace srv

}  // namespace task3

#endif  // TASK3__SRV__DETAIL__CUSTOM_SERVICE__STRUCT_HPP_
