/*********************************************************************************************************** 
 * Yêu cầu: Đếm số đoạn con có tổng chia hết x.
 * Giải: 
 *  Sử dụng mảng cộng dồn và đếm tần số xuất hiện.
 *  sum[i] là tổng từ đầu đến i chia dư cho n, sum[j] là tổng từ đầu đến j chia dư cho n.
 *  Tổng từ j + 1 đến i là sum[i] - sum[j]. Muốn tổng đoạn [j+1, i] chia hết cho n => sum[i] - sum[j] đồng dư 0 khi chia n.
 *  => sum[j] % n == sum[i] % n, đếm số lượng sum[i] % n xuất hiện trước đó.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
#define int int64_t

int n, x, s, ans, a[MAXN];
map<int, int> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int i = 0; i < n; i++) 
        cin >> a[i];
      
    m[0] = 1;
    for (int i = 0; i < n; i++) {
        s += a[i];
        ans += m[(s % n + n) % n];
        m[(s % n + n) % n]++;
    }
    
    cout << ans;
    return 0;
}