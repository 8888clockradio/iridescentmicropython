#include "_tri.h"
#include "../mplutils.h"
#include "../py_exceptions.h"


/* Triangulation */

typedef struct
{
    PyObject_HEAD
    Triangulation* ptr;
} PyTriangulation;

static PyTypeObject PyTriangulationType;

static PyObject* PyTriangulation_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    PyTriangulation* self;
    self = (PyTriangulation*)type->tp_alloc(type, 0);
    self->ptr = NULL;
    return (PyObject*)self;
}

const char* PyTriangulation_init__doc__ =
    "Triangulation(x, y, triangles, mask, edges, neighbors)\n"
    "--\n\n"
    "Create a new C++ Triangulation object.\n"
    "This should not be called directly, instead use the python class\n"
    "matplotlib.tri.Triangulation instead.\n";

static int PyTriangulation_init(PyTriangulation* self, PyObject* args, PyObject* kwds)
{
    Triangulation::CoordinateArray x, y;
    Triangulation::TriangleArray triangles;
    Triangulation::MaskArray mask;
    Triangulation::EdgeArray edges;
    Triangulation::NeighborArray neighbors;
    int correct_triangle_orientations;

    if (!PyArg_ParseTuple(args,
                          "O&O&O&O&O&O&i",
                          &x.converter, &x,
                          &y.converter, &y,
                          &triangles.converter, &triangles,
                          &mask.converter, &mask,
                          &edges.converter, &edges,
                          &neighbors.converter, &neighbors,
                          &correct_triangle_orientations)) {
        return -1;
    }

    // x and y.
    if (x.empty() || y.empty() || x.dim(0) != y.dim(0)) {
        PyErr_SetString(PyExc_ValueError,
            "x and y must be 1D arrays of the same length");
        return -1;
    }

    // triangles.
    if (triangles.empty() || triangles.dim(1) != 3) {
        PyErr_SetString(PyExc_ValueError,
            "triangles must be a 2D array of shape (?,3)");
        return -1;
    }

    // Optional mask.
    if (!mask.empty() && mask.dim(0) != triangles.dim(0)) {
        PyErr_SetString(PyExc_ValueError,
            "mask must be a 1D array with the same length as the triangles array");
        return -1;
    }

    // Optional edges.
    if (!edges.empty() && edges.dim(1) != 2) {
        PyErr_SetString(PyExc_ValueError,
            "edges must be a 2D array with shape (?,2)");
        return -1;
    }

    // Optional neighbors.
    if (!neighbors.empty() && (neighbors.dim(0) != triangles.dim(0) ||
                               neighbors.dim(1) != triangles.dim(1))) {
        PyErr_SetString(PyExc_ValueError,
            "neighbors must be a 2D array with the same shape as the triangles array");
        return -1;
    }

    CALL_CPP_INIT("Triangulation",
                  (self->ptr = new Triangulation(x, y, triangles, mask,
                                                 edges, neighbors,
                                                 correct_triangle_orientations)));
    return 0;
}

static void PyTriangulation_dealloc(PyTriangulation* self)
{
    delete self->ptr;
    Py_TYPE(self)->tp_free((PyObject*)self);
}

const char* PyTriangulation_calculate_plane_coefficients__doc__ =
    "calculate_plane_coefficients(self, z, plane_coefficients)\n"
    "--\n\n"
    "Calculate plane equation coefficients for all unmasked triangles.";

static PyObject* PyTriangulation_calculate_plane_coefficients(PyTriangulation* self, PyObject* args)
{
    Triangulation::CoordinateArray z;
    if (!PyArg_ParseTuple(args, "O&:calculate_plane_coefficients",
                          &z.converter, &z)) {
        return NULL;
    }

    if (z.empty() || z.dim(0) != self->ptr->get_npoints()) {
        PyErr_SetString(PyExc_ValueError,
            "z array must have same length as triangulation x and y arrays");
        return NULL;
    }

    Triangulation::TwoCoordinateArray result;
    CALL_CPP("calculate_plane_coefficients",
             (result = self->ptr->calculate_plane_coefficients(z)));
    return result.pyobj();
}

const char* PyTriangulation_get_edges__doc__ =
    "get_edges(self)\n"
    "--\n\n"
    "Return edges array.";

static PyObject* PyTriangulation_get_edges(PyTriangulation* self, PyObject* args)
{
    Triangulation::EdgeArray* result;
    CALL_CPP("get_edges", (result = &self->ptr->get_edges()));

    if (result->empty()) {
        Py_RETURN_NONE;
    }
    else
        return result->pyobj();
}

const char* PyTriangulation_get_neighbors__doc__ =
    "get_neighbors(self)\n"
    "--\n\n"
    "Return neighbors array.";

