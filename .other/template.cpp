#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define endl '\n'
#define int int64_t
#define all(a) a.begin(), a.end()
#define TIME 1.0*clock() / CLOCKS_PER_SEC
#define db(val) "["#val " = "<< (val) << "] " 
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename K, typename V> using ordered_map = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;

void setIO(string name = "") { 
    cin.tie(0) -> sync_with_stdio(0);
    if (sz(name)) {
        freopen((name + ".in").c_str(), "r", stdin); 
        freopen((name + ".out").c_str(), "w", stdout);
    }
}

const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int32_t main() {
    setIO();
    
    return 0;
}
