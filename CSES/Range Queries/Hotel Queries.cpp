#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;
int n, q, x;
int a[MAXN], st[4 * MAXN];

void build(int id, int l, int r) {
    if (l == r) {
        st[id] = a[l];
        return;
    }
    
    int mid = (l + r) >> 1;
    build(id << 1, l, mid);
    build(id << 1 | 1, mid + 1, r);
    
    st[id] = max(st[id << 1], st[id << 1 | 1]);
}

void query(int id, int l, int r, int x) {
    if (l == r) {
        cout << l << ' ';
        st[id] -= x;
        return;
    }
    
    int mid = (l + r) >> 1;
    
    if (st[id << 1] >= x) 
        query(id << 1, l, mid, x);
    else 
        query(id << 1 | 1, mid + 1, r, x);
        
    st[id] = max(st[id << 1], st[id << 1 | 1]);
} 

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> q;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
        
    build(1, 1, n);
    
    while (q--) {
        cin >> x;
        
        if (st[1] < x) 
            cout << 0 << ' ';
        else 
            query(1, 1, n, x);
    }
    
    return 0;
}