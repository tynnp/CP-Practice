#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MOD = 1e9 + 7;
int t, a, b;
string astr, bstr;

int modstr(string s, int m) {
    int res = 0;
    
    for (char x : s) {
        res = res * 10 + (x - '0');
        res %= m;
    }
    
    return res;
}

int pow(string astr, string bstr, int c) {
    int res = 1;
    a = modstr(astr, MOD);
    b = modstr(bstr, MOD - 1);
    
    while (b) {
        if (b & 1)
            res = (res * a) % c;
        a = (a * a) % c;
        b >>= 1;
    }
    
    return res;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
    
    while (t--) {
        // cin >> s;
        // cout << modstr(s) << '\n';
        cin >> astr >> bstr;
        cout << pow(astr, bstr, MOD) << '\n';
    }
    
    return 0;
}