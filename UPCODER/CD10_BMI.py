import sys
import io
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')

w = float(input())
h = float(input())

def calc(w, h):
    bmi = w / (h ** 2)
    if bmi < 18.5:
        return "Thiếu cân"
    elif bmi <= 22.9:
        return "Bình thường"
    else:
        return "Thừa cân"
        
print(calc(w, h))