#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, m, k;
int ans, a[MAXN], b[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++) 
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] + k >= b[j] && a[i] - k <= b[j]) i++, j++, ans++;
        else if (a[i] < b[j]) i++;
        else j++;
    }

    cout << ans;
    return 0;
}