static PyObject* PyTriangulation_get_neighbors(PyTriangulation* self, PyObject* args)
{
    Triangulation::NeighborArray* result;
    CALL_CPP("get_neighbors", (result = &self->ptr->get_neighbors()));

    if (result->empty()) {
        Py_RETURN_NONE;
    }
    else
        return result->pyobj();
}

const char* PyTriangulation_set_mask__doc__ =
    "set_mask(self, mask)\n"
    "--\n\n"
    "Set or clear the mask array.";

static PyObject* PyTriangulation_set_mask(PyTriangulation* self, PyObject* args)
{
    Triangulation::MaskArray mask;

    if (!PyArg_ParseTuple(args, "O&:set_mask", &mask.converter, &mask)) {
        return NULL;
    }

    if (!mask.empty() && mask.dim(0) != self->ptr->get_ntri()) {
        PyErr_SetString(PyExc_ValueError,
            "mask must be a 1D array with the same length as the triangles array");
        return NULL;
    }

    CALL_CPP("set_mask", (self->ptr->set_mask(mask)));
    Py_RETURN_NONE;
}

static PyTypeObject *PyTriangulation_init_type()
{
    static PyMethodDef methods[] = {
        {"calculate_plane_coefficients",
         (PyCFunction)PyTriangulation_calculate_plane_coefficients,
         METH_VARARGS,
         PyTriangulation_calculate_plane_coefficients__doc__},
        {"get_edges",
         (PyCFunction)PyTriangulation_get_edges,
         METH_NOARGS,
         PyTriangulation_get_edges__doc__},
        {"get_neighbors",
         (PyCFunction)PyTriangulation_get_neighbors,
         METH_NOARGS,
         PyTriangulation_get_neighbors__doc__},
        {"set_mask",
         (PyCFunction)PyTriangulation_set_mask,
         METH_VARARGS,
         PyTriangulation_set_mask__doc__},
        {NULL}
    };
    PyTriangulationType.tp_name = "matplotlib._tri.Triangulation";
    PyTriangulationType.tp_doc = PyTriangulation_init__doc__;
    PyTriangulationType.tp_basicsize = sizeof(PyTriangulation);
    PyTriangulationType.tp_dealloc = (destructor)PyTriangulation_dealloc;
    PyTriangulationType.tp_flags = Py_TPFLAGS_DEFAULT;
    PyTriangulationType.tp_methods = methods;
    PyTriangulationType.tp_new = PyTriangulation_new;
    PyTriangulationType.tp_init = (initproc)PyTriangulation_init;

    return &PyTriangulationType;
}


/* TriContourGenerator */

typedef struct
{
    PyObject_HEAD
    TriContourGenerator* ptr;
    PyTriangulation* py_triangulation;
} PyTriContourGenerator;

static PyTypeObject PyTriContourGeneratorType;

static PyObject* PyTriContourGenerator_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    PyTriContourGenerator* self;
    self = (PyTriContourGenerator*)type->tp_alloc(type, 0);
    self->ptr = NULL;
    self->py_triangulation = NULL;
    return (PyObject*)self;
}

const char* PyTriContourGenerator_init__doc__ =
    "TriContourGenerator(triangulation, z)\n"
    "--\n\n"
    "Create a new C++ TriContourGenerator object.\n"
    "This should not be called directly, instead use the functions\n"
    "matplotlib.axes.tricontour and tricontourf instead.\n";

static int PyTriContourGenerator_init(PyTriContourGenerator* self, PyObject* args, PyObject* kwds)
{
    PyObject* triangulation_arg;
    TriContourGenerator::CoordinateArray z;

    if (!PyArg_ParseTuple(args, "O!O&",
                          &PyTriangulationType, &triangulation_arg,
                          &z.converter, &z)) {
        return -1;
    }

    PyTriangulation* py_triangulation = (PyTriangulation*)triangulation_arg;
    Py_INCREF(py_triangulation);
    self->py_triangulation = py_triangulation;
    Triangulation& triangulation = *(py_triangulation->ptr);

    if (z.empty() || z.dim(0) != triangulation.get_npoints()) {
        PyErr_SetString(PyExc_ValueError,
            "z must be a 1D array with the same length as the x and y arrays");
        return -1;
    }

    CALL_CPP_INIT("TriContourGenerator",
                  (self->ptr = new TriContourGenerator(triangulation, z)));
    return 0;
}

static void PyTriContourGenerator_dealloc(PyTriContourGenerator* self)
{
    delete self->ptr;
    Py_XDECREF(self->py_triangulation);
    Py_TYPE(self)->tp_free((PyObject *)self);
}

