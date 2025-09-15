// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from full_name_interfaces:srv/FullNameSumService.idl
// generated code does not contain a copyright notice
#include "full_name_interfaces/srv/detail/full_name_sum_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `last_name`
// Member `name`
// Member `first_name`
#include "rosidl_runtime_c/string_functions.h"

bool
full_name_interfaces__srv__FullNameSumService_Request__init(full_name_interfaces__srv__FullNameSumService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__init(&msg->last_name)) {
    full_name_interfaces__srv__FullNameSumService_Request__fini(msg);
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    full_name_interfaces__srv__FullNameSumService_Request__fini(msg);
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__init(&msg->first_name)) {
    full_name_interfaces__srv__FullNameSumService_Request__fini(msg);
    return false;
  }
  return true;
}

void
full_name_interfaces__srv__FullNameSumService_Request__fini(full_name_interfaces__srv__FullNameSumService_Request * msg)
{
  if (!msg) {
    return;
  }
  // last_name
  rosidl_runtime_c__String__fini(&msg->last_name);
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // first_name
  rosidl_runtime_c__String__fini(&msg->first_name);
}

bool
full_name_interfaces__srv__FullNameSumService_Request__are_equal(const full_name_interfaces__srv__FullNameSumService_Request * lhs, const full_name_interfaces__srv__FullNameSumService_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_name), &(rhs->last_name)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->first_name), &(rhs->first_name)))
  {
    return false;
  }
  return true;
}

