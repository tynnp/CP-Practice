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
#define fastIO ios_base::sync_with_stdio(false); cin.tie(nullptr)
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename K, typename V> using ordered_map = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;

const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;

int n, a[MAXN];
int cnt[MAXN], pos[MAXN];

signed main() {
    fastIO;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
        pos[a[i]] = i;
    }

    sort(a + 1, a + 1 + n);

    for (int i = 1; i <= n; i++) {
        if (cnt[a[i]] == 1) {
            cout << pos[a[i]];
            return 0;
        }
    }
    
    cout << -1;
    return 0;
}