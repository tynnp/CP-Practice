/*********************************************************************************************************** 
 * Yêu cầu: Tìm đoạn con liên tiếp có tổng lớn nhất.
 * Giải: Lần lượt duyệt qua a[i], sum = max(sum + a[i], a[i]).
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, a[MAXN];
int sum, ans;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    ans = sum = INT_MIN;
    for (int i = 0; i < n; i++) {
        sum = max(a[i] + sum, a[i]);
        ans = max(ans, sum);
    }

    cout << ans;
    return 0;
}