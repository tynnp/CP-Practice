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

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, sumN;

int sum(int n) {
    int k = n * n;
    int res = 0;

    while (k) {
        res += k % 10;
        k /= 10;
    }

    return res;
}

signed main() {
    fastIO;
    cin >> n;
    sumN = sum(n);

    if (sumN & 1)
        cout << -1;
    else 
        cout << sumN + (to_string(n * n)[0] - '0');
    
    return 0;
}