// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from full_name_interfaces:srv/FullNameSumService.idl
// generated code does not contain a copyright notice
#include "full_name_interfaces/srv/detail/full_name_sum_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "full_name_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "full_name_interfaces/srv/detail/full_name_sum_service__struct.h"
#include "full_name_interfaces/srv/detail/full_name_sum_service__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // first_name, last_name, name
#include "rosidl_runtime_c/string_functions.h"  // first_name, last_name, name

// forward declare type support functions


using _FullNameSumService_Request__ros_msg_type = full_name_interfaces__srv__FullNameSumService_Request;

static bool _FullNameSumService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FullNameSumService_Request__ros_msg_type * ros_message = static_cast<const _FullNameSumService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: last_name
  {
    const rosidl_runtime_c__String * str = &ros_message->last_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: first_name
  {
    const rosidl_runtime_c__String * str = &ros_message->first_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _FullNameSumService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FullNameSumService_Request__ros_msg_type * ros_message = static_cast<_FullNameSumService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: last_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->last_name.data) {
      rosidl_runtime_c__String__init(&ros_message->last_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->last_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'last_name'\n");
      return false;
    }
  }

  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: first_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->first_name.data) {
      rosidl_runtime_c__String__init(&ros_message->first_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->first_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'first_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_full_name_interfaces
size_t get_serialized_size_full_name_interfaces__srv__FullNameSumService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FullNameSumService_Request__ros_msg_type * ros_message = static_cast<const _FullNameSumService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name last_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->last_name.size + 1);
  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name first_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->first_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _FullNameSumService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_full_name_interfaces__srv__FullNameSumService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_full_name_interfaces
size_t max_serialized_size_full_name_interfaces__srv__FullNameSumService_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: last_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: first_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = full_name_interfaces__srv__FullNameSumService_Request;
    is_plain =
      (
      offsetof(DataType, first_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FullNameSumService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_full_name_interfaces__srv__FullNameSumService_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FullNameSumService_Request = {
  "full_name_interfaces::srv",
  "FullNameSumService_Request",
  _FullNameSumService_Request__cdr_serialize,
  _FullNameSumService_Request__cdr_deserialize,
  _FullNameSumService_Request__get_serialized_size,
  _FullNameSumService_Request__max_serialized_size
};

static rosidl_message_type_support_t _FullNameSumService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FullNameSumService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, full_name_interfaces, srv, FullNameSumService_Request)() {
  return &_FullNameSumService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "full_name_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "full_name_interfaces/srv/detail/full_name_sum_service__struct.h"
// already included above
// #include "full_name_interfaces/srv/detail/full_name_sum_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

// already included above
// #include "rosidl_runtime_c/string.h"  // full_name
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // full_name

// forward declare type support functions


using _FullNameSumService_Response__ros_msg_type = full_name_interfaces__srv__FullNameSumService_Response;

static bool _FullNameSumService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _FullNameSumService_Response__ros_msg_type * ros_message = static_cast<const _FullNameSumService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: full_name
  {
    const rosidl_runtime_c__String * str = &ros_message->full_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _FullNameSumService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _FullNameSumService_Response__ros_msg_type * ros_message = static_cast<_FullNameSumService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: full_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->full_name.data) {
      rosidl_runtime_c__String__init(&ros_message->full_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->full_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'full_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_full_name_interfaces
size_t get_serialized_size_full_name_interfaces__srv__FullNameSumService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FullNameSumService_Response__ros_msg_type * ros_message = static_cast<const _FullNameSumService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name full_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->full_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _FullNameSumService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_full_name_interfaces__srv__FullNameSumService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_full_name_interfaces
size_t max_serialized_size_full_name_interfaces__srv__FullNameSumService_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: full_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = full_name_interfaces__srv__FullNameSumService_Response;
    is_plain =
      (
      offsetof(DataType, full_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _FullNameSumService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_full_name_interfaces__srv__FullNameSumService_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FullNameSumService_Response = {
  "full_name_interfaces::srv",
  "FullNameSumService_Response",
  _FullNameSumService_Response__cdr_serialize,
  _FullNameSumService_Response__cdr_deserialize,
  _FullNameSumService_Response__get_serialized_size,
  _FullNameSumService_Response__max_serialized_size
};

static rosidl_message_type_support_t _FullNameSumService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FullNameSumService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, full_name_interfaces, srv, FullNameSumService_Response)() {
  return &_FullNameSumService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "full_name_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "full_name_interfaces/srv/full_name_sum_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t FullNameSumService__callbacks = {
  "full_name_interfaces::srv",
  "FullNameSumService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, full_name_interfaces, srv, FullNameSumService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, full_name_interfaces, srv, FullNameSumService_Response)(),
};

static rosidl_service_type_support_t FullNameSumService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &FullNameSumService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, full_name_interfaces, srv, FullNameSumService)() {
  return &FullNameSumService__handle;
}

#if defined(__cplusplus)
}
#endif
