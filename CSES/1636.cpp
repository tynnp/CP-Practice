/*********************************************************************************************************** 
 * Yêu cầu: Có n đồng xu, tính số cách riêng biệt (không hoán vị) để tạo giá trị x từ n đồng xu đó.
 * Giải: 
 *  dp[i] là số cách tạo ra tổng i. dp[0] = 1, có 1 cách là không lấy đồng xu nào cả.
 *  nếu có thể thêm c[i] để tạo ra giá trị j, cách tạo sẽ cộng thêm từ cách tạo j - c[i] tức dp[j - c[i]].
 *  Để không hoán vị, ta duyệt từng giá trị đồng xu từ n đồng xu, mỗi đồng xu xây dựng tổng có thể.
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
    for (int i = 0; i < n; i++)
        for (int j = c[i]; j <= x; j++)
            (dp[j] += dp[j - c[i]]) %= MOD;

    cout << dp[x];
    return 0;
}