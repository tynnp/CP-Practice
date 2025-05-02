import sys
import io

sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')
print("Học lập trình với Python để ra lệnh cho máy tính")