#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
const int MAXN = 100 + 5;
const int MAXX = 1e5 + 5;
const int MOD = 1e9 + 7;

int n, a[MAXN];
bool dp[MAXX];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    dp[0] = true;
    for (int i = 1; i <= n; i++)
        for (int j = MAXX - 1; j >= a[i]; j--)
            dp[j] = dp[j] | dp[j - a[i]];

    cout << count(dp, dp + MAXX, true) - 1 << '\n';

    for (int i = 1; i < MAXX; i++)
        if (dp[i])
            cout << i << ' ';

    return 0;
}