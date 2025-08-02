#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
const int MAXN = 7e4;
const int MOD = 1e9 + 7;
const int ND = 5e8 + 4;

int n, s, m;
int dp[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    s = n * (n + 1) >> 1;
    m = s >> 1;

    if (s & 1) {
        cout << 0;
        return 0;
    }

    dp[0] = 1;
    for (int i = 1; i <= n; i++) 
        for (int j = m; j >= i; j--)
            (dp[j] += dp[j - i]) %= MOD;
    
    cout << dp[m] * ND % MOD;
    return 0;
}