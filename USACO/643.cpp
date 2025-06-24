#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 5e4 + 5;
int n, k, ans, a[MAXN];
int d[MAXN], x[MAXN];

int32_t main() {
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
        
    sort(a + 1, a + 1 + n);
        
    int r = 1;
    for (int l = 1; l <= n; l++) {
        while (r <= n && a[r] - a[l] <= k) r++;
        d[l] = r - l;
    }  
    
    for (int i = n; i >= 1; i--) 
        x[i] = max(x[i+1], d[i]);
  
    for (int i = 1; i <= n; i++)
        ans = max(ans, d[i] + x[i + d[i]]);
    
    cout << ans;
    return 0;
}