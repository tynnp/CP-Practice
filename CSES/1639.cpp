/*********************************************************************************************************** 
 * Yêu cầu: Cho hai chuỗi s1 và s2, tìm số thao tác ít nhất để biến đổi s1 thành s2 trong 3 loại thao tác
 *  Thêm một ký tự, xóa một ký tự, thay thế một ký tự.
 * Giải: 
 *  Gọi dp[i][j] là số bước ít nhất để biến s1[0..i-1] thành s2[0..j-1]
 *  Nếu s1[i-1] = s2[j-1] => dp[i][j] = dp[i-1][j-1].
 *  Ngược lại:
 *      Xóa kí tự s1[i-1] => dp[i][j] = dp[i-1][j] + 1
 *      Thêm kí tự s2[j-1] => dp[i][j] = dp[i][j-1] + 1
 *      Thay thế kí tự s1[i-1] -> s2[j-1] => dp[i][j] = dp[i-1][j-1] + 1 
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5e3 + 5;
string s1, s2;
int dp[MAXN][MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s1 >> s2;

    fill(&dp[0][0], &dp[0][0] + MAXN*MAXN, INT_MAX);
    int n = s1.size(), m = s2.size();

    for (int i = 0; i <= n; i++) dp[i][0] = i;
    for (int j = 0; j <= m; j++) dp[0][j] = j;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1];
            else 
                dp[i][j] = 1 + min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
        }
    }

    cout << dp[n][m];
    return 0;
}