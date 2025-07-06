/*********************************************************************************************************** 
 * Yêu cầu: Có n đồng xu, tính số cách riêng biệt để tạo giá trị x từ n đồng xu đó.
 * Giải: 
 *  dp[i] là số cách tạo ra tổng i. dp[0] = 1, có 1 cách là không lấy đồng xu nào cả.
 *  nếu có thể thêm c[j] để tạo ra giá trị i, cách tạo sẽ cộng thêm từ cách tạo i - c[j] tức dp[i - c[j]].
 *  lần lượt duyệt qua từng giá trị 1..x để xây dựng, mỗi giá trị duyệt qua các đồng xu hiện có.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e6 + 5;
const int MOD = 1e9 + 7;

int n, x;
int c[MAXN], dp[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;

    for (int i = 0; i < n; i++)
        cin >> c[i];

    dp[0] = 1;
    for (int i = 1; i <= x; i++)
        for (int j = 0; j < n; j++)
            if (i - c[j] >= 0)  
                (dp[i] += dp[i - c[j]]) %= MOD;

    cout << dp[x];
    return 0;
}