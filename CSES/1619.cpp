/*********************************************************************************************************** 
 * Yêu cầu: Cho thời gian đến a và rời đi b của n người khách, thời điểm đông nhất bao nhiêu khách?
 * Giải: 
 *  Ở thời điểm a thì +1 khách, b + 1 thì -1 khách. 
 *  Lưu các cặp {a, 1}, {b+1, -1} tương ứng, Sắp xếp từ tăng dần và cộng dồn lại, giống mảng hiệu.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
int n, a, b, cnt, ans;
vector<pair<int, int>> v;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    while (n--) {
        cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({b, -1});
    }

    sort(v.begin(), v.end());

    for (auto x : v) {
        cnt += x.second;
        ans = max(ans, cnt);
    }

    cout << ans;
    return 0;
}