/*********************************************************************************************************** 
 * Yêu cầu: Tính a^(b^c) mod 1e9 + 7 với a, b <= 10^9.
 * Giải: Với m = (1e9+7) là số nguyên tố, do đó a^(b^c) mod m = a^(b^c mod (m - 1)) mod m. Dùng lũy thừa nhị phân.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MOD = 1e9 + 7;
int n, a, b, c;

int binary_pow(int a, int b, int c) {
    int res = 1;
    a %= c;

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
    cin >> n;

    while (n--) {
        cin >> a >> b >> c;
        cout << binary_pow(a, binary_pow(b, c, MOD - 1), MOD) << '\n';
    }

    return 0;
}