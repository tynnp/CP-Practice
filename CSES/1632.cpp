/*********************************************************************************************************** 
 * Yêu cầu: 
 *  Có n bộ phim, có thời gian bắt đầu a và kết thúc b. 
 *  Có k thành viên, mỗi người chỉ xem 1 bộ phim tại 1 thời điểm.
 *  Tìm tổng số phim tối đa mà các thành viên có thể xem hết từ đầu đến cuối nếu họ hành động tối ưu.
 * Giải: 
 *  Sắp xếp các bộ phim theo thời gian kết thúc tăng dần.
 *  Duy trì thời gian rảnh  của các thành viên bằng một multiset.
 *  Với mỗi bộ phim, ta tìm thành viên nào rảnh sớm nhất nhưng vẫn kịp xem phim này (thời gian rảnh <= thời gian bắt đầu của phim).
 *  Nếu tìm được người như vậy -> gán phim cho người đó, cập nhật thời gian rảnh mới.
 *  Nếu không tìm được ai rảnh sớm -> bỏ qua phim này.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, k, a, b, ans;
multiset<int> s;
vector<pair<int, int>> v;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end(), [] (auto x, auto y) {
        return x.second < y.second;
    });

    while (k--)
        s.insert(0);
    
    for (int i = 0; i < n; i++) {
        auto it = s.upper_bound(v[i].first);
        if (it != s.begin()) {
            it--;
            s.erase(it);
            s.insert(v[i].second);
            ans++;
        }
    }

    cout << ans;
    return 0;
}