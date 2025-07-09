#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e5 + 5;
int n, q, a[MAXN];

int32_t main() {
    freopen("haybales.in", "r", stdin);
    freopen("haybales.out", "w", stdout);
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> q;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a + n);
    int l, r;
    while (q--) {
        cin >> l >> r;
        cout << upper_bound(a, a + n, r) - lower_bound(a, a + n, l) << '\n';
    }

    return 0;
}