#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define endl '\n'
#define int long long
#define elif else if 
#define inp freopen("file.inp", "r", stdin)
#define out freopen("file.out", "w", stdout)
#define TIME 1.0*clock()/CLOCKS_PER_SEC
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0)
#define indexed_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;
const int INF = 1e9;

int n, h[MAXN], dp[MAXN];

signed main() {
    fastIO;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> h[i];

    dp[1] = abs(h[1] - h[0]);
    for (int i = 2; i < n; i++) 
        dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));

    cout << dp[n-1];
    return 0;
}