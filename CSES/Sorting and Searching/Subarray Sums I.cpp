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

int n, x, ans;
int a[MAXN];

signed main() {
    fastIO;
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int i = 1, j = 1, sum = 0;

    while (i <= n && j <= n) {
        sum += a[i++];

        while (sum > x) 
            sum -= a[j++];
        
        ans += (sum == x);
    }
    
    cout << ans;
    return 0;
}