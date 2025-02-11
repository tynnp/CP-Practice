#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MOD = 2018;

int32_t main() {
    freopen("TLP.INP", "r", stdin);
    freopen("TLP.OUT", "w", stdout);

    int n;
    cin >> n;
    int s = n * (n + 1) / 2;
    cout << (s % MOD) * (s % MOD) % MOD;
    return 0;
}