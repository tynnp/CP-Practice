import sys, io
sys.stdout = io.TextIOWrapper(sys.stdout.buffer, encoding='utf-8')

a = int(input())

if a <= 0:
    print('Số không hợp lệ.')

def Drawbox(a):
    for i in range(a):
        for j in range(10):
            print('#',end='')
        print()
    
Drawbox(a)