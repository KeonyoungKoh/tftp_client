// generated from
// rosidl_typesupport_c/resource/rosidl_typesupport_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef TFTP_UPDATE__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
#define TFTP_UPDATE__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_C_EXPORT_tftp_update __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_C_IMPORT_tftp_update __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_C_EXPORT_tftp_update __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_C_IMPORT_tftp_update __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_C_BUILDING_DLL_tftp_update
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_tftp_update ROSIDL_TYPESUPPORT_C_EXPORT_tftp_update
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_tftp_update ROSIDL_TYPESUPPORT_C_IMPORT_tftp_update
  #endif
#else
  #define ROSIDL_TYPESUPPORT_C_EXPORT_tftp_update __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_C_IMPORT_tftp_update
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_tftp_update __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_tftp_update
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // TFTP_UPDATE__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
