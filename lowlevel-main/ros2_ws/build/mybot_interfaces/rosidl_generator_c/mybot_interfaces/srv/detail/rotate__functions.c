// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mybot_interfaces:srv/Rotate.idl
// generated code does not contain a copyright notice
#include "mybot_interfaces/srv/detail/rotate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
mybot_interfaces__srv__Rotate_Request__init(mybot_interfaces__srv__Rotate_Request * msg)
{
  if (!msg) {
    return false;
  }
  // angle_motor_1_1
  // angle_motor_1_2
  // angle_motor_1_3
  // angle_motor_1_4
  // angle_motor_1_5
  // angle_motor_1_6
  // angle_motor_2_1
  // angle_motor_2_2
  // angle_motor_2_3
  // angle_motor_2_4
  // angle_motor_2_5
  // angle_motor_2_6
  // angle_motor_3_1
  // angle_motor_3_2
  // angle_motor_3_3
  // angle_motor_1_1_set
  // angle_motor_1_2_set
  // angle_motor_1_3_set
  // angle_motor_1_4_set
  // angle_motor_1_5_set
  // angle_motor_1_6_set
  // angle_motor_2_1_set
  // angle_motor_2_2_set
  // angle_motor_2_3_set
  // angle_motor_2_4_set
  // angle_motor_2_5_set
  // angle_motor_2_6_set
  // angle_motor_3_1_set
  // angle_motor_3_2_set
  // angle_motor_3_3_set
  return true;
}

void
mybot_interfaces__srv__Rotate_Request__fini(mybot_interfaces__srv__Rotate_Request * msg)
{
  if (!msg) {
    return;
  }
  // angle_motor_1_1
  // angle_motor_1_2
  // angle_motor_1_3
  // angle_motor_1_4
  // angle_motor_1_5
  // angle_motor_1_6
  // angle_motor_2_1
  // angle_motor_2_2
  // angle_motor_2_3
  // angle_motor_2_4
  // angle_motor_2_5
  // angle_motor_2_6
  // angle_motor_3_1
  // angle_motor_3_2
  // angle_motor_3_3
  // angle_motor_1_1_set
  // angle_motor_1_2_set
  // angle_motor_1_3_set
  // angle_motor_1_4_set
  // angle_motor_1_5_set
  // angle_motor_1_6_set
  // angle_motor_2_1_set
  // angle_motor_2_2_set
  // angle_motor_2_3_set
  // angle_motor_2_4_set
  // angle_motor_2_5_set
  // angle_motor_2_6_set
  // angle_motor_3_1_set
  // angle_motor_3_2_set
  // angle_motor_3_3_set
}

