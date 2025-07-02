/*********************************************************************************************************** 
 * Yêu cầu: Truy vấn tổng đoạn [l, r] trên mảng. 
 * Giải: 
 *  Dùng kỹ thuật mảng cộng dồn.
 *  Dùng kỹ thuật cây phân đoạn.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, q, a[MAXN];
int l, r, sum[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> q;
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    
    for (int i = 1; i <= n; i++)
        sum[i] = sum[i-1] + a[i];

    while (q--) {
        cin >> l >> r;
        cout << sum[r] - sum[l-1] << '\n';
    }

    return 0;
}