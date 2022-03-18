// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tftp_update:srv/FirmwareUpdate.idl
// generated code does not contain a copyright notice

#ifndef TFTP_UPDATE__SRV__DETAIL__FIRMWARE_UPDATE__TRAITS_HPP_
#define TFTP_UPDATE__SRV__DETAIL__FIRMWARE_UPDATE__TRAITS_HPP_

#include "tftp_update/srv/detail/firmware_update__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tftp_update::srv::FirmwareUpdate_Request>()
{
  return "tftp_update::srv::FirmwareUpdate_Request";
}

template<>
inline const char * name<tftp_update::srv::FirmwareUpdate_Request>()
{
  return "tftp_update/srv/FirmwareUpdate_Request";
}

template<>
struct has_fixed_size<tftp_update::srv::FirmwareUpdate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tftp_update::srv::FirmwareUpdate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tftp_update::srv::FirmwareUpdate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tftp_update::srv::FirmwareUpdate_Response>()
{
  return "tftp_update::srv::FirmwareUpdate_Response";
}

template<>
inline const char * name<tftp_update::srv::FirmwareUpdate_Response>()
{
  return "tftp_update/srv/FirmwareUpdate_Response";
}

template<>
struct has_fixed_size<tftp_update::srv::FirmwareUpdate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tftp_update::srv::FirmwareUpdate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tftp_update::srv::FirmwareUpdate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tftp_update::srv::FirmwareUpdate>()
{
  return "tftp_update::srv::FirmwareUpdate";
}

template<>
inline const char * name<tftp_update::srv::FirmwareUpdate>()
{
  return "tftp_update/srv/FirmwareUpdate";
}

template<>
struct has_fixed_size<tftp_update::srv::FirmwareUpdate>
  : std::integral_constant<
    bool,
    has_fixed_size<tftp_update::srv::FirmwareUpdate_Request>::value &&
    has_fixed_size<tftp_update::srv::FirmwareUpdate_Response>::value
  >
{
};

template<>
struct has_bounded_size<tftp_update::srv::FirmwareUpdate>
  : std::integral_constant<
    bool,
    has_bounded_size<tftp_update::srv::FirmwareUpdate_Request>::value &&
    has_bounded_size<tftp_update::srv::FirmwareUpdate_Response>::value
  >
{
};

template<>
struct is_service<tftp_update::srv::FirmwareUpdate>
  : std::true_type
{
};

template<>
struct is_service_request<tftp_update::srv::FirmwareUpdate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tftp_update::srv::FirmwareUpdate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TFTP_UPDATE__SRV__DETAIL__FIRMWARE_UPDATE__TRAITS_HPP_
