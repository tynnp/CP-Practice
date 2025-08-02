#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
const int MAXN = 1005;
const int MOD = 1e9 + 7;

int n, m, dp[MAXN][MAXN];
int a[MAXN], b[MAXN];
vector<int> ans;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            if (a[i] == b[j])
                dp[i][j] = dp[i-1][j-1] + 1;
            else 
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    }

    int i = n, j = m;

    while (i >= 1 && j >= 1) {
        if (a[i] == b[j]) {
            ans.push_back(a[i]);
            i--, j--;
            continue;
        } 

        if (dp[i-1][j] > dp[i][j-1]) i--;
        else j--;
    }
    
    reverse(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for (int x : ans) cout << x << ' ';

    return 0;
}