#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int n, m, x, y;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;

    x = (m - n) / 2;
    y = (2*n  - m) / 2;

    if (n & 1 || m & 1 || x < 0 || y < 0) {
        cout << "IMPOSSIBLE";
    } else {
        cout << x << ' ' << y;
    }
 
    return 0;
}