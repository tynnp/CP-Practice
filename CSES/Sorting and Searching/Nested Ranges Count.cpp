#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

const int MAXN = 2e5 + 5;
#define int int64_t

struct Range {
    int l, r, idx;
};

struct Pair {
    int x, y;
};

bool operator < (const Pair &u, const Pair &v) {
    if (u.x != v.x)
        return u.x < v.x;
    return u.y > v.y;
}

Range a[MAXN];
indexed_set<Pair> s;
int n, k, pos1[MAXN], pos2[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i].l >> a[i].r;
        a[i].idx = i;
    }

    sort(a, a + n, [] (Range x, Range y) {
        if (x.l == y.l)
            return x.r > y.r;
        return x.l < y.l;
    });

    k = 1;
    for (int i = n - 1; i >= 0; i--) {
        pos1[a[i].idx] = s.order_of_key({a[i].r, LLONG_MIN});   // số phần tử có r nhỏ hơn a[i].r
        s.insert({a[i].r, k++});
    }

    s.clear();
    for (int i = 0; i < n; i++) {
        pos2[a[i].idx] = s.size() - s.order_of_key({a[i].r, LLONG_MAX}); // số đoạn có r lớn hơn đoạn hiện tại.
        s.insert({a[i].r, k++});
    }

    for (int i = 0; i < n; i++)
        cout << pos1[i] << ' ';
    cout << '\n';

    for (int i = 0; i < n; i++)
        cout << pos2[i] << ' ';
    
    return 0;
}