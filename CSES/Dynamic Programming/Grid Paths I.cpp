#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1005;
const int MOD = 1e9 + 7;

char c;
bool a[MAXN][MAXN];
int n, ans, dp[MAXN][MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c;
            a[i][j] = c == '.';
        }
    }

    dp[1][1] = a[1][1];
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= n; j++)
            if ((i != 1 || j != 1) && a[i][j])
                (dp[i][j] = dp[i-1][j] + dp[i][j-1]) %= MOD;
    
    cout << dp[n][n];
    return 0;
}