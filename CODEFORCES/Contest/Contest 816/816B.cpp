#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, k, q;
int l, r, a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k >> q;
  
    for (int i = 1; i <= n; i++) {
        cin >> l >> r;
        a[l] += 1;
        a[r + 1] -= 1;
    }
    
    for (int i = 1; i < MAXN; i++) 
        a[i] += a[i-1];
    
    for (int i = 1; i < MAXN; i++) 
        a[i] = (a[i] >= k) + a[i-1];
    
    while (q--) {
        cin >> l >> r;
        cout << a[r] - a[l - 1] << '\n';
    }
    
    return 0;
}