#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int32_t main() {
    int n, x, y, g;
    cin >> n;

    while (n--) {
        cin >> x >> y;
        g = __gcd(x, y);
        cout << (g == 1 || g == 2) << '\n';
    }

    return 0;
}
