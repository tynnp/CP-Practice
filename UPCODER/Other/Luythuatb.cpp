#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 1e9 + 7;

int binary_mul(int a, int b, int MOD) {
    int res = 0;
    a %= MOD;
    
    while (b) {
        if (b & 1)
            res = (res + a) % MOD;
        a = (a << 1) % MOD;
        b >>= 1;
    }
    
    return res;
}

int binary_pow(int a, int b, int MOD) {
    int res = 1;
    a %= MOD;
    
    while (b) {
        if (b & 1)
            res = binary_mul(res, a, MOD);
        a = binary_mul(a, a, MOD);
        b >>= 1;
    }
    
    return res;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    cout << binary_pow(n, k, MOD);
    return 0;
}
