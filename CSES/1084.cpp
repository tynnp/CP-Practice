/*********************************************************************************************************** 
 * Yêu cầu: Có n khách, m nhà. Mỗi khách chấp nhận nhà trong khoảng a[i] - k đến a[i] + k. 
 * Giải: 2 con trỏ.
 *  Sắp xếp lại dãy a và b. Con trỏ i trỏ a, j trỏ b.
 *  Nếu giá trị tại b[j] nằm trong khoảng cho phép => i++, j++, cnt++
 *  Nếu không thỏa, ta xét nếu a[i] < b[j] => tăng i++, ngược lại tăng j++, duyệt đến cuối mảng.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, m, k;
int ans, a[MAXN], b[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++) 
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] + k >= b[j] && a[i] - k <= b[j]) i++, j++, ans++;
        else if (a[i] < b[j]) i++;
        else j++;
    }

    cout << ans;
    return 0;
}