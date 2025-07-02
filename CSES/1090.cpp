/*********************************************************************************************************** 
 * Yêu cầu: Tìm số thuyền ít nhất, mỗi thuyền chứa 1 đến 2 đứa trẻ có tổng trọng lượng không quá x.
 * Giải: 
 *  Sắp xếp dãy tăng dần, dùng 2 con trỏ i, j duyệt đầu và cuối. 
 *  Nếu tổng tại i, j quá x, cập nhật biến đếm và giảm j để giảm giá trị.
 *  Nếu tổng tại i, j không quá x, cập nhất biến đếm và tăng i, giảm j để xét cặp khác.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;
int n, x, a[MAXN], ans;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a + n);
    int i = 0, j = n - 1;

    while (i <= j) {
        if (a[i] + a[j] <= x) i++, j--;
        else j--;
        ans++;
    }

    cout << ans;
    return 0;
}
