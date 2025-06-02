#include <bits/stdc++.h>
using namespace std;

#define int long long
int n, a[404];
int dp[404][404], sum[404];

int get(int i, int j) {
    return sum[j] - sum[i - 1];
}

int32_t main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 1; i + len - 1 <= n; i++) {
            int j = i + len - 1;
            dp[i][j] = 1e18;
            for (int k = i; k < j; k++) 
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + get(i, j));
        }
    }

    cout << dp[1][n];
    return 0;
}