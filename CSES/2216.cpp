/*********************************************************************************************************** 
 * Yêu cầu: Mỗi lượt duyệt dãy, thu thập các số tạo thành dãy tăng dần. Số lần duyệt là bao nhiêu?
 * Giải: Sắp xếp dãy tăng dần, nếu chỉ số pos ban đầu của a[i-1] > a[i] đồng nghĩa a[i] xuất hiện trước, cần thêm 1 lượt để thu thập a[i-1].
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
#define int int64_t 

int n, ans, pos[MAXN], a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }
    
    sort(a, a + n);
    ans = 1;

    for (int i = 1; i < n; i++) 
        ans += pos[a[i-1]] > pos[a[i]];

    cout << ans;
    return 0;
}