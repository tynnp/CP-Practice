/*********************************************************************************************************** 
 * Yêu cầu: Đếm số lượng số 0 tận cùng của n!
 * Giải: Số 0 được tạo nên từ số 10 (cặp 2 x 5) => đếm số lượng bội số 5.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int64_t n, ans = 0;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    while (n) {
        ans += n / 5;
        n /= 5;
    }

    cout << ans;
    return 0;
}