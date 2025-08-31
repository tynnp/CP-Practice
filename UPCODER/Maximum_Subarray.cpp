#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int n, cur = 0, ans = 0;
vector<int> v;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    v.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    
    cur = ans = v[0];
    for (int i = 1; i < n; ++i) {
        cur = max(cur + v[i], v[i]);
        ans = max(ans, cur);
    }
    
    cout << ans;
    return 0;
}