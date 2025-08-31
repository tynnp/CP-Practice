#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
const int MAXN = 520;
const int MOD = 1e9 + 7;

int a, b, dp[MAXN][MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> a >> b;
    fill(&dp[0][0], &dp[0][0] + MAXN*MAXN, INT_MAX);

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            if (i == j) {
                dp[i][j] = 0;
                continue;
            }

            for (int k = 1; k < i; k++)
                dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);
            
            for (int k = 1; k < j; k++)
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
        }
    }

    cout << dp[a][b];
    return 0;
}