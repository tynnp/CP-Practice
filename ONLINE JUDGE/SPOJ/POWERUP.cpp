#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MOD = 1e9 + 7;
int a, b, c;

int pow(int a, int b, int c) {
    int res = 1;
    a %= c;

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
   
    while (cin >> a >> b >> c) {
        if (a == b && b == c && c == -1) break;

        if ((a + MOD) % MOD == 0) 
            cout << (b == 0 && c > 0 ? 1 : 0) << '\n';
        else 
            cout << pow(a, pow(b, c, MOD - 1), MOD) << '\n';
    }

    return 0;
}