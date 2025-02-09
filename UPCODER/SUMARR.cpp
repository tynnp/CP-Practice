#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;

int n, q;
int a[MAXN], st[4 * MAXN];

void build(int id, int l, int r) {
    if (l == r) {
        st[id] = a[l];
        return;
    }

    int mid = (l + r) >> 1;
    build(2*id, l, mid);
    build(2*id + 1, mid + 1, r);

    st[id] = st[2*id] + st[2*id + 1];
}

void updateUp(int id, int l, int r, int pos, int val) {
    if (l == r) {
        st[id] += val;
        return;
    }

    int mid = (l + r) >> 1;
    if (pos <= mid)
        updateUp(2*id, l, mid, pos, val);
    else 
        updateUp(2*id + 1, mid + 1, r, pos, val);

    st[id] = st[2*id] + st[2*id + 1];
}

void updateDown(int id, int l, int r, int pos, int val) {
    if (l == r) {
        st[id] -= val;
        return;
    }

    int mid = (l + r) >> 1;
    if (pos <= mid)
        updateDown(2*id, l, mid, pos, val);
    else 
        updateDown(2*id + 1, mid + 1, r, pos, val);

    st[id] = st[2*id] + st[2*id + 1];
}

int query(int id, int u, int v, int l, int r) {
    if (l > r)  
        return 0;

    if (u == l && v == r) 
        return st[id];

    int mid = (u + v) >> 1;
    int x = query(2*id, u, mid, l, min(mid, r));
    int y = query(2*id + 1, mid + 1, v, max(l, mid+1), r);

    return x + y;
}

int main() {
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);

    while (q--) {
        char x;
        int y, z;
        cin >> x >> y >> z;

        if (x == 'S')
            cout << query(1, 1, n, y+1, z+1) << endl;

        if (x == 'U')   
            updateUp(1, 1, n, y+1, z);

        if (x == 'V')
            updateDown(1, 1, n, y+1, z);
    }

    return 0;
}