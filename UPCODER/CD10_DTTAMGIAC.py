import math

def heron(a, b, c):
    s = (a + b + c) / 2
    a = math.sqrt(s * (s - a) * (s - b) * (s - c))
    return a

s = [float(input()) for _ in range(9)]
t1 = s[0:3]
t2 = s[3:6]
t3 = s[6:9]

a1 = heron(*t1)
a2 = heron(*t2)
a3 = heron(*t3)

print("{0:.2f}".format(max(a1, a2, a3)))
