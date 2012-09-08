from ctypes import *
import Charset

BoGoCpp = cdll.LoadLibrary('libbogoengine.so')

# Cpp functions declaration here
cpp_process_key = BoGoCpp.c_processKey
cpp_process_key.restype = c_char_p

# Python wrappers of cpp functions
def process_key(string, keyval):
    _string = c_char_p(string.encode("utf8"))
    _keyval = c_char(keyval.encode("utf8"))
    result = unicode(cpp_process_key(_string, _keyval), "utf8")
    return result

def utf8_to_tcvn3(string):
    return Charset.utf8_to_tcvn3(string)
