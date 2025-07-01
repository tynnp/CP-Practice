/*********************************************************************************************************** 
 * Yêu cầu: Tính số lượng xâu nhị phân có độ dài n.
 * Giải: Số lượng xâu nhị phân có độ dài n là 2^n. Sử dụng tính chất a^b mod m = ((a mod m)^(b mod m)) mod m
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
int64_t n, ans = 1;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++) 
        ans = (ans << 1) % MOD;
    
    cout << ans;
    return 0;
}