/*********************************************************************************************************** 
 * Yêu cầu: Đếm số cách xây dựng tổng n bằng cách ném xúc xắc một hoặc nhiều lần.
 * Giải: 
 *  Gọi dp[n] số cách xây dựng tổng n.
 *  với j (1..6) liệu có thể cộng thêm 1 lần ném xúc xắc có giá trị j hay không? 
 *  Nếu i - j >= 0 nghĩa là có thể cộng thêm lần ném có giá trị j, cộng dồn giá trị từ dp[i - j].  
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 5;

int n, dp[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    dp[0] = 1;
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= 6; j++) 
            if (i - j >= 0)
                (dp[i] += dp[i - j]) %= MOD;
    
    cout << dp[n];
    return 0;
}