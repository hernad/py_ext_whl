#include <Python.h>

static PyObject* helloe(PyObject* self) {
   return Py_BuildValue("s", "Hello, Python extensions!!");
}

static char helloe_docs[] =
   "helloe( ): Any message you want to put here!!\n";

static PyMethodDef helloe_funcs[] = {
   {"helloe", (PyCFunction)helloe, 
      METH_NOARGS, helloe_docs},
      {NULL}
};

static struct PyModuleDef helloe_module = {

    PyModuleDef_HEAD_INIT,
    "helloe",
    NULL, /*This is for documentation, which we won't use; so it is NULL. */
    -1,
    helloe_funcs
};

PyMODINIT_FUNC
PyInit_helloe(void) {
    return PyModule_Create(&helloe_module);
}
