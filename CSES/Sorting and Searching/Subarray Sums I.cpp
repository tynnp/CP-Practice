#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;
int n, x, ans, a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int i = 0, j = 0, s = 0;
    while (i < n && j < n) {
        s += a[j++];
        while (s > x) s -= a[i++];
        ans += (s == x);
    }
    
    cout << ans;
    return 0;
}