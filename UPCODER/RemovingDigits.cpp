#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e6 + 5;
int n, dp[MAXN];

int32_t main() {
    freopen("DIGITS.INP", "r", stdin);
    freopen("DIGITS.OUT", "w", stdout);
    cin.tie(0) -> sync_with_stdio(0);
    fill(dp, dp + MAXN, INT_MAX);
    cin >> n;
    
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        int d = i;
        
        while (d) {
            dp[i] = min(dp[i], dp[i - d % 10] + 1);
            d /= 10;
        }
    }
    
    cout << dp[n];
    return 0;  
} 