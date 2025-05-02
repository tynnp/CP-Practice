import sys
import io
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')

n = int(input())
s = ""

if n % 3328 == 0:
    s = "Năm nhuận kép"
elif (n % 400 == 0) or (n % 4 == 0 and n % 100 != 0):
    s = "Năm nhuận"
else:
    s = "Không là năm nhuận"
    
print(s)