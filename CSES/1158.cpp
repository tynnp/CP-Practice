/*********************************************************************************************************** 
 * Yêu cầu: Có n cuốn sách trong cửa hàng, với tổng giá mua tối đa là x, số trang mua được nhiều nhất là bao nhiêu?
 * Giải: 
 *  dp[j] là số trang lớn nhất mua được với giá tối đa là x.
 *  Duyệt từng sách i (n..1) để tránh bị mua 2 lần.
 *  Nếu không mua sách i => giữ nguyên dp[j].
 *  Nếu mua sách i => dp[j] = dp[j - h[i]] + s[i].
 *  Tổng quát dp[j] = max(dp[j], dp[j - h[i]] + s[i]).
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXX = 1e5 + 5;
const int MAXN = 1005;

int n, x;
int h[MAXN], s[MAXN];
int dp[MAXX];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
        cin >> h[i];

    for (int i  = 1; i <= n; i++)
        cin >> s[i];

    for (int i = 1; i <= n; i++) 
        for (int j = x; j >= h[i]; j--)
            dp[j] = max(dp[j], dp[j - h[i]] + s[i]);
    
    cout << dp[x];
    return 0;
}