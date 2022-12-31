# This file is not meant for public use and will be removed in the future
# versions of SciPy. Use the `scipy.signal` namespace for importing the
# functions included below.

import warnings

from . import _spline

__all__ = [  # noqa: F822
    'cspline2d', 'qspline2d', 'sepfir2d', 'symiirorder1', 'symiirorder2']


def __dir__():
    return __all__


def __getattr__(name):
    if name not in __all__:
        raise AttributeError(
            "scipy.signal.spline is deprecated and has no attribute {}. "
            "Try looking in scipy.signal instead.".format(name))

    warnings.warn("Please use `{}` from the `scipy.signal` namespace, "
                  "the `scipy.signal.spline` namespace is deprecated.".format(name),
                  category=DeprecationWarning, stacklevel=2)
    return getattr(_spline, name)
