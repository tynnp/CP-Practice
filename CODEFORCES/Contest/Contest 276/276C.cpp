#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, q, ans, a[MAXN];
int l, r, idx[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> q;
    
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    
    while (q--) {
        cin >> l >> r;
        idx[l] += 1;
        idx[r + 1] -= 1;
    }
    
    for (int i = 1; i <= n; i++)
        idx[i] += idx[i-1];
    
    sort(a + 1, a + n + 1, greater<int>());
    sort(idx + 1, idx + n + 1, greater<int>());
    
    for (int i = 1; i <= n; i++) 
        ans += a[i] * idx[i];
    
    cout << ans;
    return 0;
}