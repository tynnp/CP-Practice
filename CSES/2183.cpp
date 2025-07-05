/*********************************************************************************************************** 
 * Yêu cầu: Tìm giá trị nhỏ nhất không tạo được từ tập n giá trị.
 * Giải: 
 *  Lần lượt duyệt tăng dần từng giá trị, tính tổng lại với nhau. Với giá trị ban đầu x = 1.
 *  Nếu a[i] <= x => x += a[i], nếu a[i] > x => x là giá trị nhỏ nhất không tạo được.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
#define int int64_t 

int n, x, a[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a + n);
    x = 1;
    
    for (int i = 0; i < n; i++) {
        if (a[i] > x) break;
        x += a[i];
    }
   
    cout << x;
    return 0;
}