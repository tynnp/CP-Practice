#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int mul(int a, int b, int mod) {
    a %= mod;
    int res = 0;
    
    while (b) {
        if (b & 1)
            res = (res + a) % mod;
        a = (a + a) % mod;
        b >>= 1;  
    }
    
    return res;
}

int power(int a, int k, int mod) {
    a %= mod;
    int res = 1;
    
    while (k) {
        if (k & 1)
            res = mul(res, a, mod);
        a = mul(a, a, mod);
        k >>= 1;  
    }
    
    return res;
}


bool RabinMiller(int n) {
    if (n == 2 || n == 3 || n == 5 || n == 7)
        return true;
        
    if (n < 11 || n % 2 == 0)
        return false;

    int d = n - 1;
    int s = 0;
    
    while (d % 2 == 0) {
        d /= 2;
        s++;
    }

    int a = rand() % (n - 3) + 2;
    int x = power(a, d, n);
    
    if (x == 1 || x == n - 1)
        return true;

    for (int r = 1; r < s; r++) {
        x = mul(x, x, n);
        if (x == n - 1)
            return true;
    }
    
    return false;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        cout << (RabinMiller(n) ? "YES\n" : "NO\n");
    }
    
    return 0;
}
