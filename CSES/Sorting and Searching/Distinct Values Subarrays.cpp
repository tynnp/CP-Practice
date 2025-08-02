#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;

int n, ans, a[MAXN];
unordered_map<int, int> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int l = 1, r = 1;
    while (l <= n && r <= n) {
        m[a[r]]++;

        while (m[a[r]] > 1) {
            m[a[l]]--;
            l++;
        }

        ans += r - l + 1;
        r++;
    }

    cout << ans;
    return 0;
}