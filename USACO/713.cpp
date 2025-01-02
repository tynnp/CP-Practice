#include <bits/stdc++.h>
using namespace std;

int n, x, y;
vector<pair<int, int>> v;
set<int> s;

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
        int a = v[i].first;
        int b = v[i].second;
        
        auto it = s.upper_bound(a);
        
        if (it != s.end()) {
            s.insert(*it + b);
            s.erase(it);
            ans = *it + b;
        } else {
            s.insert(a + b);
            ans = a + b;
        }
    }
    
    // for (auto it : s)
    //     cout << it << ' ';
    
    cout << ans;
    return 0;
}
