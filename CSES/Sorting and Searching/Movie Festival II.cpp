#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, k, a, b, ans;
multiset<int> s;
vector<pair<int, int>> v;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end(), [] (auto x, auto y) {
        return x.second < y.second;
    });

    while (k--)
        s.insert(0);
    
    for (int i = 0; i < n; i++) {
        auto it = s.upper_bound(v[i].first);
        if (it != s.begin()) {
            it--;
            s.erase(it);
            s.insert(v[i].second);
            ans++;
        }
    }

    cout << ans;
    return 0;
}