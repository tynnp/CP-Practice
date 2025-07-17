
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;
int m, q, sum[MAXN], psum[MAXN];


void solve() {
    int x, y, a, b, c, d;
    cin >> x >> y >> a >> b >> c >> d;
    
    if (y == 0) {
        cout << a << '\n';
        return;
    }
    
    if (y == 1) {
        cout << ((x * a) % MOD + b) % MOD << '\n';
        return;
    }
    
    if (y == 2) {
        cout << ((sum[x] * a) % MOD + (x * b) % MOD + c) % MOD << '\n';
        return;
    }
    
    if (y == 3) {
        cout << ((psum[x] * a) % MOD + (sum[x] * b) % MOD + (x * c) % MOD + d) % MOD << '\n';
        return;
    }
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    for (int i = 1; i < MAXN; i++) {
        sum[i] = (sum[i - 1] + i) % MOD;
        psum[i] = (psum[i - 1] + sum[i]) % MOD;
    }
    
    cin >> m >> q;
    while (q--) solve();
    
    return 0;
}
