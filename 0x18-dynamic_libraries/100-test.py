import random
import ctypes

co = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, co.add(a, b)))
print("{} - {} = {}".format(a, b, co.sub(a, b)))
print("{} x {} = {}".format(a, b, co.mul(a, b)))
print("{} / {} = {}".format(a, b, co.div(a, b)))
print("{} % {} = {}".format(a, b, co.mod(a, b)))
