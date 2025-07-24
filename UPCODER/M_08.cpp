#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
int n, k, ans, a[25];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 0; i < k; i++)
        cin >> a[i];

    for (int mask = 1; mask < (1 << k); mask++) {
        int lcm = 1;

        for (int i = 0; i < k; i++) {
            if (mask & (1 << i)) {
                if (lcm > n / a[i]) {
                    lcm = n + 1;
                    break;
                }
                lcm *= a[i];
            }
        }

        if (__builtin_popcount(mask) & 1) ans += n / lcm;
        else ans -= n / lcm; 
    }

    cout << ans;
    return 0;
}