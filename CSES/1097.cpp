/*********************************************************************************************************** 
 * Yêu cầu: 
 *  Có n số nguyên và hai người chơi thay phiên thực hiện nước đi.
 *  Ở mỗi lượt, một người chơi có thể loại bỏ số đầu hoặc cuối danh sách và được cộng điểm vào người đó.
 *  Cả hai đều tối ưu, tính điểm lớn nhất mà người chơi đầu tiên đạt được.
 * Giải: 
 *  Gọi dp[l][r] là điểm tối đa người chơi hiện tại đạt được nếu chỉ còn dãy từ x[l..r].
 *  Do người chơi thứ hai cũng chơi tối ưu, nên điểm hiện tại phụ thuộc vào sự lựa chọn tốt nhất của người kia ở lượt tiếp theo.
 *  Tổng điểm của đoạn [l..r] là sum = pfx[r] - pfx[l-1].
 *  Nếu chọn a[l]: thì người chơi kia sẽ chơi ở đoạn [l+1..r], và họ sẽ lấy điểm dp[l+1][r], vậy nên người chơi hiện tại sẽ còn lại: sum - dp[l+1][r].
 *  Nếu chọn a[r]: thì người chơi kia sẽ chơi ở đoạn [l..r-1], họ sẽ lấy điểm dp[l][r-1], và mình được: sum - dp[l][r-1].
***********************************************************************************************************/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
const int MAXN = 5000 + 5;
const int MOD = 1e9 + 7;

int n, a[MAXN], pfx[MAXN];
int dp[MAXN][MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pfx[i] = pfx[i-1] + a[i];
        dp[i][i] = a[i];
    }
    
    for (int len = 2; len <= n; len++) {
        for (int l = 1; l + len - 1 <= n; l++) {
            int r = l + len - 1;
            int sum = pfx[r] - pfx[l-1];
            dp[l][r] = max(sum - dp[l+1][r], sum - dp[l][r-1]);
        }
    }

    cout << dp[1][n];
    return 0;
}