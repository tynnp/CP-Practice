#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

void solve(int64_t n) {
    int64_t ans = 1;
    n %= MOD;
    n = (n * n) % MOD;
    ans = (ans * n) % MOD;
    cout << ans << '\n';
}

int main() {
    int64_t t, n;
    cin >> t;

    while (t--) {
        cin >> n;
        solve(n);
    }
    
    return 0;
}