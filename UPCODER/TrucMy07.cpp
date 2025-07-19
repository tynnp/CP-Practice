#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int t, n;

bool check(int n) {
    int x = round(pow(n, 1.0 / 3.0));
    return x * x * x == n;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;

    while (t--) {
        cin >> n;
        string ans = check(n) ? "YES" : "NO";
        cout << ans << '\n';
    }

    return 0;
}