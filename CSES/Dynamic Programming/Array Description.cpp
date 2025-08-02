#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;

int n, m, a[MAXN];
int ans, dp[MAXN][105];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    if (a[1] != 0) 
        dp[1][a[1]] = 1;
    else {
        for (int i = 1; i <= m; i++)
            dp[1][i] = 1;
    }

    for (int i = 2; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i] == 0 || a[i] == j)
                (dp[i][j] += dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]) %= MOD;

    for (int i = 1; i <= m; i++)
        (ans += dp[n][i]) %= MOD;

    cout << ans;
    return 0;
}