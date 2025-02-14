#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define MAXN 10000004

int n, k;
int ans, a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    int l, r, x;
    for (int i = 1; i <= k; i++) {
        cin >> l >> r >> x;
        a[l] += x;
        a[r + 1] -= x;
    }

    for (int i = 1; i <= n; i++) {
        a[i] += a[i-1];
        ans = max(ans, a[i]);
    }

    cout << ans;
    return 0;
}
