def calc(a, b, d1, d2, d3, x):
    if x <= a:
        return x * d1
    elif x <= b:
        return a * d1 + (x - a) * d2
    else:
        return a * d1 + (b - a) * d2 + (x - b) * d3
        
a = int(input())
b = int(input())
d1 = int(input())
d2 = int(input())
d3 = int(input())
x = int(input())

print(calc(a, b, d1, d2, d3, x))