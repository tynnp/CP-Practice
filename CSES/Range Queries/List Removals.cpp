#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <class T>
using Tree = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int MAXN = 2e5 + 5; 
int n, x, a[MAXN];
Tree<int> s;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s.insert(i);
    }

    for (int i = 0; i < n; i++) {
        cin >> x;
        int pos = *s.find_by_order(--x);
        s.erase(pos);
        cout << a[pos] << ' ';
    }

    return 0;
}