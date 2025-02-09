#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define endl '\n'
#define int long long
#define inp freopen("file.inp", "r", stdin)
#define out freopen("file.out", "w", stdout)
#define TIME 1.0*clock()/CLOCKS_PER_SEC
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0)
#define indexed_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int m, n, p, q;

signed main() {
    fastIO;
    cin >> m >> n >> p >> q;

    if ((1 < p && p < m) && (1 < q && q < n)) 
        cout << 8;

    else if ((p == 1 || p == m) && (1 < q && q < n))
        cout << 5;

    else if ((q == 1 || q == n) && (1 < p && p < m))
        cout << 5;

    else    
        cout << 3;

    return 0;
}