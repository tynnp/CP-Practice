#include <bits/stdc++.h>
using namespace std;

int n, ans;
map<pair<string, string>, int> m;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("citystate.in", "r", stdin);
    freopen("citystate.out", "w", stdout);
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string s, t;
        cin >> s >> t;
        m[{s.substr(0, 2), t}]++;
    }
    
    for (auto p : m) {
        auto x = p.first;
        pair<string, string> y = {x.second, x.first};
        
        if (m[y] > 0 && x.first != x.second) {
            ans += p.second * m[y];
            m[y] = 0;
        }
    }
    
    cout << ans;
    return 0;
}