const char* PyTriContourGenerator_create_contour__doc__ =
    "create_contour(self, level)\n"
    "--\n\n"
    "Create and return a non-filled contour.";

static PyObject* PyTriContourGenerator_create_contour(PyTriContourGenerator* self, PyObject* args)
{
    double level;
    if (!PyArg_ParseTuple(args, "d:create_contour", &level)) {
        return NULL;
    }

    PyObject* result;
    CALL_CPP("create_contour", (result = self->ptr->create_contour(level)));
    return result;
}

const char* PyTriContourGenerator_create_filled_contour__doc__ =
    "create_filled_contour(self, lower_level, upper_level)\n"
    "--\n\n"
    "Create and return a filled contour.";

static PyObject* PyTriContourGenerator_create_filled_contour(PyTriContourGenerator* self, PyObject* args)
{
    double lower_level, upper_level;
    if (!PyArg_ParseTuple(args, "dd:create_filled_contour",
                          &lower_level, &upper_level)) {
        return NULL;
    }

    if (lower_level >= upper_level)
    {
        PyErr_SetString(PyExc_ValueError,
            "filled contour levels must be increasing");
        return NULL;
    }

    PyObject* result;
    CALL_CPP("create_filled_contour",
             (result = self->ptr->create_filled_contour(lower_level,
                                                        upper_level)));
    return result;
}

static PyTypeObject *PyTriContourGenerator_init_type()
{
    static PyMethodDef methods[] = {
        {"create_contour",
         (PyCFunction)PyTriContourGenerator_create_contour,
         METH_VARARGS,
         PyTriContourGenerator_create_contour__doc__},
        {"create_filled_contour",
         (PyCFunction)PyTriContourGenerator_create_filled_contour,
         METH_VARARGS,
         PyTriContourGenerator_create_filled_contour__doc__},
        {NULL}
    };
    PyTriContourGeneratorType.tp_name = "matplotlib._tri.TriContourGenerator";
    PyTriContourGeneratorType.tp_doc = PyTriContourGenerator_init__doc__;
    PyTriContourGeneratorType.tp_basicsize = sizeof(PyTriContourGenerator);
    PyTriContourGeneratorType.tp_dealloc = (destructor)PyTriContourGenerator_dealloc;
    PyTriContourGeneratorType.tp_flags = Py_TPFLAGS_DEFAULT;
    PyTriContourGeneratorType.tp_methods = methods;
    PyTriContourGeneratorType.tp_new = PyTriContourGenerator_new;
    PyTriContourGeneratorType.tp_init = (initproc)PyTriContourGenerator_init;

    return &PyTriContourGeneratorType;
}


/* TrapezoidMapTriFinder */

typedef struct
{
    PyObject_HEAD
    TrapezoidMapTriFinder* ptr;
    PyTriangulation* py_triangulation;
} PyTrapezoidMapTriFinder;

static PyTypeObject PyTrapezoidMapTriFinderType;

static PyObject* PyTrapezoidMapTriFinder_new(PyTypeObject* type, PyObject* args, PyObject* kwds)
{
    PyTrapezoidMapTriFinder* self;
    self = (PyTrapezoidMapTriFinder*)type->tp_alloc(type, 0);
    self->ptr = NULL;
    self->py_triangulation = NULL;
    return (PyObject*)self;
}

const char* PyTrapezoidMapTriFinder_init__doc__ =
    "TrapezoidMapTriFinder(triangulation)\n"
    "--\n\n"
    "Create a new C++ TrapezoidMapTriFinder object.\n"
    "This should not be called directly, instead use the python class\n"
    "matplotlib.tri.TrapezoidMapTriFinder instead.\n";

static int PyTrapezoidMapTriFinder_init(PyTrapezoidMapTriFinder* self, PyObject* args, PyObject* kwds)
{
    PyObject* triangulation_arg;
    if (!PyArg_ParseTuple(args, "O!",
                          &PyTriangulationType, &triangulation_arg)) {
        return -1;
    }

    PyTriangulation* py_triangulation = (PyTriangulation*)triangulation_arg;
    Py_INCREF(py_triangulation);
    self->py_triangulation = py_triangulation;
    Triangulation& triangulation = *(py_triangulation->ptr);

    CALL_CPP_INIT("TrapezoidMapTriFinder",
                  (self->ptr = new TrapezoidMapTriFinder(triangulation)));
    return 0;
}

static void PyTrapezoidMapTriFinder_dealloc(PyTrapezoidMapTriFinder* self)
{
    delete self->ptr;
    Py_XDECREF(self->py_triangulation);
    Py_TYPE(self)->tp_free((PyObject *)self);
}

const char* PyTrapezoidMapTriFinder_find_many__doc__ =
    "find_many(self, x, y)\n"
    "--\n\n"
    "Find indices of triangles containing the point coordinates (x, y).";

