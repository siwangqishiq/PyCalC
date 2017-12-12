import ctypes

ll = ctypes.cdll.LoadLibrary;
lib = ll("./add.so")

addf = lib.caddf
addf.argtypes = (ctypes.c_float, ctypes.c_float)
addf.restype = ctypes.c_float

ret = addf(10.3,20.2)
print(ret)

sayHello = lib.csayHello
sayHello.argtypes = ()
sayHello.restype = ctypes.c_char_p

print(sayHello());


sayHehe = lib.csayHehe
sayHehe.argtypes = ()
sayHehe.restype = ctypes.c_wchar_p
print(sayHehe());

#print(ctypes.create_string_buffer(lib.csayHello()));