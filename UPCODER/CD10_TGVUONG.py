import math

b = int(input())
c = int(input())

dt = round(0.5 * b * c, 1)
ch = round(math.sqrt(b**2 + c**2), 1)

print(dt)
print(ch)