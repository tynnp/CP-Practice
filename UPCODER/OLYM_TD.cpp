#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n, x;
    const int64_t MOD = 1e6 + 7;
    cin >> n;
    
    int64_t res = 4;
    int64_t cur = res;
    
    for (int64_t i = 2; i <= n; i++) {
        if (i & 1) 
            x = 1 + i;
        else    
            x = 2 + 4*i;
        
        cur = (cur + x % MOD) % MOD;
        res = (res + cur) % MOD;
    }
    
    cout << res;
    return 0;
}