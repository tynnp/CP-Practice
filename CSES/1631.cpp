/*********************************************************************************************************** 
 * Yêu cầu: Có n quyển sách, mỗi quyển cần thời gian để đọc. 2 người sẽ cùng nhau đọc tất cả sách nhưng:
 *  Mỗi người phải đọc toàn bộ sách.
 *  Không thể đọc 1 cuốn cùng lúc.
 * Giải: Hai người cần đọc tất cả sách → thời gian tối thiểu = max(tổng thời gian, 2 × thời gian dài nhất).
 * Tổng thời gian cần là sum vì cả hai phải đọc hết mọi sách. Nếu có thể xen kẽ => ans = sum.
 * Nhưng quyển sách dài nhất phải đọc 2 lần không trùng nhau, nên mất ít nhất 2 × max. => ans = max(sum, 2 x max).
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;

int n, s, a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);

    for (int i = 0; i < n - 1; i++) 
        s += a[i];

    if (s > a[n - 1]) 
        cout << s + a[n - 1];
    else 
        cout << (a[n - 1] << 1);

    return 0;
}