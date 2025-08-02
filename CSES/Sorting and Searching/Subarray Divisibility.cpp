#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
#define int int64_t

int n, x, s, ans, a[MAXN];
map<int, int> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int i = 0; i < n; i++) 
        cin >> a[i];
      
    m[0] = 1;
    for (int i = 0; i < n; i++) {
        s += a[i];
        ans += m[(s % n + n) % n];
        m[(s % n + n) % n]++;
    }
    
    cout << ans;
    return 0;
}