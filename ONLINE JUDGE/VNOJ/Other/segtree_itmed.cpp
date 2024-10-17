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

int n, k, ans;
int a[MAXN], dp[MAXN];
deque<int> q;

signed main() {
    fastIO;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        if (!q.empty() && q.front() < i - k)
            q.pop_front();

        if (!q.empty()) 
            dp[i] = dp[q.front()] + a[i];
        else 
            dp[i] = a[i];

        dp[i] = max(dp[i], (int) a[i]);
        ans = max(ans, dp[i]);

        while (!q.empty() && dp[q.back()] <= dp[i])
            q.pop_back();

        q.push_back(i);
    }
    
    cout << ans;
    return 0;
}