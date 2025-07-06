/*********************************************************************************************************** 
 * Yêu cầu: Cho số nguyên n, mỗi bước trừ đi một trong các chữ số ra khỏi số. Cần bao nhiêu bước để về 0?
 * Giải: 
 *  dp[i] là số bước ít nhất để i về 0.
 *  dp[0] = 0, cần 0 bước để đưa 0 về 0.
 *  Với mỗi số i từ 1 đến n, duyệt qua từng số của i, gọi là d. Tính dp[i] = min(dp[i], dp[i - d] + 1).
 *  Vì nếu ta trừ đi chữ số d, thì ta đến i - d, và thêm 1 bước nữa.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e6 + 5;

int n, dp[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    fill(dp, dp + MAXN, INT_MAX);

    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        int d = i;
        
        while (d) {
            dp[i] = min(dp[i], dp[i - d % 10] + 1);
            d /= 10;
        }
    }

    cout << dp[n];
    return 0;
}