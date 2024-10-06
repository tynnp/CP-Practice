#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define endl '\n'
#define int long long
#define elif else if 
#define inp freopen("file.inp", "r", stdin)
#define out freopen("file.out", "w", stdout)
#define TIME 1.0*clock()/CLOCKS_PER_SEC
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0)
#define indexed_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;

int n, m;
int h[MAXN], r[MAXN], st[4 * MAXN];

void build(int id, int l, int r);
void update(int id, int l, int r, int pos, int val);
int query(int id, int l, int r, int val);

signed main() {
    fastIO;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> h[i];

    for (int i = 1; i <= m; i++)
        cin >> r[i];

    build(1, 1, n);

    for (int i = 1; i <= m; i++) {
        int hotel = query(1, 1, n, r[i]);
        
        if (hotel == -1) 
            cout << 0 << ' ';

        else {
            cout << hotel << ' ';
            h[hotel] -= r[i];
            update(1, 1, n, hotel, h[hotel]);
        }
    }

    return 0;
}

void build(int id, int l, int r) {
    if (l == r) {
        st[id] = h[l];
        return;
    }

    int mid = (l + r) >> 1;
    build(2 * id, l, mid);
    build(2 * id + 1, mid + 1, r);
    st[id] = max(st[2 * id], st[2 * id + 1]);
}

void update(int id, int l, int r, int pos, int val) {
    if (l == r) {
        st[id] = val;
        return;
    }

    int mid = (l + r) >> 1;
    if (pos <= mid) 
        update(2 * id, l, mid, pos, val);
    else 
        update(2 * id + 1, mid + 1, r, pos, val);

    st[id] = max(st[2 * id], st[2 * id + 1]);
}

int query(int id, int l, int r, int val) {
    if (l == r)
        return (st[id] >= val) ? l : -1;

    int mid = (l + r) >> 1;
    if (st[2 * id] >= val)
        return query(2 * id, l, mid, val);
    else 
        return query(2 * id + 1, mid + 1, r, val);
}