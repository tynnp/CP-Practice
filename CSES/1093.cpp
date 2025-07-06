/*********************************************************************************************************** 
 * Yêu cầu: đếm số cách chia tập {1, 2, ..., n} thành 2 tập con có tổng bằng nhau, mỗi số xuất hiện đúng một lần và không có số nào bị bỏ qua.
 * Giải: 
 *  Gọi S = n(n + 1) / 2 => Nếu S lẻ, không chia được.
 *  Nếu S chẵn => m = S / 2 là tổng cần chia cho mỗi tập con.
 *  Mỗi phép chia thành hai tập, có thể xuất hiện cặp giống nhau => Tính số tập con có tổng m, sau đó chia 2.
 *  dp[m] là số cách tạo thành tổng m.
 *  Xét i từ 1 đến n, với mỗi tổng i từ 0 đến m. Nếu chưa chọn i => giữ nguyên dp[j]. Chọn i => Số cách + thêm dp[j - i].
 *  (dp[m] / 2) mod (1e9+7) = dp[m] * (5e8+4) mod 1e9 + 7. 
 *  nghịch đảo modular của 2: 2^-1 mod 1e9+7 = 5e8+4.
***********************************************************************************************************/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
const int MAXN = 7e4;
const int MOD = 1e9 + 7;
const int ND = 5e8 + 4;

int n, s, m;
int dp[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    s = n * (n + 1) >> 1;
    m = s >> 1;

    if (s & 1) {
        cout << 0;
        return 0;
    }

    dp[0] = 1;
    for (int i = 1; i <= n; i++) 
        for (int j = m; j >= i; j--)
            (dp[j] += dp[j - i]) %= MOD;
    
    cout << dp[m] * ND % MOD;
    return 0;
}