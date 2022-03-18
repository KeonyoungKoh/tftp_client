// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tftp_update:srv/FirmwareUpdate.idl
// generated code does not contain a copyright notice

#ifndef TFTP_UPDATE__SRV__DETAIL__FIRMWARE_UPDATE__BUILDER_HPP_
#define TFTP_UPDATE__SRV__DETAIL__FIRMWARE_UPDATE__BUILDER_HPP_

#include "tftp_update/srv/detail/firmware_update__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tftp_update
{

namespace srv
{

namespace builder
{

class Init_FirmwareUpdate_Request_filename
{
public:
  explicit Init_FirmwareUpdate_Request_filename(::tftp_update::srv::FirmwareUpdate_Request & msg)
  : msg_(msg)
  {}
  ::tftp_update::srv::FirmwareUpdate_Request filename(::tftp_update::srv::FirmwareUpdate_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tftp_update::srv::FirmwareUpdate_Request msg_;
};

class Init_FirmwareUpdate_Request_host
{
public:
  explicit Init_FirmwareUpdate_Request_host(::tftp_update::srv::FirmwareUpdate_Request & msg)
  : msg_(msg)
  {}
  Init_FirmwareUpdate_Request_filename host(::tftp_update::srv::FirmwareUpdate_Request::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_FirmwareUpdate_Request_filename(msg_);
  }

private:
  ::tftp_update::srv::FirmwareUpdate_Request msg_;
};

class Init_FirmwareUpdate_Request_will_update
{
public:
  Init_FirmwareUpdate_Request_will_update()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FirmwareUpdate_Request_host will_update(::tftp_update::srv::FirmwareUpdate_Request::_will_update_type arg)
  {
    msg_.will_update = std::move(arg);
    return Init_FirmwareUpdate_Request_host(msg_);
  }

private:
  ::tftp_update::srv::FirmwareUpdate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tftp_update::srv::FirmwareUpdate_Request>()
{
  return tftp_update::srv::builder::Init_FirmwareUpdate_Request_will_update();
}

}  // namespace tftp_update


namespace tftp_update
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
  ::tftp_update::srv::FirmwareUpdate_Response success(::tftp_update::srv::FirmwareUpdate_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tftp_update::srv::FirmwareUpdate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tftp_update::srv::FirmwareUpdate_Response>()
{
  return tftp_update::srv::builder::Init_FirmwareUpdate_Response_success();
}

}  // namespace tftp_update

#endif  // TFTP_UPDATE__SRV__DETAIL__FIRMWARE_UPDATE__BUILDER_HPP_
