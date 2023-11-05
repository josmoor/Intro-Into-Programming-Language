'''
    The given Try-Exception block has a simple action of trying to
    print the variable 'x', but the variable does not exist, so
    an exception is thrown.
'''
try:
    print(x)
except:
    print("Could not find the variable \'x\', so an error was thrown.")