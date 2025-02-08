#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t m, n, t;
    cin >> m >> n >> t;

    int64_t x = n / (m + 1);
    int64_t y = n % (m + 1);
    int64_t ans = (x * t * m) + (y * t);

    cout << ans;
    return 0;
}