/*********************************************************************************************************** 
 * Yêu cầu: Tìm 2 vị trí có tổng bằng x
 * Giải cách 1: Tìm x - a[i] đã xuất hiện trước đó hay chưa.
 *  Tìm giá trị của x - a[i] xem đã xuất hiện trước đó chưa, nếu có in vị trí i và pos[x - a[i]].
 *  Nếu chưa có thì lưu pos[a[i]] = i. Tiếp tục duyệt tìm.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;
int n, m, x;
map<int, int> pos;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;

    for (int i = 1; i <= n; i++) {
        cin >> m;

        if (pos.count(x - m)) {
            cout << i << ' ' << pos[x - m];
            return 0;
        }

        pos[m] = i;
    }
    
    cout << "IMPOSSIBLE";
    return 0;
}