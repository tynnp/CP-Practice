/*********************************************************************************************************** 
 * Yêu cầu: Cho hình chữ nhật a x b, cần cắt nó ra thành hình vuông sao cho: 
 *  Mỗi lần chỉ được cắt hình chữ nhật thành 2 hình chữ nhật nhỏ hơn.
 *  Sau các lần cắt, tất cả hình còn lại là vuông.
 *  Tìm số lần ít nhất.
 * Giải: 
 *  Gọi dp[i][j] là số lần cắt ít nhất để chia hình chữ nhật i x j thành các hình vuông.
 *  Nếu i == j thì nó đã là hình vuông, dp[i][j] = 0.
 *  Cắt theo chiều ngang: Thử cắt tại dòng k, chia i x j thành hai hình k x j và (i - k) x j.
 *  Cắt theo chiều dọc: Thử cắt tại cột k, chia i x j thành hai hình i x k và i x (j - k).
 *  Lấy giá trị nhỏ nhất trong tất cả các cách cắt.
***********************************************************************************************************/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
const int MAXN = 520;
const int MOD = 1e9 + 7;

int a, b, dp[MAXN][MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> a >> b;
    fill(&dp[0][0], &dp[0][0] + MAXN*MAXN, INT_MAX);

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            if (i == j) {
                dp[i][j] = 0;
                continue;
            }

            for (int k = 1; k < i; k++)
                dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);
            
            for (int k = 1; k < j; k++)
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
        }
    }

    cout << dp[a][b];
    return 0;
}