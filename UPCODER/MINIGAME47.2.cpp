#include <bits/stdc++.h>
using namespace std;

int n, x, y, ans;
vector<pair<int, int>> v;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v.push_back({x, y});
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < n; i++) {
        if (ans > v[i].first)
            ans += v[i].second;
        else 
            ans = v[i].first + v[i].second;
    }
    
    cout << ans;
    return 0;
}