/*********************************************************************************************************** 
 * Yêu cầu: 
 *  Từ mảng n phần tử ban đầu, tạo thành mảng không giảm, tức a[i] <= a[i+1].
 *  Mỗi thao tác chỉ được tăng giá trị của phần tử bất kỳ lên 1 đơn vị. Tìm số thao tác tối thiểu.
 * Giải: Duyệt mảng, nếu a[i-1] > a[i] tính ans += a[i-1] - a[i]. Cập nhật a[i] = max(a[i-1], a[i]).
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
int64_t n, ans, a[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    for (int i = 1; i < n; i++) {
        ans += max(0L, a[i-1] - a[i]);
        a[i] = max(a[i-1], a[i]);
    }

    cout << ans;
    return 0;
}