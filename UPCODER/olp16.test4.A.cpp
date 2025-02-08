#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MAXN 100005

int n, x, ans;
int a[MAXN], b[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    b[1] = a[1];
    for (int i = 2; i <= n; i++) 
        b[i] = max(b[i-1], a[i-1]);
    
    x = ans = INT_MIN;
    for (int i = 3; i <= n; i++) {
        x = max(x, b[i-1] + 2 * a[i-1]);
        ans = max(ans, x + 3 * a[i]);
    }
    
    cout << ans;
    return 0;
}