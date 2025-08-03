#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int t, n, x, ans;
unordered_map<int, vector<int>> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;

    while (t--) {
        ans = 0;
        m.clear();
        cin >> n;

        for (int i = 1; i <= n; i++) {
            cin >> x;
            m[i - x].push_back(x);
        }

        for (auto [k, v] : m) {
            reverse(v.begin(), v.end());
            for (int i = 0; i < v.size() - 1; i += 2) {
                int s = v[i] + v[i + 1];
                if (s <= 0) break;
                ans += s;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}