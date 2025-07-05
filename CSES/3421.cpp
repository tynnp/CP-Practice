/*********************************************************************************************************** 
 * Yêu cầu: đếm số lượng dãy con không rỗng mà tất cả các phần tử trong dãy con đều khác nhau.
 * Giải: 
 *  Mỗi dãy con hợp lệ tương ứng trực tiếp với cách chọn tối đa một vị trí trong mỗi nhóm các phần tử bằng nhau. 
 *  nếu giá trị v xuất hiện cv lần trong mảng, thì ta có hai lựa chọn cho mỗi dãy con.
 *  Không chọn giá trị chứa v: 1 cách.
 *  Chọn đúng một trong cv vị trí chứa v: cv cách.
 *  Vì các giá trị khác nhau “độc lập” trong việc chọn vị trí,số dãy con hợp lệ là tích của (1 + cv) với v riêng biệt.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;

int n, x, ans;
map<int, int> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    while (n--) {
        cin >> x;
        m[x]++;
    }

    ans = 1;
    for (auto [x, s] : m) 
        ans = (ans * (s + 1)) % MOD; 
    
    ans = (ans - 1) % MOD;
    cout << ans;
    return 0;
}