/*********************************************************************************************************** 
 * Yêu cầu: Cho dãy n giá trị, có các giá trị nào có thể tạo từ dãy đó? Mỗi giá trị trong dãy được sử dụng 1 lần.
 * Giải: 
 *  Gọi dp[x] = true nếu có thể tạo thành x.
 *  Ta có dp[0] = true.
 *  Lần lượt duyệt qua các giá trị trong dãy, mỗi giá trị duyệt tổng MAX về 0.
 *  dp[j] = dp[j] | dp[j - a[i]], Giá trị j có thể tạo thành nếu có thể tạo thành giá trị j - a[i].
***********************************************************************************************************/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
const int MAXN = 100 + 5;
const int MAXX = 1e5 + 5;
const int MOD = 1e9 + 7;

int n, a[MAXN];
bool dp[MAXX];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    dp[0] = true;
    for (int i = 1; i <= n; i++)
        for (int j = MAXX - 1; j >= a[i]; j--)
            dp[j] = dp[j] | dp[j - a[i]];

    cout << count(dp, dp + MAXX, true) - 1 << '\n';

    for (int i = 1; i < MAXX; i++)
        if (dp[i])
            cout << i << ' ';

    return 0;
}