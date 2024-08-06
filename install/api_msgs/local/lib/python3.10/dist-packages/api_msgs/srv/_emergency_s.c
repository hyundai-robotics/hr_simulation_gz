// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from api_msgs:srv/Emergency.idl
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
#include "api_msgs/srv/detail/emergency__struct.h"
#include "api_msgs/srv/detail/emergency__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool api_msgs__srv__emergency__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("api_msgs.srv._emergency.Emergency_Request", full_classname_dest, 41) == 0);
  }
  api_msgs__srv__Emergency_Request * ros_message = _ros_message;
  {  // step_no
    PyObject * field = PyObject_GetAttrString(_pymsg, "step_no");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->step_no = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // stop_at
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_at");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stop_at = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // stop_at_corner
    PyObject * field = PyObject_GetAttrString(_pymsg, "stop_at_corner");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->stop_at_corner = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // category
    PyObject * field = PyObject_GetAttrString(_pymsg, "category");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->category = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * api_msgs__srv__emergency__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Emergency_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("api_msgs.srv._emergency");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Emergency_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  api_msgs__srv__Emergency_Request * ros_message = (api_msgs__srv__Emergency_Request *)raw_ros_message;
  {  // step_no
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->step_no);
    {
      int rc = PyObject_SetAttrString(_pymessage, "step_no", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_at
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->stop_at);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_at", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // stop_at_corner
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->stop_at_corner);
    {
      int rc = PyObject_SetAttrString(_pymessage, "stop_at_corner", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // category
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->category);
    {
      int rc = PyObject_SetAttrString(_pymessage, "category", field);
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
// #include "api_msgs/srv/detail/emergency__struct.h"
// already included above
// #include "api_msgs/srv/detail/emergency__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool api_msgs__srv__emergency__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("api_msgs.srv._emergency.Emergency_Response", full_classname_dest, 42) == 0);
  }
  api_msgs__srv__Emergency_Response * ros_message = _ros_message;
  {  // message
    PyObject * field = PyObject_GetAttrString(_pymsg, "message");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->message, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
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
PyObject * api_msgs__srv__emergency__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Emergency_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("api_msgs.srv._emergency");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Emergency_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  api_msgs__srv__Emergency_Response * ros_message = (api_msgs__srv__Emergency_Response *)raw_ros_message;
  {  // message
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->message.data,
      strlen(ros_message->message.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "message", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
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
