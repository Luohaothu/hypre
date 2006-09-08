/*
 * File:          sidlx_rmi_ChildSocket_Module.h
 * Symbol:        sidlx.rmi.ChildSocket-v0.1
 * Symbol Type:   class
 * Babel Version: 1.0.0
 * Description:   expose a constructor for the Python wrapper
 * 
 * WARNING: Automatically generated; only changes within splicers preserved
 * 
 */

/*
 * THIS CODE IS AUTOMATICALLY GENERATED BY THE BABEL
 * COMPILER. DO NOT EDIT THIS!
 * 
 * External clients need an entry point to wrap a pointer
 * to an instance of sidlx.rmi.ChildSocket.
 * This header files defines two methods that such clients
 * will need.
 *     sidlx_rmi_ChildSocket__import
 *         This should be called in the client's init
 *         module method.
 *     sidlx_rmi_ChildSocket__wrap
 *         This will wrap an IOR in a Python object.
 */

#ifndef included_sidlx_rmi_ChildSocket_MODULE
#define included_sidlx_rmi_ChildSocket_MODULE

#include <Python.h>
#include "sidlType.h"
#ifdef HAVE_PTHREAD
#include <pthread.h>
#endif /* HAVE_PTHREAD */

#ifdef __cplusplus
extern "C" {
#endif

struct sidl__array;

/* Forward declaration of IOR structure */
struct sidlx_rmi_ChildSocket__object;
struct sidlx_rmi_ChildSocket__array;
struct sidl_BaseInterface__object;

#define sidlx_rmi_ChildSocket__wrap_NUM 0
#define sidlx_rmi_ChildSocket__wrap_RETURN PyObject *
#define sidlx_rmi_ChildSocket__wrap_PROTO (struct sidlx_rmi_ChildSocket__object *sidlobj)

#define sidlx_rmi_ChildSocket__convert_NUM 1
#define sidlx_rmi_ChildSocket__convert_RETURN int
#define sidlx_rmi_ChildSocket__convert_PROTO (PyObject *obj, struct sidlx_rmi_ChildSocket__object **sidlobj)

#define sidlx_rmi_ChildSocket__convert_python_array_NUM 2
#define sidlx_rmi_ChildSocket__convert_python_array_RETURN int
#define sidlx_rmi_ChildSocket__convert_python_array_PROTO (PyObject *obj, struct sidlx_rmi_ChildSocket__array **sidlarray)

#define sidlx_rmi_ChildSocket__convert_sidl_array_NUM 3
#define sidlx_rmi_ChildSocket__convert_sidl_array_RETURN PyObject *
#define sidlx_rmi_ChildSocket__convert_sidl_array_PROTO (struct sidl__array *sidlarray)

#define sidlx_rmi_ChildSocket__weakRef_NUM 4
#define sidlx_rmi_ChildSocket__weakRef_RETURN PyObject *
#define sidlx_rmi_ChildSocket__weakRef_PROTO (struct sidlx_rmi_ChildSocket__object *sidlobj)

#define sidlx_rmi_ChildSocket_deref_NUM 5
#define sidlx_rmi_ChildSocket_deref_RETURN void
#define sidlx_rmi_ChildSocket_deref_PROTO (struct sidlx_rmi_ChildSocket__object *sidlobj)

#define sidlx_rmi_ChildSocket__newRef_NUM 6
#define sidlx_rmi_ChildSocket__newRef_RETURN PyObject *
#define sidlx_rmi_ChildSocket__newRef_PROTO (struct sidlx_rmi_ChildSocket__object *sidlobj)

#define sidlx_rmi_ChildSocket__addRef_NUM 7
#define sidlx_rmi_ChildSocket__addRef_RETURN void
#define sidlx_rmi_ChildSocket__addRef_PROTO (struct sidlx_rmi_ChildSocket__object *sidlobj)

#define sidlx_rmi_ChildSocket_PyType_NUM 8
#define sidlx_rmi_ChildSocket_PyType_RETURN PyTypeObject *
#define sidlx_rmi_ChildSocket_PyType_PROTO (void)

#define sidlx_rmi_ChildSocket__connectI_NUM 9
#define sidlx_rmi_ChildSocket__connectI_RETURN struct sidlx_rmi_ChildSocket__object* 
#define sidlx_rmi_ChildSocket__connectI_PROTO (const char* url, sidl_bool ar, struct sidl_BaseInterface__object ** _ex)

#define sidlx_rmi_ChildSocket__rmicast_NUM 10
#define sidlx_rmi_ChildSocket__rmicast_RETURN struct sidlx_rmi_ChildSocket__object* 
#define sidlx_rmi_ChildSocket__rmicast_PROTO (void* bi, struct sidl_BaseInterface__object ** _ex)

#define sidlx_rmi_ChildSocket__API_NUM 11

#ifdef sidlx_rmi_ChildSocket_INTERNAL

#define sidlx_rmi_ChildSocket__import() ;


/*
 * This declaration is not for clients.
 */

static sidlx_rmi_ChildSocket__wrap_RETURN
sidlx_rmi_ChildSocket__wrap
sidlx_rmi_ChildSocket__wrap_PROTO;

static sidlx_rmi_ChildSocket__convert_RETURN
sidlx_rmi_ChildSocket__convert
sidlx_rmi_ChildSocket__convert_PROTO;

static sidlx_rmi_ChildSocket__convert_python_array_RETURN
sidlx_rmi_ChildSocket__convert_python_array
sidlx_rmi_ChildSocket__convert_python_array_PROTO;

static sidlx_rmi_ChildSocket__convert_sidl_array_RETURN
sidlx_rmi_ChildSocket__convert_sidl_array
sidlx_rmi_ChildSocket__convert_sidl_array_PROTO;

static sidlx_rmi_ChildSocket__weakRef_RETURN
sidlx_rmi_ChildSocket__weakRef
sidlx_rmi_ChildSocket__weakRef_PROTO;

static sidlx_rmi_ChildSocket_deref_RETURN
sidlx_rmi_ChildSocket_deref
sidlx_rmi_ChildSocket_deref_PROTO;

static sidlx_rmi_ChildSocket__newRef_RETURN
sidlx_rmi_ChildSocket__newRef
sidlx_rmi_ChildSocket__newRef_PROTO;

static sidlx_rmi_ChildSocket__addRef_RETURN
sidlx_rmi_ChildSocket__addRef
sidlx_rmi_ChildSocket__addRef_PROTO;

static sidlx_rmi_ChildSocket_PyType_RETURN
sidlx_rmi_ChildSocket_PyType
sidlx_rmi_ChildSocket_PyType_PROTO;

#else

static void **sidlx_rmi_ChildSocket__API = NULL;

#define sidlx_rmi_ChildSocket__wrap \
  (*((sidlx_rmi_ChildSocket__wrap_RETURN (*) \
  sidlx_rmi_ChildSocket__wrap_PROTO) \
  (sidlx_rmi_ChildSocket__API \
  [sidlx_rmi_ChildSocket__wrap_NUM])))

#define sidlx_rmi_ChildSocket__convert \
  (*((sidlx_rmi_ChildSocket__convert_RETURN (*) \
  sidlx_rmi_ChildSocket__convert_PROTO) \
  (sidlx_rmi_ChildSocket__API \
  [sidlx_rmi_ChildSocket__convert_NUM])))

#define sidlx_rmi_ChildSocket__convert_python_array \
  (*((sidlx_rmi_ChildSocket__convert_python_array_RETURN (*) \
  sidlx_rmi_ChildSocket__convert_python_array_PROTO) \
  (sidlx_rmi_ChildSocket__API \
  [sidlx_rmi_ChildSocket__convert_python_array_NUM])))

#define sidlx_rmi_ChildSocket__convert_sidl_array \
  (*((sidlx_rmi_ChildSocket__convert_sidl_array_RETURN (*) \
  sidlx_rmi_ChildSocket__convert_sidl_array_PROTO) \
  (sidlx_rmi_ChildSocket__API \
  [sidlx_rmi_ChildSocket__convert_sidl_array_NUM])))

#define sidlx_rmi_ChildSocket__weakRef \
  (*((sidlx_rmi_ChildSocket__weakRef_RETURN (*) \
  sidlx_rmi_ChildSocket__weakRef_PROTO) \
  (sidlx_rmi_ChildSocket__API \
  [sidlx_rmi_ChildSocket__weakRef_NUM])))

#define sidlx_rmi_ChildSocket_deref \
  (*((sidlx_rmi_ChildSocket_deref_RETURN (*) \
  sidlx_rmi_ChildSocket_deref_PROTO) \
  (sidlx_rmi_ChildSocket__API \
  [sidlx_rmi_ChildSocket_deref_NUM])))

#define sidlx_rmi_ChildSocket__newRef \
  (*((sidlx_rmi_ChildSocket__newRef_RETURN (*) \
  sidlx_rmi_ChildSocket__newRef_PROTO) \
  (sidlx_rmi_ChildSocket__API \
  [sidlx_rmi_ChildSocket__newRef_NUM])))

#define sidlx_rmi_ChildSocket__addRef \
  (*((sidlx_rmi_ChildSocket__addRef_RETURN (*) \
  sidlx_rmi_ChildSocket__addRef_PROTO) \
  (sidlx_rmi_ChildSocket__API \
  [sidlx_rmi_ChildSocket__addRef_NUM])))

#define sidlx_rmi_ChildSocket_PyType \
  (*((sidlx_rmi_ChildSocket_PyType_RETURN (*) \
  sidlx_rmi_ChildSocket_PyType_PROTO) \
  (sidlx_rmi_ChildSocket__API \
  [sidlx_rmi_ChildSocket_PyType_NUM])))

#define sidlx_rmi_ChildSocket__connectI \
  (*((sidlx_rmi_ChildSocket__connectI_RETURN (*) \
  sidlx_rmi_ChildSocket__connectI_PROTO) \
  (sidlx_rmi_ChildSocket__API \
  [sidlx_rmi_ChildSocket__connectI_NUM])))

#define sidlx_rmi_ChildSocket__rmicast \
  (*((sidlx_rmi_ChildSocket__rmicast_RETURN (*) \
  sidlx_rmi_ChildSocket__rmicast_PROTO) \
  (sidlx_rmi_ChildSocket__API \
  [sidlx_rmi_ChildSocket__rmicast_NUM])))

#ifdef HAVE_PTHREAD
#define sidlx_rmi_ChildSocket__import() \
{ \
  pthread_mutex_t __sidl_pyapi_mutex = PTHREAD_MUTEX_INITIALIZER; \
  pthread_mutex_lock(&__sidl_pyapi_mutex); \
  if (!sidlx_rmi_ChildSocket__API) { \
    PyObject *module = PyImport_ImportModule("sidlx.rmi.ChildSocket"); \
    if (module != NULL) { \
      PyObject *module_dict = PyModule_GetDict(module); \
      PyObject *c_api_object = \
        PyDict_GetItemString(module_dict, "_C_API"); \
      if (c_api_object && PyCObject_Check(c_api_object)) { \
        sidlx_rmi_ChildSocket__API = \
          (void **)PyCObject_AsVoidPtr(c_api_object); \
      } \
      else { fprintf(stderr, "babel: sidlx_rmi_ChildSocket__import failed to lookup _C_API (%p %p %s).\n", c_api_object, c_api_object ? c_api_object->ob_type : NULL, c_api_object ? c_api_object->ob_type->tp_name : ""); }\
      Py_DECREF(module); \
    } else { fprintf(stderr, "babel: sidlx_rmi_ChildSocket__import failed to import its module.\n"); }\
  }\
  pthread_mutex_unlock(&__sidl_pyapi_mutex); \
  pthread_mutex_destroy(&__sidl_pyapi_mutex); \
}
#else /* !HAVE_PTHREAD */
#define sidlx_rmi_ChildSocket__import() \
if (!sidlx_rmi_ChildSocket__API) { \
  PyObject *module = PyImport_ImportModule("sidlx.rmi.ChildSocket"); \
  if (module != NULL) { \
    PyObject *module_dict = PyModule_GetDict(module); \
    PyObject *c_api_object = \
      PyDict_GetItemString(module_dict, "_C_API"); \
    if (c_api_object && PyCObject_Check(c_api_object)) { \
      sidlx_rmi_ChildSocket__API = \
        (void **)PyCObject_AsVoidPtr(c_api_object); \
    } \
    else { fprintf(stderr, "babel: sidlx_rmi_ChildSocket__import failed to lookup _C_API (%p %p %s).\n", c_api_object, c_api_object ? c_api_object->ob_type : NULL, c_api_object ? c_api_object->ob_type->tp_name : ""); }\
    Py_DECREF(module); \
  } else { fprintf(stderr, "babel: sidlx_rmi_ChildSocket__import failed to import its module.\n"); }\
}
#endif /* HAVE_PTHREAD */

#endif

#ifdef __cplusplus
}
#endif

#endif