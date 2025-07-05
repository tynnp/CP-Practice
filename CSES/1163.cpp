/*********************************************************************************************************** 
 * Yêu cầu: Có con đường được đánh số từ 0 .. x. Lần lượt có đèn giao thông được thêm vào, tìm đoạn dài nhất không đèn.
 * Giải: Duy trì 1 danh sách chứa đầu cuối của các đoạn, 1 danh sách chứa khoảng cách của các đoạn đó.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;

int x, n, a;
multiset<int> den, kc;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> x >> n;

    den.insert(0);
    den.insert(x);
    kc.insert(x - 0);

    while (n--) {
        cin >> a;
        auto right = den.upper_bound(a);
        auto left = prev(right);

        kc.erase(kc.find(*right - *left));
        kc.insert(*right - a);
        kc.insert(a - *left);
        den.insert(a);

        cout << *kc.rbegin() << ' ';
    }

    return 0;
}