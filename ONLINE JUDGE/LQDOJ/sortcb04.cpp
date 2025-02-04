#include <bits/stdc++.h>
using namespace std;

int const MAXN = 1e4 + 5;
int n, m;
int ans, a[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    for (int i = 0; i < m; i++)
        if (a[i] < 0)
            ans += abs(a[i]);

    cout << ans;
    return 0;
}