import sys
import io
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')

n = int(input())
m = int(input())
ans = n % m

if ans == 0:
    print("Có")
else:
    print("Không")