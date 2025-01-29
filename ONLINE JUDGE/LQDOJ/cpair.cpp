#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAXN = 1e5 + 5;

int n, k, a[MAXN];
map<int, int> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int x = k - a[i] * a[i];
          
        if (m.find(x) != m.end())
            ans += m[x];
        
        m[a[i]]++;
    }

    cout << ans;
    return 0;
}