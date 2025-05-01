// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from mybot_interfaces:srv/Rotate.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "mybot_interfaces/srv/detail/rotate__struct.h"
#include "mybot_interfaces/srv/detail/rotate__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mybot_interfaces__srv__rotate__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mybot_interfaces.srv._rotate.Rotate_Request", full_classname_dest, 43) == 0);
  }
  mybot_interfaces__srv__Rotate_Request * ros_message = _ros_message;
  {  // angle_motor_1_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_1_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_1_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_1_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_1_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_1_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_1_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_1_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_1_3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_1_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_1_4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_1_4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_1_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_1_5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_1_5 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_1_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_1_6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_1_6 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_2_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_2_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_2_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_2_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_2_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_2_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_2_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_2_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_2_3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_2_4
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_2_4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_2_4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_2_5
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_2_5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_2_5 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_2_6
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_2_6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_2_6 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_3_1
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_3_1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_3_1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_3_2
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_3_2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_3_2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_3_3
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_3_3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_3_3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_1_1_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_1_1_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_1_1_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_1_2_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_1_2_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_1_2_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_1_3_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_1_3_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_1_3_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_1_4_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_1_4_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_1_4_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_1_5_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_1_5_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_1_5_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_1_6_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_1_6_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_1_6_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_2_1_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_2_1_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_2_1_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_2_2_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_2_2_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_2_2_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_2_3_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_2_3_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_2_3_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_2_4_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_2_4_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_2_4_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_2_5_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_2_5_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_2_5_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_2_6_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_2_6_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_2_6_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_3_1_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_3_1_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_3_1_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_3_2_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_3_2_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_3_2_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angle_motor_3_3_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "angle_motor_3_3_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angle_motor_3_3_set = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mybot_interfaces__srv__rotate__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Rotate_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mybot_interfaces.srv._rotate");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Rotate_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mybot_interfaces__srv__Rotate_Request * ros_message = (mybot_interfaces__srv__Rotate_Request *)raw_ros_message;
  {  // angle_motor_1_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_1_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_1_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_1_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_1_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_1_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_1_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_1_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_1_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_1_4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_1_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_1_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_1_5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_1_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_1_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_1_6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_1_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_1_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_2_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_2_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_2_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_2_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_2_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_2_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_2_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_2_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_2_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_2_4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_2_4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_2_4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_2_5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_2_5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_2_5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_2_6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_2_6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_2_6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_3_1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_3_1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_3_1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_3_2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_3_2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_3_2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_3_3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_3_3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_3_3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_1_1_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_1_1_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_1_1_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_1_2_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_1_2_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_1_2_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_1_3_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_1_3_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_1_3_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_1_4_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_1_4_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_1_4_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_1_5_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_1_5_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_1_5_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_1_6_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_1_6_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_1_6_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_2_1_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_2_1_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_2_1_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_2_2_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_2_2_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_2_2_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_2_3_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_2_3_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_2_3_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_2_4_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_2_4_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_2_4_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_2_5_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_2_5_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_2_5_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_2_6_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_2_6_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_2_6_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_3_1_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_3_1_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_3_1_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_3_2_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_3_2_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_3_2_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angle_motor_3_3_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angle_motor_3_3_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angle_motor_3_3_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "mybot_interfaces/srv/detail/rotate__struct.h"
// already included above
// #include "mybot_interfaces/srv/detail/rotate__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool mybot_interfaces__srv__rotate__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[45];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("mybot_interfaces.srv._rotate.Rotate_Response", full_classname_dest, 44) == 0);
  }
  mybot_interfaces__srv__Rotate_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * mybot_interfaces__srv__rotate__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Rotate_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("mybot_interfaces.srv._rotate");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Rotate_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  mybot_interfaces__srv__Rotate_Response * ros_message = (mybot_interfaces__srv__Rotate_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
