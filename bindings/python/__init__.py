from ctypes import *

BoGoCpp = cdll.LoadLibrary('libbogo.so')

# Cpp functions declaration here
cpp_process_key = BoGoCpp.c_processKey
cpp_process_key.restype = c_char_p

cpp_utf8_to_charset = BoGoCpp.c_utf8ToCharset
cpp_utf8_to_charset.restype = c_char_p

# Python wrappers of cpp functions
def process_key(string, keyval):
    _string = c_char_p(string.encode("utf8"))
    _keyval = c_char(keyval.encode("utf8"))
    result = unicode(cpp_process_key(_string, _keyval), "utf8")
    return result

def utf8_to_tcvn3(string):
    _string = c_char_p(string.encode("utf8"))
    return cpp_utf8_to_charset(_string, 1) # 1 = TCVN3

#import Charset
#def utf8_to_tcvn3(string):
#    return Charset.utf8_to_tcvn3(string)
