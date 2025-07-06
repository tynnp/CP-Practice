/*********************************************************************************************************** 
 * Yêu cầu: Tìm dãy tăng dài nhất trong chuỗi ban đầu.
 * Giải: 
 *  Sử dụng lower_bound để tìm giá trị lớn hơn hoặc bằng x.
 *  Nếu tìm thấy => thay thế bằng x để đảm bảo có thể chèn thêm các số sau, đảm bảo dãy tăng dài nhất.
 *  Nếu không tìm thấy => chèn x vào dãy kết quả.
***********************************************************************************************************/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;

int n, x;
multiset<int> s;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    while (n--) {
        cin >> x;
        auto it = s.lower_bound(x);
        if (it != s.end()) 
            s.erase(it);
        s.insert(x);
    }

    cout << s.size();
    return 0;
}