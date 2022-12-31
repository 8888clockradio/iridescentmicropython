# This file is not meant for public use and will be removed in SciPy v2.0.0.
# Use the `scipy.ndimage` namespace for importing the functions
# included below.

import warnings
from . import _fourier


__all__ = [  # noqa: F822
    'fourier_gaussian', 'fourier_uniform',
    'fourier_ellipsoid', 'fourier_shift', 'normalize_axis_index'
]


def __dir__():
    return __all__


def __getattr__(name):
    if name not in __all__:
        raise AttributeError(
            "scipy.ndimage.fourier is deprecated and has no attribute "
            "{}. Try looking in scipy.ndimage instead.".format(name))

    warnings.warn("Please use `{}` from the `scipy.ndimage` namespace, "
                  "the `scipy.ndimage.fourier` namespace is deprecated.".format(name),
                  category=DeprecationWarning, stacklevel=2)

    return getattr(_fourier, name)
