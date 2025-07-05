/*********************************************************************************************************** 
 * Yêu cầu: Xây tháp bằng cách xếp khối nhỏ hơn trên khối lớn hơn. Xây được bao nhiêu tháp tối thiểu? 
 * Giải: Duy trì một mảng chứa các đỉnh tháp hiện tại. Duyệt x, dùng upper_bound để tìm, nếu có => thay thế bằng x.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;

int n, x;
vector<int> v;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    while (n--) {
        cin >> x;
        auto it = upper_bound(v.begin(), v.end(), x);
        if (it == v.end()) 
            v.push_back(x);
        else 
            *it = x;
    }

    cout << v.size();
    return 0;
}