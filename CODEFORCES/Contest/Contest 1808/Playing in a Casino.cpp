#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAXN = 3e5 + 5;

int t, n, m;

void solve() {
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    
    int ans = 0;

    for (int i = 0; i < m; i++) {
        int sum = 0;
        vector<int> tmp(n);

        for (int j = 0; j < n; j++) {
            tmp[j] = a[j][i];
            sum += a[j][i];
        }

        int cur = 0;
        sort(tmp.begin(), tmp.end());

        for (int j = 0; j < n; j++) {
            cur += tmp[j];
            ans += llabs(sum - cur) - tmp[j] * (n - j - 1);
        }
    }

    cout << ans << '\n';
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;

    while (t--) 
        solve();

    return 0;
}