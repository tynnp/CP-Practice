#include <bits/stdc++.h>
using namespace std;

int n, x, y;
vector<pair<int, int>> v;

int main() {
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);
  
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back({x, y});
    }
    
    sort(v.begin(), v.end());
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        if (ans > v[i].first) 
            ans += v[i].second;
        else 
            ans = v[i].first + v[i].second;
    }
    
    cout << ans;
    return 0;
}
