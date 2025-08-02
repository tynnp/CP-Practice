#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int n, k, x;
indexed_set<int> s;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        s.insert(i);

    x = k % n;
    while (n) {
        auto it = s.find_by_order(x);
        cout << *it << ' ';
        s.erase(it);
        if (--n) x = (x + k) % n;
    }

    return 0;
}