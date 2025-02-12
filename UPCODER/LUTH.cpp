#include <bits/stdc++.h>
using namespace std;

#define int int64_t
#define MOD 10000

int pow(int a, int n, int m, int res) {
    if(n == 0)
        return res;
        
    if(n & 1)
        res = (res * a) % m;
        
    return pow((a * a) % m, n >> 1, m, res);
}

int32_t main() {
    int a, n;
    cin >> a >> n;
    cout << pow(a % MOD, n % MOD, MOD, 1);
    return 0;
}