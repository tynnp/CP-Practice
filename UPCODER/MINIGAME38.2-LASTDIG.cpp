#include <bits/stdc++.h>
using namespace std;
#define int int64_t

int pmod(int a, int b, int m) {
    a = a % m;
    int res = 1;
    
    while (b > 0) {
        if (b & 1) 
            res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    
    return res;
}

int strmod(string s, int m) {
    int res = 0;
    for (char c : s)
        res = (res * 10 + (c - '0')) % m;
    return res;
}

int32_t main() {
    int t;
    string a, b;
    
    cin >> t;
    while (t--) {
        cin >> a >> b;
        
        if (b == "0") {
            cout << 1 << '\n';
            continue;
        }
        
        int last = a.back() - '0';
        int base = strmod(b, 4);
        
        if (base == 0) 
            base = 4;
        
        cout << pmod(last, base, 10) << '\n';
    }
    
    return 0;
}