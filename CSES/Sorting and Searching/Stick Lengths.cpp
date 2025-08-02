#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
#define int int64_t 

int n, x, ans, a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a + n);
    x = a[n / 2];
    
    for (int i = 0; i < n; i++) 
        ans += abs(a[i] - x);
    
    cout << ans;
    return 0;
}