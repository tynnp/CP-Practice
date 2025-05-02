import io
import sys
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')

a = int(input())
b = int(input())
c = int(input())

print("Tổng ba số: {0}".format(a + b + c))
print("Tổng bình phương ba số: {0}".format(a**2 + b**2 + c**2))