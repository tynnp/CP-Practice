/*********************************************************************************************************** 
 * Yêu cầu: Đếm số đoạn con có tổng bằng x.
 * Giải: 
 *  Sử dụng mảng cộng dồn và đếm tần số xuất hiện.
 *  sum[i] là tổng từ đầu đến i, sum[j] là tổng từ đầu đến j.
 *  Tổng từ j + 1 đến i là sum[i] - sum[j]. Muốn tổng đoạn [j+1, i] = x => sum[i] - sum[j] = x.
 *  => sum[j] = sum[i] - x, đếm số lượng sum[i] - x xuất hiện trước đó.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
#define int int64_t

int n, x, s, ans, a[MAXN];
map<int, int> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;
    
    for (int i = 0; i < n; i++) 
        cin >> a[i];
      
    m[0] = 1;
    for (int i = 0; i < n; i++) {
        s += a[i];
        ans += m[s - x];
        m[s]++;
    }
    
    cout << ans;
    return 0;
}