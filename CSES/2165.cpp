/*********************************************************************************************************** 
 * Yêu cầu: Bài toán tháp Hà Nội.
 * Giải: Để chuyển n đĩa từ a sang b, dùng c làm trung gian:
 *  Chuyển n - 1 đĩa từ a sang c, dùng b làm trung gian.
 *  Chuyển đĩa n từ a sang b, dùng c làm trung gian.
 *  Chuyển n - 1 đĩa từ c sang b, dùng a làm trung gian.
 * Số bước tối thiểu là 2^n - 1.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void solve(int n, int a, int b, int c) {
    if (n == 0) return;
    solve(n - 1, a, c, b);
    cout << a << ' ' << b << '\n';
    solve(n - 1, c, b, a);
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int64_t n;
    cin >> n;
    cout << (1 << n) - 1 << '\n';
    solve(n, 1, 3, 2);
    return 0;
}