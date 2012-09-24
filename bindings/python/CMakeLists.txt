execute_process(COMMAND
  ${PYTHON_EXECUTABLE} -c "from distutils.sysconfig import get_python_lib;
print get_python_lib(plat_specific=True, prefix='')"
  OUTPUT_VARIABLE PYTHON_SITE_PACKAGES OUTPUT_STRIP_TRAILING_WHITESPACE)

install (FILES
 __init__.py
 Charset.py
 DESTINATION "${PYTHON_SITE_PACKAGES}/BoGo"
 )
