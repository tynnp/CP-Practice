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

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;

int N, W, dp[MAXN];
int w[105], v[105];

signed main() {
    fastIO;
    cin >> N >> W;

    for (int i = 1; i <= N; i++)
        cin >> w[i] >> v[i];

    fill(dp, dp + MAXN, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= N; i++) 
        for (int j = MAXN - 1; j >= v[i]; j--) 
            dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
        
    for (int ans = MAXN - 1; ans >= 0; ans--) 
        if (dp[ans] <= W) {
            cout << ans;
            break;
        }
    
    return 0;
}