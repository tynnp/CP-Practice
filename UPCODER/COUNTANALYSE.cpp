#include <iostream>
using namespace std;

#define int int64_t
const int MOD = 1e9 + 7;
const int MAXN = 2e5 + 5;
int n, dp[MAXN];

int32_t main() {
    cin >> n;
    
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = i; j <= n; j++)
            dp[j] += dp[j - i] % MOD;
            
    cout << dp[n];
    return 0;
}