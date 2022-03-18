// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from update_interface:srv/FirmwareUpdate.idl
// generated code does not contain a copyright notice

#ifndef UPDATE_INTERFACE__SRV__DETAIL__FIRMWARE_UPDATE__BUILDER_HPP_
#define UPDATE_INTERFACE__SRV__DETAIL__FIRMWARE_UPDATE__BUILDER_HPP_

#include "update_interface/srv/detail/firmware_update__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace update_interface
{

namespace srv
{

namespace builder
{

class Init_FirmwareUpdate_Request_filename
{
public:
  explicit Init_FirmwareUpdate_Request_filename(::update_interface::srv::FirmwareUpdate_Request & msg)
  : msg_(msg)
  {}
  ::update_interface::srv::FirmwareUpdate_Request filename(::update_interface::srv::FirmwareUpdate_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::update_interface::srv::FirmwareUpdate_Request msg_;
};

class Init_FirmwareUpdate_Request_host
{
public:
  explicit Init_FirmwareUpdate_Request_host(::update_interface::srv::FirmwareUpdate_Request & msg)
  : msg_(msg)
  {}
  Init_FirmwareUpdate_Request_filename host(::update_interface::srv::FirmwareUpdate_Request::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_FirmwareUpdate_Request_filename(msg_);
  }

private:
  ::update_interface::srv::FirmwareUpdate_Request msg_;
};

class Init_FirmwareUpdate_Request_will_update
{
public:
  Init_FirmwareUpdate_Request_will_update()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FirmwareUpdate_Request_host will_update(::update_interface::srv::FirmwareUpdate_Request::_will_update_type arg)
  {
    msg_.will_update = std::move(arg);
    return Init_FirmwareUpdate_Request_host(msg_);
  }

private:
  ::update_interface::srv::FirmwareUpdate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::update_interface::srv::FirmwareUpdate_Request>()
{
  return update_interface::srv::builder::Init_FirmwareUpdate_Request_will_update();
}

}  // namespace update_interface


namespace update_interface
{

namespace srv
{

namespace builder
{

class Init_FirmwareUpdate_Response_success
{
public:
  Init_FirmwareUpdate_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::update_interface::srv::FirmwareUpdate_Response success(::update_interface::srv::FirmwareUpdate_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::update_interface::srv::FirmwareUpdate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::update_interface::srv::FirmwareUpdate_Response>()
{
  return update_interface::srv::builder::Init_FirmwareUpdate_Response_success();
}

}  // namespace update_interface

#endif  // UPDATE_INTERFACE__SRV__DETAIL__FIRMWARE_UPDATE__BUILDER_HPP_
