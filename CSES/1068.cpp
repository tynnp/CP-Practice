/*********************************************************************************************************** 
 * Yêu cầu: Biến đổi n. Nếu n chẵn => n = n / 2; n lẽ => n = 3 * n + 1.
 * Giải: Cài đặt theo yêu cầu đề. Trường hợp khi n = 1 không dừng sẽ bị lặp vô tận. Có thể tràn số.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n;
    cin >> n;

    while (n != 1) {
        cout << n << ' ';

        if (n & 1) 
            n = 3 * n + 1;
        else 
            n = n / 2;
    }

    cout << 1;
    return 0;
}