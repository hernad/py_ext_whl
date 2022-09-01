from distutils.core import setup, Extension
setup(name='helloe', version='2.1.0',  \
      ext_modules=[Extension('helloe', ['helloe.c'])])