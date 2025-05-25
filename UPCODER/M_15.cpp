#include <bits/stdc++.h>
using namespace std;

#define int long long 

int bmul(int a, int b, int m) {
    int res = 0;
    a %= m;
    
    while (b) {
        if (b & 1)
            res = (res + a) % m;
        a = (a << 1) % m;
        b >>= 1;
    }
    
    return res;
}

int bpow(int a, int b, int m) {
    int res = 1;
    a %= m;
    
    while (b) {
        if (b & 1)
            res = bmul(res, a, m);
        a = bmul(a, a, m);
        b >>= 1;
    }
    
    return res;
}

bool check(int x, int n, int k, int m) {
    int mod = bpow(x, m, n);
    
    if (mod == 1 || mod == n - 1)
        return true;
        
    for (int l = 1; l < k; l++) {
        mod = bmul(mod, mod, n);
        if (mod == n - 1)   
            return true;
    }
    
    return false;
}

bool MR(int n) {
    vector<int> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    
    for (int x : v) 
        if (n == x) 
            return true;
            
    if (n < 41)
        return false;
     
    int k = 0, m = n - 1;
    while (m % 2 == 0) {
        m >>= 1;
        k++;
    }
    
    for (int x : v) 
        if (!check(x, n, k, m))
            return false;
    
    return true;
}

int Try(int n) {
    int d = n + 1;
    
    while (true) {
        if (MR(d)) return d;
        d++;
    }
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    
    int n, t;
    cin >> t;
    
    while (t--) {
        cin >> n;
        cout << Try(n) << '\n';
    }
    
    return 0;
}