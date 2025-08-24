#include <iostream>
using namespace std;

#define int int64_t 
const int MOD = 1e9 + 7;
int n;

int pow(int a, int b, int c) {
    int res = 1;
    a %= c;
    
    while (b) {
        if (b & 1) 
            res = res * a % c;
        a = a * a % c;
        b >>= 1;
    }
    
    return res;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    int i = pow(3, MOD - 2, MOD);
    
    while (cin >> n) {
        int k = n & 1;
        int ans = pow(2, n, MOD) - 1 - k + MOD;
        ans = (ans % MOD) * i % MOD;
        ans = ans % MOD; 
        cout << ans + 1 << '\n';
    }
    
    return 0;
}