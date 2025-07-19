#include <bits/stdc++.h>
using namespace std;

#define int int64_t
string a, b;
int MOD;

int mul(int a, int b, int MOD) {
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

int pow(int a, int b, int MOD) {
    int res = 1;
    a %= MOD;
    
    while (b) {
        if (b & 1)
            res = mul(res, a, MOD);
        a = mul(a, a, MOD);
        b >>= 1;
    }
    
    return res;
}

int solve(string a, string b, int MOD) {
    int A = 0;

    for (char c : a)
        A = (A * 10 + (c - '0')) % MOD;
    
    int res = 1;
    for (char c : b) 
        res = pow(res, 10, MOD) * pow(A, c - '0', MOD) % MOD;
    
    return res;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> a >> b >> MOD;
    cout << solve(a, b, MOD);
    return 0;
}