#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int t, n;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;

    while (t--) {
        cin >> n;
        cout << fixed << setprecision(8) << (2.0 * n) / (n + 1) << '\n';
    }
    
    return 0;
}