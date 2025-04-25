n = int(input())
dp = [0] * (n + 1)
dp[0] = 1
coins = [1, 2, 5]

for coin in coins:
    for j in range(coin, n + 1):
        dp[j] += dp[j - coin]

print(dp[n])