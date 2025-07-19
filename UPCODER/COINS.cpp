#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, x, a[105];
int dp[MAXN];

int32_t main() {
    freopen("COINS.INP", "r", stdin);
    freopen("COINS.OUT", "w", stdout);
    cin.tie(0) -> sync_with_stdio(0);
    fill(dp, dp + MAXN, LLONG_MAX);
    
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    dp[0] = 0;
    for (int i = 1; i <= x; i++) 
        for (int j = 0; j < n; j++) 
            if (i >= a[j] && dp[i - a[j]] != LLONG_MAX)
                dp[i] = min(dp[i], dp[i - a[j]] + 1);
    
    cout << (dp[x] == LLONG_MAX ? -1 : dp[x]);
    return 0;
}