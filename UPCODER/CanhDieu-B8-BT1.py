n = int(input())
ans = 0

i = 1
for i in range(1, n):
    if i % 3 == 0:
        ans += i

print(ans)