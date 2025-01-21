#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAXN = 1e5 + 5;

int n, k, b, ans;
int a[MAXN], sum[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("maxcross.in", "r", stdin);
    freopen ("maxcross.out", "w", stdout);
    cin >> n >> k >> b;
    
    for (int i = 0; i < b; i++) {
        int x;
        cin >> x;
        a[x] = 1;
    }
    
    for (int i = 1; i <= n; i++)
        sum[i] = sum[i-1] + a[i];
    
    ans = INT_MAX;
    for (int i = 0; i <= n - k; i++) 
        ans = min(ans, sum[i + k] - sum[i]);
    
    cout << ans;
    return 0;
}