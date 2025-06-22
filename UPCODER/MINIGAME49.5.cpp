#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int t, n, k, ans;
int a[MAXN], b[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }

    for (int i = 1; i <= n; i++) {
        cin >> b[i];
        b[i] = max(b[i], b[i-1]);
    }

    for (int i = 1; i <= min(n, k); i++) 
        ans = max(ans, a[i] + b[i] * (k - i));

    cout << ans;
    return 0;
}