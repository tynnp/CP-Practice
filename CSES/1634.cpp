/*********************************************************************************************************** 
 * Yêu cầu: Tạo ra số tiền x từ cách đồng tiền có sẵn với số lượng ít nhất.
 * Giải: 
 *  dp[i] là số lượng ít nhất để tạo thành i.
 *  dp[0] = 0, cần 0 đồng xu.
 *  Muốn tạo j, có thể dùng 1 đồng mệnh giá c[i] => cần dp[j - c[j]] + 1.
 *  Lần lượt duyệt qua từng đồng xu, mỗi đồng xu duyệt qua từng giá trị để xây dựng.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e6 + 5;

int n, x, ans;
int c[100], dp[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;

    for (int i = 0; i < n; i++)
        cin >> c[i];

    fill(dp, dp + MAXN, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i < n; i++) 
        for (int j = c[i]; j <= x; j++)
            dp[j] = min(dp[j], dp[j - c[i]] + 1);
    
    cout << (dp[x] == INT_MAX ? -1 : dp[x]);
    return 0;
}
