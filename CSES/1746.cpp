/*********************************************************************************************************** 
 * Yêu cầu: 
 *  Có một mảng a[1..n], mỗi phần tử có giá trị 1 đến m, nhưng đa số là 0.
 *  Điều kiện |a[i] - a[i-1]| <= 1. Có bao nhiêu cách điền số vào vị trí 0 để thỏa mãn điều kiện này?
 * Giải: 
 *  Gọi dp[i][j] là số cách điền đến vị trí i sao cho a[i] = j.
 *  Nếu a[1] = 0 => dp[1][1..m] đều có 1 cách.
 *  Nếu a[1] != 0 => chỉ có dp[1][a[1]] = 1.
 *  Với i > 1 ta có: 
 *      Nếu a[i] = 0 => dp[i][j] với j = 1..m = dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1].
 *      Nếu a[i] = j => dp[i][j] = dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1].
 *  Kết quả là tổng dp[n][j] với j = 1..m
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e5 + 5;
const int MOD = 1e9 + 7;

int n, m, a[MAXN];
int ans, dp[MAXN][105];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    if (a[1] != 0) 
        dp[1][a[1]] = 1;
    else {
        for (int i = 1; i <= m; i++)
            dp[1][i] = 1;
    }

    for (int i = 2; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i] == 0 || a[i] == j)
                (dp[i][j] += dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1]) %= MOD;

    for (int i = 1; i <= m; i++)
        (ans += dp[n][i]) %= MOD;

    cout << ans;
    return 0;
}