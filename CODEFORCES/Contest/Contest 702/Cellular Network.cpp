#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e5 + 5;
int n, m, ans;
int a[MAXN], b[MAXN];


int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < m; i++)
        cin >> b[i];
    
    for (int i = 0; i < n; i++) {
        int right = lower_bound(b, b + m, a[i]) - b;
        int left = right - 1;
        int d = INT_MAX;

        if (right < m && b[right] >= a[i])
            d = b[right] - a[i];
      
        if (left >= 0 && a[i] >= b[left])
            d = min(d, a[i] - b[left]);
        
        ans = max(d, ans);
    }

    cout << ans;
    return 0;
}
