/*********************************************************************************************************** 
 * Yêu cầu: Tính a^b mod 1e9 + 7 với a, b <= 10^9.
 * Giải: Dùng lũy thừa nhị phân.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MOD = 1e9 + 7;

int n, a, b;

int binary_pow(int a, int b) {
    int res = 1;
    a %= MOD;

    while (b) {
        if (b & 1)
            res = (res * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }

    return res;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    while (n--) {
        cin >> a >> b;
        cout << binary_pow(a, b) << '\n';
    }

    return 0;
}