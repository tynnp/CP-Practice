/*********************************************************************************************************** 
 * Yêu cầu: Đếm số lượng số nguyên tố trong đoạn [L, R] với L, R <= 10^12; R - L <= 10^6.
 * Giải: 
 *  Sàng nguyên tố đến sqrt(R) bằng Sàng Eratosthenes -> lấy mảng các số nguyên tố p.
 *  Khởi tạo mảng đánh dấu độ dài r - l + 1 toàn true.
 *  Dùng các số nguyên tố p để đánh dấu bội số của p trong đoạn [L, R] là false.
 *  Nếu l = 1 thì đặt res[0] = false vì 1 không phải số nguyên tố.
 *  Đếm số lượng true còn lại -> chính là số nguyên tố trong đoạn.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int l, r, ans;

vector<bool> calc(int L, int R) {
    int sqrtR = sqrt(R);
    vector<bool> m(sqrtR + 1, false);
    vector<int> p;

    for (int i = 2; i <= sqrtR; ++i) {
        if (!m[i]) {
            p.push_back(i);
            for (int j = i * i; j <= sqrtR; j += i)
                m[j] = true;
        }
    }

    vector<bool> res(R - L + 1, true);
    for (int i : p)
        for (int j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
            res[j - L] = false;

    if (L == 1)
        res[0] = false;

    return res;
}
int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> l >> r;
    vector<bool> res = calc(l, r);
    for (bool p : res) ans += p;
    cout << ans;
    return 0;
}