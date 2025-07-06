/*********************************************************************************************************** 
 * Yêu cầu: Đếm số cách xây một tháp có chiều rộng 2 và chiều cao n bằng cách sử dụng các khối có chiều rộng và chiều cao là số nguyên.
 * Giải: 
 *  dp[i][1]: Số cách xây tháp cao i với hàng trên cùng là một khối ngang 2x1 (chiếm cả hai cột).
 *  dp[i][2]: Số cách xây tháp cao i với hàng trên cùng là hai khối dọc 1x1 (mỗi cột một khối).
 *  Với n = 1:
 *      Hàng trên cùng là khối 2x1: Chỉ có một cách (đặt một khối 2x1 phủ cả hai cột). Do đó, dp[1][1] = 1.
 *      Hàng trên cùng là hai khối 1x1: Chỉ có một cách (đặt một khối 1x1 ở cột trái và một khối 1x1 ở cột phải). Do đó, dp[1][2] = 1.
 *  Để tính dp[i][1] và dp[i][2], ta xét các cách đặt khối ở hàng trên cùng của tháp cao i, dựa trên cấu hình của tháp cao i-1.
 *  dp[i][1] = dp[i-1][2] + 4 * dp[i-1][1]
 *  dp[i][2] = dp[i-1][1] + 2 * dp[i-1][2]
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;
 
int n, t, dp[MAXN][3];
 
int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
 
    dp[1][1] = dp[1][2] = 1;
 
    for (int i = 2; i < MAXN; i++) {
        (dp[i][1] = dp[i-1][2] + 4 * dp[i-1][1]) %= MOD;
        (dp[i][2] = dp[i-1][1] + 2 * dp[i-1][2]) %= MOD; 
    }
 
    while (t--) {
        cin >> n;
        cout << (dp[n][1] + dp[n][2]) % MOD << '\n';
    }
    
    return 0;
}