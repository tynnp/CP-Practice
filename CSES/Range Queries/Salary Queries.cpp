#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <class T>
using Index_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int MAXN = 2e5 + 5; 
int n, q, a[MAXN], x, y;
char c;
Index_set<pair<int, int>> s;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> q;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        s.insert({a[i], i});
    }

    while (q--) {
        cin >> c >> x >> y;

        if (c == '!') {
            s.erase({a[x], x});
            a[x] = y;
            s.insert({a[x], x});
        }

        if (c == '?') {
            cout << s.order_of_key({y, MAXN}) - s.order_of_key({x - 1, MAXN}) << '\n';
        }
    }

    return 0;
}