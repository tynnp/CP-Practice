#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MOD = 1e9 + 7;
string astr, bstr, cstr;

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

int modstr(string n, int m) {
    int res = 0;
    
    for (char d : n) {
        res = (res * 10) % m;
        res = (res + (d - '0')) % m;
    }
    
    return res;
} 

int powstr(string astr, string b, int c) {
    int a = modstr(astr, c);
    int res = 1;
    
    for (char d : b) {
        res = pow(res, 10, c);
        res = (res * pow(a, d - '0', c)) % c;
    }
    
    return res;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> astr >> bstr >> cstr;
    
    int a = modstr(astr, MOD);
    int b = powstr(bstr, cstr, MOD - 1);
    
    cout << pow(a, b, MOD);
    return 0;
}