bool
mybot_interfaces__srv__Rotate_Request__are_equal(const mybot_interfaces__srv__Rotate_Request * lhs, const mybot_interfaces__srv__Rotate_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // angle_motor_1_1
  if (lhs->angle_motor_1_1 != rhs->angle_motor_1_1) {
    return false;
  }
  // angle_motor_1_2
  if (lhs->angle_motor_1_2 != rhs->angle_motor_1_2) {
    return false;
  }
  // angle_motor_1_3
  if (lhs->angle_motor_1_3 != rhs->angle_motor_1_3) {
    return false;
  }
  // angle_motor_1_4
  if (lhs->angle_motor_1_4 != rhs->angle_motor_1_4) {
    return false;
  }
  // angle_motor_1_5
  if (lhs->angle_motor_1_5 != rhs->angle_motor_1_5) {
    return false;
  }
  // angle_motor_1_6
  if (lhs->angle_motor_1_6 != rhs->angle_motor_1_6) {
    return false;
  }
  // angle_motor_2_1
  if (lhs->angle_motor_2_1 != rhs->angle_motor_2_1) {
    return false;
  }
  // angle_motor_2_2
  if (lhs->angle_motor_2_2 != rhs->angle_motor_2_2) {
    return false;
  }
  // angle_motor_2_3
  if (lhs->angle_motor_2_3 != rhs->angle_motor_2_3) {
    return false;
  }
  // angle_motor_2_4
  if (lhs->angle_motor_2_4 != rhs->angle_motor_2_4) {
    return false;
  }
  // angle_motor_2_5
  if (lhs->angle_motor_2_5 != rhs->angle_motor_2_5) {
    return false;
  }
  // angle_motor_2_6
  if (lhs->angle_motor_2_6 != rhs->angle_motor_2_6) {
    return false;
  }
  // angle_motor_3_1
  if (lhs->angle_motor_3_1 != rhs->angle_motor_3_1) {
    return false;
  }
  // angle_motor_3_2
  if (lhs->angle_motor_3_2 != rhs->angle_motor_3_2) {
    return false;
  }
  // angle_motor_3_3
  if (lhs->angle_motor_3_3 != rhs->angle_motor_3_3) {
    return false;
  }
  // angle_motor_1_1_set
  if (lhs->angle_motor_1_1_set != rhs->angle_motor_1_1_set) {
    return false;
  }
  // angle_motor_1_2_set
  if (lhs->angle_motor_1_2_set != rhs->angle_motor_1_2_set) {
    return false;
  }
  // angle_motor_1_3_set
  if (lhs->angle_motor_1_3_set != rhs->angle_motor_1_3_set) {
    return false;
  }
  // angle_motor_1_4_set
  if (lhs->angle_motor_1_4_set != rhs->angle_motor_1_4_set) {
    return false;
  }
  // angle_motor_1_5_set
  if (lhs->angle_motor_1_5_set != rhs->angle_motor_1_5_set) {
    return false;
  }
  // angle_motor_1_6_set
  if (lhs->angle_motor_1_6_set != rhs->angle_motor_1_6_set) {
    return false;
  }
  // angle_motor_2_1_set
  if (lhs->angle_motor_2_1_set != rhs->angle_motor_2_1_set) {
    return false;
  }
  // angle_motor_2_2_set
  if (lhs->angle_motor_2_2_set != rhs->angle_motor_2_2_set) {
    return false;
  }
  // angle_motor_2_3_set
  if (lhs->angle_motor_2_3_set != rhs->angle_motor_2_3_set) {
    return false;
  }
  // angle_motor_2_4_set
  if (lhs->angle_motor_2_4_set != rhs->angle_motor_2_4_set) {
    return false;
  }
  // angle_motor_2_5_set
  if (lhs->angle_motor_2_5_set != rhs->angle_motor_2_5_set) {
    return false;
  }
  // angle_motor_2_6_set
  if (lhs->angle_motor_2_6_set != rhs->angle_motor_2_6_set) {
    return false;
  }
  // angle_motor_3_1_set
  if (lhs->angle_motor_3_1_set != rhs->angle_motor_3_1_set) {
    return false;
  }
  // angle_motor_3_2_set
  if (lhs->angle_motor_3_2_set != rhs->angle_motor_3_2_set) {
    return false;
  }
  // angle_motor_3_3_set
  if (lhs->angle_motor_3_3_set != rhs->angle_motor_3_3_set) {
    return false;
  }
  return true;
}

