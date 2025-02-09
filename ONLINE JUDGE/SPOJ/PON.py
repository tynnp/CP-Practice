import sys
import random

def rabin_miller(n, k=1):
    if n in (2, 3, 5, 7):
        return True
        
    if n < 11 or n % 2 == 0:
        return False
   
    d = n - 1
    r = 0
    while d % 2 == 0:
        d //= 2
        r += 1

    for _ in range(k):
        a = random.randrange(2, n - 1)
      
        x = pow(a, d, n)
        if x == 1 or x == n - 1:
            continue

        for _ in range(r - 1):
            x = (x * x) % n
            if x == n - 1:
                break
        else:
            return False 
    return True

data = sys.stdin.read().split()
t = int(data[0])
res = []
idx = 1

for _ in range(t):
    n = int(data[idx])
    idx += 1
    res.append("YES" if rabin_miller(n, k=1) else "NO")
print("\n".join(res))