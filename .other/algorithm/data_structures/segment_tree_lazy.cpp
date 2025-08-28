#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;
int n, q, t, k, u, a, b;
int x[MAXN], st[4 * MAXN], lazy[4 * MAXN];

void build(int id, int l, int r) {
    if (l == r) {
        st[id] = x[l];
        return;
    }

    int mid = l + r >> 1;
    build(id << 1, l, mid);
    build(id << 1 | 1, mid + 1, r);

    st[id] = st[id << 1] + st[id << 1 | 1];
}

void fix(int id, int l, int r) {
    if (!lazy[id]) return;

   st[id] += (r - l + 1) * lazy[id];

   if (l != r) {
    lazy[id << 1] += lazy[id];
    lazy[id << 1 | 1] += lazy[id];
   }

   lazy[id] = 0;
}

void update(int id, int l, int r, int u, int v, int val) {
    fix(id, l, r);
    if (l > v || r < u) return;

    if (l >= u && r <= v) {
        lazy[id] += val;
        fix(id, l, r);
        return;
    }

    int mid = l + r >> 1;
    update(id << 1, l, mid, u, v, val);
    update(id << 1 | 1, mid + 1, r, u, v, val);

    st[id] = st[id << 1] + st[id << 1 | 1];
}

int get(int id, int l, int r, int k) {
    fix(id, l, r);        
    if (l == r) return st[id];

    int mid = l + r >> 1;
    if (k <= mid) 
        return get(id << 1, l, mid, k);
    else
        return get(id << 1 | 1, mid + 1, r, k);
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
        cin >> x[i];
    build(1, 1, n);

    while (q--) {
        cin >> t;

        if (t == 1) {
            cin >> a >> b >> u;
            update(1, 1, n, a, b, u);
        }

        if (t == 2) {
            cin >> k;
            cout << get(1, 1, n, k) << '\n';
        }
    }

    return 0;
}