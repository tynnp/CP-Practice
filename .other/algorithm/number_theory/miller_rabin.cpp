#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int n;

int Mul(int a, int b, int c) {
    if (b == 0) return 0;
    int res = Mul((a << 1) % c, b >> 1, c);
    if (b & 1)
        res = (res + a) % c;
    return res;
}

int Pow(int a, int b, int c) {
    if (b == 0) return 1;
    int res = Pow(Mul(a % c, a % c, c), b >> 1, c);
    if (b & 1)  
        res = Mul(a % c, res, c);
    return res;
}

bool test(int x, int n, int k, int m) {
    int mod = Pow(x, m, n);
    
    if (mod == 1 || mod == n - 1)
        return true;
    
    for (int l = 1; l < k; l++) {
        mod = Mul(mod, mod, n);
        if (mod == n - 1)
            return true;
    }
    
    return false;
}

bool MillerRabin(int n) {
    vector<int> p = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    
    for (int x : p) 
        if (n == x)
            return true;
    
    if (n < 41)
        return false;
    
    int k = 0, m = n - 1;
    
    while (m % 2 == 0) {
        m >>= 1;
        k++;
    }
    
    for (int x : p) 
        if (!test(x, n, k, m))
            return false;
    
    return true;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    cout << (MillerRabin(n) ? "YES" : "NO");
    return 0;
}