#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int n, x, y, ans;
vector<pair<int, int>> v;

int32_t main() {
    freopen("pairup.in", "r", stdin);
    freopen("pairup.out", "w", stdout);
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back({y, x});
    }
    
    sort(v.begin(), v.end());
    int i = 0, j = n - 1, m = 0;
    
    while (i <= j) {
        m = min(v[i].second, v[j].second);
        if (i == j) m /= 2;
        
        v[i].second -= m;
        v[j].second -= m;
        ans = max(ans, v[i].first + v[j].first);
        
        if (v[i].second == 0) i++;
        if (v[j].second == 0) j--;
    }
    
    cout << ans;
    return 0; 
}