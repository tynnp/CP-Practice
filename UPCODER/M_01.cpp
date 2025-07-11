#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;
int n, a[MAXN], ans;

int mul(int a, int b, int c) {
    a %= c;
    int res = 0;
    
    while (b) {
        if (b & 1)
            res = (res + a) % c;
        a = (a << 1) % c;
        b >>= 1;
    }
    
    return res;
}

int pow(int a, int b, int c) {
    a %= c;
    int res = 1;
    
    while (b) {
        if (b & 1)
            res = mul(res, a, c);
        a = mul(a, a, c);
        b >>= 1;
    }
    
    return res;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a + n);
    
    for (int i = 0; i < n; i++) 
        ans = (ans + mul(pow(2, i, MOD), a[i], MOD)) % MOD;
    
    cout << ans;
    return 0;
}