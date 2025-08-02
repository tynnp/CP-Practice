#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, x;
int c[MAXN], dp[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;

    for (int i = 0; i < n; i++)
        cin >> c[i];

    dp[0] = 1;
    for (int i = 1; i <= x; i++)
        for (int j = 0; j < n; j++)
            if (i - c[j] >= 0)  
                (dp[i] += dp[i - c[j]]) %= MOD;

    cout << dp[x];
    return 0;
}