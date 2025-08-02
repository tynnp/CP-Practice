#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, sum, ans;
vector<pair<int, int>> v;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    v.resize(n);

    for (int i = 0; i < n; i++) 
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());

    for (auto [a, d] : v) {
        sum += a;
        ans += d - sum;
    }

    cout << ans;
    return 0;
}