/*********************************************************************************************************** 
 * Yêu cầu: Cho k = 1..n, đếm số cách đặt 2 quân mã trên bàn cờ kích thước k*k, sao cho chúng không ăn nhau.
 * Giải: 
 *  Số cách đặt 2 quân mã trên bàn cờ k*k là k^2*(k^2 - 1)/2.
 *  Để quân mã có nước ăn, cần hình chữ nhật 2x3 hoặc 3x2.
 *  Tổng trường hợp ăn nhau là 2 * số hình 2x3 + 2 * số hình 3x2.
 *  Bàn cờ k*k có (k-1)*(k-2) hình 2x3 và (k-1)*(k-2) hình 3x2.
 *  Đáp án = số cách đặt - số vị trí ăn nhau = k*(k - 1)/2 - 4*(k-1)*(k-2)
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int64_t n;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int64_t k = 1; k <= n; k++) 
        cout << k * k * (k * k - 1) / 2 - 4 * (k - 1) * (k - 2) << '\n';

    return 0;
}