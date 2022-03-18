// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from tftp_update:srv/FirmwareUpdate.idl
// generated code does not contain a copyright notice

#ifndef TFTP_UPDATE__SRV__DETAIL__FIRMWARE_UPDATE__STRUCT_HPP_
#define TFTP_UPDATE__SRV__DETAIL__FIRMWARE_UPDATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__tftp_update__srv__FirmwareUpdate_Request __attribute__((deprecated))
#else
# define DEPRECATED__tftp_update__srv__FirmwareUpdate_Request __declspec(deprecated)
#endif

namespace tftp_update
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FirmwareUpdate_Request_
{
  using Type = FirmwareUpdate_Request_<ContainerAllocator>;

  explicit FirmwareUpdate_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->will_update = 0ll;
      this->host = "";
      this->filename = "";
    }
  }

  explicit FirmwareUpdate_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : host(_alloc),
    filename(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->will_update = 0ll;
      this->host = "";
      this->filename = "";
    }
  }

  // field types and members
  using _will_update_type =
    int64_t;
  _will_update_type will_update;
  using _host_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _host_type host;
  using _filename_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _filename_type filename;

  // setters for named parameter idiom
  Type & set__will_update(
    const int64_t & _arg)
  {
    this->will_update = _arg;
    return *this;
  }
  Type & set__host(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->host = _arg;
    return *this;
  }
  Type & set__filename(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->filename = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tftp_update::srv::FirmwareUpdate_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const tftp_update::srv::FirmwareUpdate_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tftp_update::srv::FirmwareUpdate_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tftp_update::srv::FirmwareUpdate_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tftp_update::srv::FirmwareUpdate_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tftp_update::srv::FirmwareUpdate_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tftp_update::srv::FirmwareUpdate_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tftp_update::srv::FirmwareUpdate_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tftp_update::srv::FirmwareUpdate_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tftp_update::srv::FirmwareUpdate_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tftp_update__srv__FirmwareUpdate_Request
    std::shared_ptr<tftp_update::srv::FirmwareUpdate_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tftp_update__srv__FirmwareUpdate_Request
    std::shared_ptr<tftp_update::srv::FirmwareUpdate_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FirmwareUpdate_Request_ & other) const
  {
    if (this->will_update != other.will_update) {
      return false;
    }
    if (this->host != other.host) {
      return false;
    }
    if (this->filename != other.filename) {
      return false;
    }
    return true;
  }
  bool operator!=(const FirmwareUpdate_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FirmwareUpdate_Request_

// alias to use template instance with default allocator
using FirmwareUpdate_Request =
  tftp_update::srv::FirmwareUpdate_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tftp_update


#ifndef _WIN32
# define DEPRECATED__tftp_update__srv__FirmwareUpdate_Response __attribute__((deprecated))
#else
# define DEPRECATED__tftp_update__srv__FirmwareUpdate_Response __declspec(deprecated)
#endif

namespace tftp_update
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct FirmwareUpdate_Response_
{
  using Type = FirmwareUpdate_Response_<ContainerAllocator>;

  explicit FirmwareUpdate_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = 0ll;
    }
  }

  explicit FirmwareUpdate_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = 0ll;
    }
  }

  // field types and members
  using _success_type =
    int64_t;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const int64_t & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    tftp_update::srv::FirmwareUpdate_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const tftp_update::srv::FirmwareUpdate_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<tftp_update::srv::FirmwareUpdate_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<tftp_update::srv::FirmwareUpdate_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      tftp_update::srv::FirmwareUpdate_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<tftp_update::srv::FirmwareUpdate_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      tftp_update::srv::FirmwareUpdate_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<tftp_update::srv::FirmwareUpdate_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<tftp_update::srv::FirmwareUpdate_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<tftp_update::srv::FirmwareUpdate_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__tftp_update__srv__FirmwareUpdate_Response
    std::shared_ptr<tftp_update::srv::FirmwareUpdate_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__tftp_update__srv__FirmwareUpdate_Response
    std::shared_ptr<tftp_update::srv::FirmwareUpdate_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FirmwareUpdate_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const FirmwareUpdate_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FirmwareUpdate_Response_

// alias to use template instance with default allocator
using FirmwareUpdate_Response =
  tftp_update::srv::FirmwareUpdate_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace tftp_update

namespace tftp_update
{

namespace srv
{

struct FirmwareUpdate
{
  using Request = tftp_update::srv::FirmwareUpdate_Request;
  using Response = tftp_update::srv::FirmwareUpdate_Response;
};

}  // namespace srv

}  // namespace tftp_update

#endif  // TFTP_UPDATE__SRV__DETAIL__FIRMWARE_UPDATE__STRUCT_HPP_
