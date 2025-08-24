#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MOD = 1e9 + 7;
int t, a, b;

int pow(int a, int b, int c) {
    int res = 1;
    
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
    cin >> t;
    
    while (t--) {
        cin >> a >> b;
        cout << pow(a, b, 10) << '\n';
    }
    
    return 0;
}