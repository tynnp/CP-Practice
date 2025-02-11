#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 5e4 + 5;

int n, q;
int a[MAXN], stmin[4 * MAXN], stmax[4 * MAXN];

void build(int id, int l, int r) {
    if (l == r) {
        stmin[id] = stmax[id] = a[l];
        return;
    }

    int mid = (l + r) >> 1;
    build(2*id, l, mid);
    build(2*id + 1, mid + 1, r);

    stmin[id] = min(stmin[2*id], stmin[2*id + 1]);
    stmax[id] = max(stmax[2*id], stmax[2*id + 1]);
}

int getMax(int id, int l, int r, int u, int v) {
    if (l > v || r < u)
        return INT64_MIN;

    if (l >= u && r <= v)
        return stmax[id];

    int mid = (l + r) >> 1;
    int x = getMax(2*id, l, mid, u, v);
    int y = getMax(2*id + 1, mid + 1, r, u, v);

    return max(x, y);
}

int getMin(int id, int l, int r, int u, int v) {
    if (l > v || r < u)
        return INT64_MAX;

    if (l >= u && r <= v)
        return stmin[id];

    int mid = (l + r) >> 1;
    int x = getMin(2*id, l, mid, u, v);
    int y = getMin(2*id + 1, mid + 1, r, u, v);
    
    return min(x, y);
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, MAXN - 1);

    while (q--) {
        int l, r;
        cin >> l >> r;

        int maxVal = getMax(1, 1, MAXN - 1, l, r);
        int minVal = getMin(1, 1, MAXN - 1, l, r);

        cout << maxVal - minVal << '\n';
    }
    
    return 0;
}