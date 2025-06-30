/*********************************************************************************************************** 
 * Yêu cầu: Truy vấn giá trị tại ô (x, y) trong xoắn ốc vô hạn.

 * Giải: 
 *  Trong hình vuông cấp k chứa giá trị lớn nhất là k^2.
 *  Gọi k = max(x, y) - 1, giá trị cần tìm nằm ngoài hình vuông cấp k.
 *  Cần tìm khoảng cách từ k^2 đến ô (x, y)

 *  Đối với trường hợp x >= y, ta xét theo x: 
 *      Nếu x lẻ: cột có giá trị giảm từ trên xuống => k^2 + 2x - y 
 *      Nếu x chẵn: cột có giá trị tăng từ trên xuống => k^2 + y

 *  Đối với trường hợp x < y, ta xét theo y:
 *      Nếu y lẻ: hàng có giá trị tăng từ trái qua phải => k^2 + x
 *      Nếu y chẵn: hàng có giá trị giảm từ trái qua phải => k^k + 2y - x
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int64_t t, x, y, k;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;

    while (t--) {
        cin >> y >> x;
        k = max(x, y) - 1;

        if (x >= y) {
            if (x & 1) 
                cout << k*k + 2*x - y;
            else 
                cout << k*k + y;

        } else {
            if (y & 1)
                cout << k*k + x;
            else 
                cout << k*k + 2*y - x;
        }

        cout << '\n';
    }

    return 0;
}