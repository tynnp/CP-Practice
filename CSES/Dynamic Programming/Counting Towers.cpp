#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;
 
int n, t, dp[MAXN][3];
 
int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
 
    dp[1][1] = dp[1][2] = 1;
 
    for (int i = 2; i < MAXN; i++) {
        (dp[i][1] = dp[i-1][2] + 4 * dp[i-1][1]) %= MOD;
        (dp[i][2] = dp[i-1][1] + 2 * dp[i-1][2]) %= MOD; 
    }
 
    while (t--) {
        cin >> n;
        cout << (dp[n][1] + dp[n][2]) % MOD << '\n';
    }
    
    return 0;
}