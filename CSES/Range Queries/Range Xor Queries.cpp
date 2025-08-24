#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;
int n, q, a, b;
int x[MAXN], st[4 * MAXN];

void build(int id, int l, int r) {
    if (l == r) {
        st[id] = x[l];
        return;
    }

    int mid = l + r >> 1;
    build(id << 1, l, mid);
    build(id << 1 | 1, mid + 1, r);

    st[id] = st[id << 1] ^ st[id << 1 | 1];
}

int get(int id, int l, int r, int u, int v) {
    if (l > v || r < u)
        return 0;

    if (l >= u && r <= v) 
        return st[id];

    int mid = l + r >> 1;
    int x = get(id << 1, l, mid, u, v);
    int y = get(id << 1 | 1, mid + 1, r, u, v);

    return x ^ y;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
        cin >> x[i];
    build(1, 1, n);

    while (q--) {
        cin >> a >> b;
        cout << get(1, 1, n, a, b) << '\n';
    }

    return 0;
}