#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;

struct Project {
    int a, b, p;
};

int n, dp[MAXN];
Project m[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> m[i].a >> m[i].b >> m[i].p;
    
    sort(m + 1, m + n + 1, [] (Project x, Project y) {
        return x.b < y.b;
    });

    for (int i = 1; i <= n; i++) {
        int l = 1, r = i;

        while (l <= r) {
            int mid = (l + r) >> 1;
            if (m[mid].b < m[i].a)
                l = mid + 1;
            else 
                r = mid - 1;
        }

        dp[i] = max(dp[i - 1], m[i].p + dp[r]);
    }

    cout << dp[n];
    return 0;
}