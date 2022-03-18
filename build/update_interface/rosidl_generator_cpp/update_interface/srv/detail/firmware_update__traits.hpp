// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from update_interface:srv/FirmwareUpdate.idl
// generated code does not contain a copyright notice

#ifndef UPDATE_INTERFACE__SRV__DETAIL__FIRMWARE_UPDATE__TRAITS_HPP_
#define UPDATE_INTERFACE__SRV__DETAIL__FIRMWARE_UPDATE__TRAITS_HPP_

#include "update_interface/srv/detail/firmware_update__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<update_interface::srv::FirmwareUpdate_Request>()
{
  return "update_interface::srv::FirmwareUpdate_Request";
}

template<>
inline const char * name<update_interface::srv::FirmwareUpdate_Request>()
{
  return "update_interface/srv/FirmwareUpdate_Request";
}

template<>
struct has_fixed_size<update_interface::srv::FirmwareUpdate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<update_interface::srv::FirmwareUpdate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<update_interface::srv::FirmwareUpdate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<update_interface::srv::FirmwareUpdate_Response>()
{
  return "update_interface::srv::FirmwareUpdate_Response";
}

template<>
inline const char * name<update_interface::srv::FirmwareUpdate_Response>()
{
  return "update_interface/srv/FirmwareUpdate_Response";
}

template<>
struct has_fixed_size<update_interface::srv::FirmwareUpdate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<update_interface::srv::FirmwareUpdate_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<update_interface::srv::FirmwareUpdate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<update_interface::srv::FirmwareUpdate>()
{
  return "update_interface::srv::FirmwareUpdate";
}

template<>
inline const char * name<update_interface::srv::FirmwareUpdate>()
{
  return "update_interface/srv/FirmwareUpdate";
}

template<>
struct has_fixed_size<update_interface::srv::FirmwareUpdate>
  : std::integral_constant<
    bool,
    has_fixed_size<update_interface::srv::FirmwareUpdate_Request>::value &&
    has_fixed_size<update_interface::srv::FirmwareUpdate_Response>::value
  >
{
};

template<>
struct has_bounded_size<update_interface::srv::FirmwareUpdate>
  : std::integral_constant<
    bool,
    has_bounded_size<update_interface::srv::FirmwareUpdate_Request>::value &&
    has_bounded_size<update_interface::srv::FirmwareUpdate_Response>::value
  >
{
};

template<>
struct is_service<update_interface::srv::FirmwareUpdate>
  : std::true_type
{
};

template<>
struct is_service_request<update_interface::srv::FirmwareUpdate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<update_interface::srv::FirmwareUpdate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // UPDATE_INTERFACE__SRV__DETAIL__FIRMWARE_UPDATE__TRAITS_HPP_