static PyObject* PyTrapezoidMapTriFinder_find_many(PyTrapezoidMapTriFinder* self, PyObject* args)
{
    TrapezoidMapTriFinder::CoordinateArray x, y;
    if (!PyArg_ParseTuple(args, "O&O&:find_many",
                          &x.converter, &x,
                          &y.converter, &y)) {
        return NULL;
    }

    if (x.empty() || y.empty() || x.dim(0) != y.dim(0)) {
        PyErr_SetString(PyExc_ValueError,
            "x and y must be array-like with same shape");
        return NULL;
    }

    TrapezoidMapTriFinder::TriIndexArray result;
    CALL_CPP("find_many", (result = self->ptr->find_many(x, y)));
    return result.pyobj();
}

const char* PyTrapezoidMapTriFinder_get_tree_stats__doc__ =
    "get_tree_stats(self)\n"
    "--\n\n"
    "Return statistics about the tree used by the trapezoid map.";

static PyObject* PyTrapezoidMapTriFinder_get_tree_stats(PyTrapezoidMapTriFinder* self, PyObject* args)
{
    PyObject* result;
    CALL_CPP("get_tree_stats", (result = self->ptr->get_tree_stats()));
    return result;
}

const char* PyTrapezoidMapTriFinder_initialize__doc__ =
    "initialize(self)\n"
    "--\n\n"
    "Initialize this object, creating the trapezoid map from the triangulation.";

static PyObject* PyTrapezoidMapTriFinder_initialize(PyTrapezoidMapTriFinder* self, PyObject* args)
{
    CALL_CPP("initialize", (self->ptr->initialize()));
    Py_RETURN_NONE;
}

const char* PyTrapezoidMapTriFinder_print_tree__doc__ =
    "print_tree(self)\n"
    "--\n\n"
    "Print the search tree as text to stdout; useful for debug purposes.";

static PyObject* PyTrapezoidMapTriFinder_print_tree(PyTrapezoidMapTriFinder* self, PyObject* args)
{
    CALL_CPP("print_tree", (self->ptr->print_tree()));
    Py_RETURN_NONE;
}

static PyTypeObject *PyTrapezoidMapTriFinder_init_type()
{
    static PyMethodDef methods[] = {
        {"find_many",
         (PyCFunction)PyTrapezoidMapTriFinder_find_many,
         METH_VARARGS,
         PyTrapezoidMapTriFinder_find_many__doc__},
        {"get_tree_stats",
         (PyCFunction)PyTrapezoidMapTriFinder_get_tree_stats,
         METH_NOARGS,
         PyTrapezoidMapTriFinder_get_tree_stats__doc__},
        {"initialize",
         (PyCFunction)PyTrapezoidMapTriFinder_initialize,
         METH_NOARGS,
         PyTrapezoidMapTriFinder_initialize__doc__},
        {"print_tree",
         (PyCFunction)PyTrapezoidMapTriFinder_print_tree,
         METH_NOARGS,
         PyTrapezoidMapTriFinder_print_tree__doc__},
        {NULL}
    };
    PyTrapezoidMapTriFinderType.tp_name = "matplotlib._tri.TrapezoidMapTriFinder";
    PyTrapezoidMapTriFinderType.tp_doc = PyTrapezoidMapTriFinder_init__doc__;
    PyTrapezoidMapTriFinderType.tp_basicsize = sizeof(PyTrapezoidMapTriFinder);
    PyTrapezoidMapTriFinderType.tp_dealloc = (destructor)PyTrapezoidMapTriFinder_dealloc;
    PyTrapezoidMapTriFinderType.tp_flags = Py_TPFLAGS_DEFAULT;
    PyTrapezoidMapTriFinderType.tp_methods = methods;
    PyTrapezoidMapTriFinderType.tp_new = PyTrapezoidMapTriFinder_new;
    PyTrapezoidMapTriFinderType.tp_init = (initproc)PyTrapezoidMapTriFinder_init;

    return &PyTrapezoidMapTriFinderType;
}

static struct PyModuleDef moduledef = { PyModuleDef_HEAD_INIT, "_tri" };

#pragma GCC visibility push(default)

PyMODINIT_FUNC PyInit__tri(void)
{
    import_array();
    PyObject *m;
    if (!(m = PyModule_Create(&moduledef))
        || prepare_and_add_type(PyTriangulation_init_type(), m)
        || prepare_and_add_type(PyTriContourGenerator_init_type(), m)
        || prepare_and_add_type(PyTrapezoidMapTriFinder_init_type(), m)) {
        Py_XDECREF(m);
        return NULL;
    }
    return m;
}

#pragma GCC visibility pop
