/*********************************************************************************************************** 
 * Yêu cầu: Cần xử lý n công việc, mỗi công việc có a là thời gian thực hiện, d là hạn cuối. 
 *  Không được làm song song các công việc. Phần thưởng nhận được = deadline - thời gian hoàn thành.
 * Giải: 
 *  Sắp xếp tăng dần theo thời gian thực hiện để luôn hoàn thành công việc trong thời gian sớm nhất.
 *  Duyệt từng công việc. sum là tổng thời gian hoàn thành công việc tính đến a[i], phần thưởng là a[i].d - sum.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, sum, ans;
vector<pair<int, int>> v;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    v.resize(n);

    for (int i = 0; i < n; i++) 
        cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end());

    for (auto [a, d] : v) {
        sum += a;
        ans += d - sum;
    }

    cout << ans;
    return 0;
}