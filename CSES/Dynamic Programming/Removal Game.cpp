#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
const int MAXN = 5000 + 5;
const int MOD = 1e9 + 7;

int n, a[MAXN], pfx[MAXN];
int dp[MAXN][MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pfx[i] = pfx[i-1] + a[i];
        dp[i][i] = a[i];
    }
    
    for (int len = 2; len <= n; len++) {
        for (int l = 1; l + len - 1 <= n; l++) {
            int r = l + len - 1;
            int sum = pfx[r] - pfx[l-1];
            dp[l][r] = max(sum - dp[l+1][r], sum - dp[l][r-1]);
        }
    }

    cout << dp[1][n];
    return 0;
}