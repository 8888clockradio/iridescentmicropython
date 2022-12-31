def pytest_report_header(config):
    import os
    import platform
    import sys
    import time

    # DocutilsTestSupport must be imported before docutils
    from . import DocutilsTestSupport  # NoQA: F401
    import docutils

    return '\n'.join((
        '',
        'Testing Docutils {docutils.__version__} '.format(docutils),
        'with Python {sys.version.split()[0]} '.format(sys),
        'on {time.strftime("%Y-%m-%d at %H:%M:%S")}'.format(time),
        'OS: {platform.system()} {platform.release()} {platform.version()} '.format(platform),
        '({sys.platform}, {platform.platform()})'.format(sys, platform),
        'Working directory: {os.getcwd()}'.format(os),
        'Docutils package: {os.path.dirname(docutils.__file__)}'.format(docutils),
        '',
    ))
