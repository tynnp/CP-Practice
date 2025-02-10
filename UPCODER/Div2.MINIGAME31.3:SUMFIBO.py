MOD = 10**9 + 7

def sum(A, B, mod):
    res = [[0, 0], [0, 0]]
    
    for i in range(2):
        for j in range(2):
            res[i][j] = 0
            for k in range(2):
                res[i][j] += A[i][k] * B[k][j]
            res[i][j] %= mod
    
    return res

def pow(matrix, n, mod):
    res = [[1, 0], [0, 1]]  
    base = matrix
    
    while n > 0:
        if n % 2 == 1:
            res = sum(res, base, mod)
        base = sum(base, base, mod)
        n //= 2
    
    return res

def fib(n, mod):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    
    T = [[1, 1], [1, 0]]
    Tn = pow(T, n - 1, mod)
    
    return Tn[0][0]

def sumFib(n, mod):
    if n == 0:
        return 0
    
    tmp = fib(n + 2, mod)
    sumN = (tmp - 1 + mod) % mod
    return sumN

n = int(input())
print(sumFib(n, MOD))