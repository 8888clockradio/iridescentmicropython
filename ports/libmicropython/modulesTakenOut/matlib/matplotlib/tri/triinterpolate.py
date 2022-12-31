from ._triinterpolate import *  # noqa: F401, F403
from matplotlib import _api


_api.warn_deprecated(
    "3.7",
    message="Importing {} was deprecated in Matplotlib 3.7 and will "
            "be removed two minor releases later. All functionality is "
            "available via the top-level module matplotlib.tri".format(__name__))