bool
mybot_interfaces__srv__Rotate_Request__copy(
  const mybot_interfaces__srv__Rotate_Request * input,
  mybot_interfaces__srv__Rotate_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // angle_motor_1_1
  output->angle_motor_1_1 = input->angle_motor_1_1;
  // angle_motor_1_2
  output->angle_motor_1_2 = input->angle_motor_1_2;
  // angle_motor_1_3
  output->angle_motor_1_3 = input->angle_motor_1_3;
  // angle_motor_1_4
  output->angle_motor_1_4 = input->angle_motor_1_4;
  // angle_motor_1_5
  output->angle_motor_1_5 = input->angle_motor_1_5;
  // angle_motor_1_6
  output->angle_motor_1_6 = input->angle_motor_1_6;
  // angle_motor_2_1
  output->angle_motor_2_1 = input->angle_motor_2_1;
  // angle_motor_2_2
  output->angle_motor_2_2 = input->angle_motor_2_2;
  // angle_motor_2_3
  output->angle_motor_2_3 = input->angle_motor_2_3;
  // angle_motor_2_4
  output->angle_motor_2_4 = input->angle_motor_2_4;
  // angle_motor_2_5
  output->angle_motor_2_5 = input->angle_motor_2_5;
  // angle_motor_2_6
  output->angle_motor_2_6 = input->angle_motor_2_6;
  // angle_motor_3_1
  output->angle_motor_3_1 = input->angle_motor_3_1;
  // angle_motor_3_2
  output->angle_motor_3_2 = input->angle_motor_3_2;
  // angle_motor_3_3
  output->angle_motor_3_3 = input->angle_motor_3_3;
  // angle_motor_1_1_set
  output->angle_motor_1_1_set = input->angle_motor_1_1_set;
  // angle_motor_1_2_set
  output->angle_motor_1_2_set = input->angle_motor_1_2_set;
  // angle_motor_1_3_set
  output->angle_motor_1_3_set = input->angle_motor_1_3_set;
  // angle_motor_1_4_set
  output->angle_motor_1_4_set = input->angle_motor_1_4_set;
  // angle_motor_1_5_set
  output->angle_motor_1_5_set = input->angle_motor_1_5_set;
  // angle_motor_1_6_set
  output->angle_motor_1_6_set = input->angle_motor_1_6_set;
  // angle_motor_2_1_set
  output->angle_motor_2_1_set = input->angle_motor_2_1_set;
  // angle_motor_2_2_set
  output->angle_motor_2_2_set = input->angle_motor_2_2_set;
  // angle_motor_2_3_set
  output->angle_motor_2_3_set = input->angle_motor_2_3_set;
  // angle_motor_2_4_set
  output->angle_motor_2_4_set = input->angle_motor_2_4_set;
  // angle_motor_2_5_set
  output->angle_motor_2_5_set = input->angle_motor_2_5_set;
  // angle_motor_2_6_set
  output->angle_motor_2_6_set = input->angle_motor_2_6_set;
  // angle_motor_3_1_set
  output->angle_motor_3_1_set = input->angle_motor_3_1_set;
  // angle_motor_3_2_set
  output->angle_motor_3_2_set = input->angle_motor_3_2_set;
  // angle_motor_3_3_set
  output->angle_motor_3_3_set = input->angle_motor_3_3_set;
  return true;
}

