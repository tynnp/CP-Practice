#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e5 + 5;

int n, a[MAXN], b[MAXN], c[MAXN];
int dp[MAXN][4];

int32_t main() {
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        cin >> b[i];

    for (int i = 1; i <= n; i++)
        cin >> c[i];

    for (int i = 1; i <= n; i++) {
        dp[i][1] = max(dp[i-1][2], dp[i-1][3]) + a[i];
        dp[i][2] = max(dp[i-1][1], dp[i-1][3]) + b[i];
        dp[i][3] = max(dp[i-1][2], dp[i-1][1]) + c[i];

    }
    
    cout << max(dp[n][1], max(dp[n][2], dp[n][3]));
    return 0;
}