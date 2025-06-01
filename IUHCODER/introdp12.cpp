#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 1000000007

const int MAXN = 1e3 + 5;
int n, dp[MAXN][MAXN];
char c[MAXN][MAXN];

int32_t main() {
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> c[i][j];
    
    dp[1][1] = (c[1][1] == '.' ? 1 : 0);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (c[i][j] == '*') continue;
            if (i > 1) dp[i][j] += dp[i-1][j];
            if (j > 1) dp[i][j] += dp[i][j-1];
            dp[i][j] %= MOD;
        }
    }

    cout << dp[n][n];
    return 0;
}