bool
full_name_interfaces__srv__FullNameSumService_Request__copy(
  const full_name_interfaces__srv__FullNameSumService_Request * input,
  full_name_interfaces__srv__FullNameSumService_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // last_name
  if (!rosidl_runtime_c__String__copy(
      &(input->last_name), &(output->last_name)))
  {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // first_name
  if (!rosidl_runtime_c__String__copy(
      &(input->first_name), &(output->first_name)))
  {
    return false;
  }
  return true;
}

full_name_interfaces__srv__FullNameSumService_Request *
full_name_interfaces__srv__FullNameSumService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  full_name_interfaces__srv__FullNameSumService_Request * msg = (full_name_interfaces__srv__FullNameSumService_Request *)allocator.allocate(sizeof(full_name_interfaces__srv__FullNameSumService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(full_name_interfaces__srv__FullNameSumService_Request));
  bool success = full_name_interfaces__srv__FullNameSumService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
full_name_interfaces__srv__FullNameSumService_Request__destroy(full_name_interfaces__srv__FullNameSumService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    full_name_interfaces__srv__FullNameSumService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
full_name_interfaces__srv__FullNameSumService_Request__Sequence__init(full_name_interfaces__srv__FullNameSumService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  full_name_interfaces__srv__FullNameSumService_Request * data = NULL;

  if (size) {
    data = (full_name_interfaces__srv__FullNameSumService_Request *)allocator.zero_allocate(size, sizeof(full_name_interfaces__srv__FullNameSumService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = full_name_interfaces__srv__FullNameSumService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        full_name_interfaces__srv__FullNameSumService_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
full_name_interfaces__srv__FullNameSumService_Request__Sequence__fini(full_name_interfaces__srv__FullNameSumService_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      full_name_interfaces__srv__FullNameSumService_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

full_name_interfaces__srv__FullNameSumService_Request__Sequence *
full_name_interfaces__srv__FullNameSumService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  full_name_interfaces__srv__FullNameSumService_Request__Sequence * array = (full_name_interfaces__srv__FullNameSumService_Request__Sequence *)allocator.allocate(sizeof(full_name_interfaces__srv__FullNameSumService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = full_name_interfaces__srv__FullNameSumService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
full_name_interfaces__srv__FullNameSumService_Request__Sequence__destroy(full_name_interfaces__srv__FullNameSumService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    full_name_interfaces__srv__FullNameSumService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
full_name_interfaces__srv__FullNameSumService_Request__Sequence__are_equal(const full_name_interfaces__srv__FullNameSumService_Request__Sequence * lhs, const full_name_interfaces__srv__FullNameSumService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!full_name_interfaces__srv__FullNameSumService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
full_name_interfaces__srv__FullNameSumService_Request__Sequence__copy(
  const full_name_interfaces__srv__FullNameSumService_Request__Sequence * input,
  full_name_interfaces__srv__FullNameSumService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(full_name_interfaces__srv__FullNameSumService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    full_name_interfaces__srv__FullNameSumService_Request * data =
      (full_name_interfaces__srv__FullNameSumService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!full_name_interfaces__srv__FullNameSumService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          full_name_interfaces__srv__FullNameSumService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!full_name_interfaces__srv__FullNameSumService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `full_name`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
full_name_interfaces__srv__FullNameSumService_Response__init(full_name_interfaces__srv__FullNameSumService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // full_name
  if (!rosidl_runtime_c__String__init(&msg->full_name)) {
    full_name_interfaces__srv__FullNameSumService_Response__fini(msg);
    return false;
  }
  return true;
}

void
full_name_interfaces__srv__FullNameSumService_Response__fini(full_name_interfaces__srv__FullNameSumService_Response * msg)
{
  if (!msg) {
    return;
  }
  // full_name
  rosidl_runtime_c__String__fini(&msg->full_name);
}

bool
full_name_interfaces__srv__FullNameSumService_Response__are_equal(const full_name_interfaces__srv__FullNameSumService_Response * lhs, const full_name_interfaces__srv__FullNameSumService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // full_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->full_name), &(rhs->full_name)))
  {
    return false;
  }
  return true;
}

bool
full_name_interfaces__srv__FullNameSumService_Response__copy(
  const full_name_interfaces__srv__FullNameSumService_Response * input,
  full_name_interfaces__srv__FullNameSumService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // full_name
  if (!rosidl_runtime_c__String__copy(
      &(input->full_name), &(output->full_name)))
  {
    return false;
  }
  return true;
}

full_name_interfaces__srv__FullNameSumService_Response *
full_name_interfaces__srv__FullNameSumService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  full_name_interfaces__srv__FullNameSumService_Response * msg = (full_name_interfaces__srv__FullNameSumService_Response *)allocator.allocate(sizeof(full_name_interfaces__srv__FullNameSumService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(full_name_interfaces__srv__FullNameSumService_Response));
  bool success = full_name_interfaces__srv__FullNameSumService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
full_name_interfaces__srv__FullNameSumService_Response__destroy(full_name_interfaces__srv__FullNameSumService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    full_name_interfaces__srv__FullNameSumService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
full_name_interfaces__srv__FullNameSumService_Response__Sequence__init(full_name_interfaces__srv__FullNameSumService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  full_name_interfaces__srv__FullNameSumService_Response * data = NULL;

  if (size) {
    data = (full_name_interfaces__srv__FullNameSumService_Response *)allocator.zero_allocate(size, sizeof(full_name_interfaces__srv__FullNameSumService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = full_name_interfaces__srv__FullNameSumService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        full_name_interfaces__srv__FullNameSumService_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
full_name_interfaces__srv__FullNameSumService_Response__Sequence__fini(full_name_interfaces__srv__FullNameSumService_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      full_name_interfaces__srv__FullNameSumService_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

full_name_interfaces__srv__FullNameSumService_Response__Sequence *
full_name_interfaces__srv__FullNameSumService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  full_name_interfaces__srv__FullNameSumService_Response__Sequence * array = (full_name_interfaces__srv__FullNameSumService_Response__Sequence *)allocator.allocate(sizeof(full_name_interfaces__srv__FullNameSumService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = full_name_interfaces__srv__FullNameSumService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
full_name_interfaces__srv__FullNameSumService_Response__Sequence__destroy(full_name_interfaces__srv__FullNameSumService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    full_name_interfaces__srv__FullNameSumService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
full_name_interfaces__srv__FullNameSumService_Response__Sequence__are_equal(const full_name_interfaces__srv__FullNameSumService_Response__Sequence * lhs, const full_name_interfaces__srv__FullNameSumService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!full_name_interfaces__srv__FullNameSumService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
full_name_interfaces__srv__FullNameSumService_Response__Sequence__copy(
  const full_name_interfaces__srv__FullNameSumService_Response__Sequence * input,
  full_name_interfaces__srv__FullNameSumService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(full_name_interfaces__srv__FullNameSumService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    full_name_interfaces__srv__FullNameSumService_Response * data =
      (full_name_interfaces__srv__FullNameSumService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!full_name_interfaces__srv__FullNameSumService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          full_name_interfaces__srv__FullNameSumService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!full_name_interfaces__srv__FullNameSumService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
