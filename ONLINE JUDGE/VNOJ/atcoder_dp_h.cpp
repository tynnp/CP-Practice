#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define endl '\n'
#define int long long
#define inp freopen("file.inp", "r", stdin)
#define out freopen("file.out", "w", stdout)
#define TIME 1.0*clock()/CLOCKS_PER_SEC
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0)
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename K, typename V> using ordered_map = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;

const int MAXN = 1000 + 5;
const int MOD = 1e9 + 7;

int H, W, a[MAXN][MAXN];
int dp[MAXN][MAXN];

signed main() {
    fastIO;
    cin >> H >> W;

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            char c;
            cin >> c;
            a[i][j] = c == '.';
        }
    }

    dp[1][1] = a[1][1];

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (!a[i][j]) {
                dp[i][j] = 0;
                continue;
            }
          
            if (i > 1)
                (dp[i][j] += dp[i-1][j]) %= MOD;

            if (j > 1)
                (dp[i][j] += dp[i][j-1]) %= MOD;
        }
    }

    cout << dp[H][W];
    return 0;
}