#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
int n, a, b, cnt, ans;
vector<pair<int, int>> v;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    while (n--) {
        cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({b, -1});
    }

    sort(v.begin(), v.end());

    for (auto x : v) {
        cnt += x.second;
        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}