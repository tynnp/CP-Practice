import io
import sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')

a = int(input())
b = int(input())
u = int(input())
v = int(input())
x = int(input())
y = int(input())

ans = (a + u) * (x - y) + (b + v) * y
print("Tổng số tiền vé: {0} nghìn đồng".format(ans))