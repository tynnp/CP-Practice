#include <bits/stdc++.h>
using namespace std;

#define int long long 
#define MAXN 100005

int t, n;
int ans, a[MAXN];
int pref[MAXN], suff[MAXN];

void solve() {
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = a[i] + i;
        suff[i] = a[i] - i;
    }
    
    for (int i = 1; i <= n; i++)
        pref[i] = max(pref[i-1], pref[i]);
    
    for (int i = n-1; i >= 1; i--)
        suff[i] = max(suff[i], suff[i+1]);
    
    ans = INT_MIN;
    
    for (int i = 2; i < n; i++) 
        ans = max(ans, pref[i-1] + a[i] + suff[i+1]);
    
    cout << ans << '\n';
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
    while (t--) solve();
    return 0;
}