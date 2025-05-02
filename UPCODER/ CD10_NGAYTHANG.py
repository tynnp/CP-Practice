import sys
import io
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')

dd, mm, yyyy = input().split("/")
print("Ngày {0} tháng {1} năm {2}".format(dd, mm, yyyy))