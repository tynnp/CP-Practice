#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;

int n, x = INT_MAX, y = INT_MIN;
int ans, a[MAXN];

int main() {
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        x = min(x, a[i]);
        y = max(y, a[i]);
    }
    
    sort(a + 1, a + 1 + n);
    ans = *upper_bound(a + 1, a + n + 1, x);
    
    if (x == y) 
        cout << "NO";
    else 
        cout << ans;
    
    return 0;
}