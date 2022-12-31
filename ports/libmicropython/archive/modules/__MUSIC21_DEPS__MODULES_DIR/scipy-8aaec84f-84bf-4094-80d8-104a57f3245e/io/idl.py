# This file is not meant for public use and will be removed in SciPy v2.0.0.
# Use the `scipy.io` namespace for importing the functions
# included below.

import warnings
from . import _idl


__all__ = [  # noqa: F822
    'readsav', 'DTYPE_DICT', 'RECTYPE_DICT', 'STRUCT_DICT',
    'Pointer', 'ObjectPointer', 'AttrDict'
]


def __dir__():
    return __all__


def __getattr__(name):
    if name not in __all__:
        raise AttributeError(
            "scipy.io.idl is deprecated and has no attribute "
            "{}. Try looking in scipy.io instead.".format(name))

    warnings.warn("Please use `{}` from the `scipy.io` namespace, "
                  "the `scipy.io.idl` namespace is deprecated.".format(name),
                  category=DeprecationWarning, stacklevel=2)

    return getattr(_idl, name)
