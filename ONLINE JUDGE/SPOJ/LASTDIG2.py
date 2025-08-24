import math

t = int(input())
for _ in range(t):
  a, b = map(int, input().split())
  print(pow(a, b, 10))