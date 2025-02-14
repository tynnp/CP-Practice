#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define MAXN 100005

int n, k;
int ans, a[MAXN];
map<int, int> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + n + 1, [] (int x, int y) {
        return x > y;
    });

    for (int i = 1; i <= n; i++) {
        ans += m[k + a[i]];
        m[a[i]]++;
    }

    cout << ans;
    return 0;
}