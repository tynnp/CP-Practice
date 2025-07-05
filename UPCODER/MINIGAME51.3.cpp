#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e5 + 5;

int n, t, ans;
int a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> t;
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int i = 0, j = 0, sum = 0;
    
    while (i < n && j < n) {
        sum += a[j++];
        while (sum > t) 
            sum -= a[i++];
        ans = max(ans, j - i);
    }
    
    cout << ans;
    return 0;
}