mybot_interfaces__srv__Rotate_Request *
mybot_interfaces__srv__Rotate_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mybot_interfaces__srv__Rotate_Request * msg = (mybot_interfaces__srv__Rotate_Request *)allocator.allocate(sizeof(mybot_interfaces__srv__Rotate_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mybot_interfaces__srv__Rotate_Request));
  bool success = mybot_interfaces__srv__Rotate_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mybot_interfaces__srv__Rotate_Request__destroy(mybot_interfaces__srv__Rotate_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mybot_interfaces__srv__Rotate_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mybot_interfaces__srv__Rotate_Request__Sequence__init(mybot_interfaces__srv__Rotate_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mybot_interfaces__srv__Rotate_Request * data = NULL;

  if (size) {
    data = (mybot_interfaces__srv__Rotate_Request *)allocator.zero_allocate(size, sizeof(mybot_interfaces__srv__Rotate_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mybot_interfaces__srv__Rotate_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mybot_interfaces__srv__Rotate_Request__fini(&data[i - 1]);
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
mybot_interfaces__srv__Rotate_Request__Sequence__fini(mybot_interfaces__srv__Rotate_Request__Sequence * array)
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
      mybot_interfaces__srv__Rotate_Request__fini(&array->data[i]);
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

mybot_interfaces__srv__Rotate_Request__Sequence *
mybot_interfaces__srv__Rotate_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mybot_interfaces__srv__Rotate_Request__Sequence * array = (mybot_interfaces__srv__Rotate_Request__Sequence *)allocator.allocate(sizeof(mybot_interfaces__srv__Rotate_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mybot_interfaces__srv__Rotate_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mybot_interfaces__srv__Rotate_Request__Sequence__destroy(mybot_interfaces__srv__Rotate_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mybot_interfaces__srv__Rotate_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mybot_interfaces__srv__Rotate_Request__Sequence__are_equal(const mybot_interfaces__srv__Rotate_Request__Sequence * lhs, const mybot_interfaces__srv__Rotate_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mybot_interfaces__srv__Rotate_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mybot_interfaces__srv__Rotate_Request__Sequence__copy(
  const mybot_interfaces__srv__Rotate_Request__Sequence * input,
  mybot_interfaces__srv__Rotate_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mybot_interfaces__srv__Rotate_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mybot_interfaces__srv__Rotate_Request * data =
      (mybot_interfaces__srv__Rotate_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mybot_interfaces__srv__Rotate_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mybot_interfaces__srv__Rotate_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mybot_interfaces__srv__Rotate_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
mybot_interfaces__srv__Rotate_Response__init(mybot_interfaces__srv__Rotate_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
mybot_interfaces__srv__Rotate_Response__fini(mybot_interfaces__srv__Rotate_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
mybot_interfaces__srv__Rotate_Response__are_equal(const mybot_interfaces__srv__Rotate_Response * lhs, const mybot_interfaces__srv__Rotate_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
mybot_interfaces__srv__Rotate_Response__copy(
  const mybot_interfaces__srv__Rotate_Response * input,
  mybot_interfaces__srv__Rotate_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

mybot_interfaces__srv__Rotate_Response *
mybot_interfaces__srv__Rotate_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mybot_interfaces__srv__Rotate_Response * msg = (mybot_interfaces__srv__Rotate_Response *)allocator.allocate(sizeof(mybot_interfaces__srv__Rotate_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mybot_interfaces__srv__Rotate_Response));
  bool success = mybot_interfaces__srv__Rotate_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mybot_interfaces__srv__Rotate_Response__destroy(mybot_interfaces__srv__Rotate_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mybot_interfaces__srv__Rotate_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mybot_interfaces__srv__Rotate_Response__Sequence__init(mybot_interfaces__srv__Rotate_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mybot_interfaces__srv__Rotate_Response * data = NULL;

  if (size) {
    data = (mybot_interfaces__srv__Rotate_Response *)allocator.zero_allocate(size, sizeof(mybot_interfaces__srv__Rotate_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mybot_interfaces__srv__Rotate_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mybot_interfaces__srv__Rotate_Response__fini(&data[i - 1]);
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
mybot_interfaces__srv__Rotate_Response__Sequence__fini(mybot_interfaces__srv__Rotate_Response__Sequence * array)
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
      mybot_interfaces__srv__Rotate_Response__fini(&array->data[i]);
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

mybot_interfaces__srv__Rotate_Response__Sequence *
mybot_interfaces__srv__Rotate_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mybot_interfaces__srv__Rotate_Response__Sequence * array = (mybot_interfaces__srv__Rotate_Response__Sequence *)allocator.allocate(sizeof(mybot_interfaces__srv__Rotate_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mybot_interfaces__srv__Rotate_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mybot_interfaces__srv__Rotate_Response__Sequence__destroy(mybot_interfaces__srv__Rotate_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mybot_interfaces__srv__Rotate_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mybot_interfaces__srv__Rotate_Response__Sequence__are_equal(const mybot_interfaces__srv__Rotate_Response__Sequence * lhs, const mybot_interfaces__srv__Rotate_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mybot_interfaces__srv__Rotate_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mybot_interfaces__srv__Rotate_Response__Sequence__copy(
  const mybot_interfaces__srv__Rotate_Response__Sequence * input,
  mybot_interfaces__srv__Rotate_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mybot_interfaces__srv__Rotate_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mybot_interfaces__srv__Rotate_Response * data =
      (mybot_interfaces__srv__Rotate_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mybot_interfaces__srv__Rotate_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mybot_interfaces__srv__Rotate_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mybot_interfaces__srv__Rotate_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
