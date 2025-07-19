#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;
int n, dp[MAXN];

int32_t main() {
    freopen("DICE.INP", "r", stdin);
    freopen("DICE.OUT", "w", stdout);
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    dp[0] = 1;
    for (int j = 1; j <= n; j++)
        for (int i = 1; i <= 6 && i <= j; i++)
            (dp[j] += dp[j - i]) %= MOD;

    cout << dp[n];
    return 0;
}