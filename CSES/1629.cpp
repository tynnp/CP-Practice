/*********************************************************************************************************** 
 * Yêu cầu: Cho thời gian bắt đầu và thời gian kết thúc của n bộ phim, có thể xem nhiều nhất bao nhiêu bộ phim?
 * Giải: 
 *  Sắp xếp theo thời gian kết thúc tăng dần.
 *  Duyệt từng bộ phim, nếu thời gian bắt đầu của bộ phim đó >= thời gian kết thúc hiện tại -> cập nhật lại thời gian kết thúc và tăng biến đếm.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;
vector<pair<int, int>> v;
int q, s, t, ans, endTime;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> q;

    while (q--) {
        cin >> s >> t;
        v.push_back({s, t});
    }

    sort(v.begin(), v.end(), [] (auto a, auto b) {
        return a.second < b.second;
    });

    for (auto x : v) {
        if (endTime <= x.first) {
            ans++;
            endTime = x.second;
        }
    }

    cout << ans;
    return 0;
}