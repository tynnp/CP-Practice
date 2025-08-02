#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;
int n, x, a[MAXN], ans;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a + n);
    int i = 0, j = n - 1;

    while (i <= j) {
        if (a[i] + a[j] <= x) i++, j--;
        else j--;
        ans++;
    }

    cout << ans;
    return 0;
}