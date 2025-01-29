#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e6 + 5;

int n, k, a[MAXN];
unordered_map<int, int> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 1; i <= n; i++) 
        cin >> a[i];

    int ans = 0;

    for (int i = 1; i <= n; i++) {
        m[a[i]]++;
        int x = k - a[i] * a[i]; 
        ans += m[x];
    }

    cout << ans;
    return 0;
}
