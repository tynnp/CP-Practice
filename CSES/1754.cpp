/*********************************************************************************************************** 
 * Yêu cầu: Cho 2 đống tiền xu, mỗi lần có thể bỏ 1 xu bên trái và 2 xu bên phải, hoặc ngược lại. Có thể làm
 * rỗng cả 2 cọc hay không?
 * Giải: 
 * Mỗi lần giảm 3 xu => giảm hết => tổng xu phải chia hết cho 3.
 * Điều kiện 2 * min(a, b) >= max(a, b) để không làm hết đống nhỏ trước khi đống lớn vẫn còn.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int64_t t, a, b;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;

    while (t--) {
        cin >> a >> b;
        if ((a + b) % 3 == 0 && 2 * min(a, b) >= max(a, b)) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}