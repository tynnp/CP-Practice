#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;
int fact[MAXN], ifact[MAXN];
int n, k;

int pow(int a, int b, int c) {
    a %= c;
    int res = 1;
    
    while (b) {
        if (b & 1)
            res = (res * a) % c;
        a = (a * a) % c;
        b >>= 1;
    }
    
    return res;
}

void pre() {
    fact[0] = ifact[0] = 1;
    
    for (int i = 1; i <= n; i++) 
        fact[i] = (fact[i - 1] * i) % MOD;
    
    ifact[MAXN - 1] = pow(fact[MAXN - 1], MOD - 2, MOD);
    
    for (int i = MAXN - 2; i >= 1; i--)
        ifact[i] = (ifact[i + 1] * (i + 1)) % MOD;
}

int C(int n, int k) {
    if (k > n) return 0;
    return fact[n] * ifact[k] % MOD * ifact[n - k] % MOD;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;
    pre();
    cout << C(n, k);
    return 0;
}