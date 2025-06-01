#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAXW = 1e5 + 5;
int n, W, dp[105][MAXW];
int w[105], v[105];

int32_t main() {
    cin >> n >> W;
    for (int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= W; j++) {
            dp[i][j] = dp[i-1][j];
            if (j - w[i] >= 0)
                dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + v[i]);
        }
    }

    cout << dp[n][W];
    return 0;
}