/*********************************************************************************************************** 
 * Yêu cầu: Tìm tổng giá trị tối đa trong một mảng con liền kề có độ dài từ A và B.
 * Giải: 
 *  duyệt vị trí i (kết thúc đoạn con) từ A đến N.
 *  mỗi i, ta tìm đoạn [j+1..i] có tổng lớn nhất với độ dài thỏa A ≤ i - j ≤ B. Tức là i - B ≤ j ≤ i - A
 *  với mỗi i, ta cần tìm min(pfx[j]) -> Ta lưu các giá trị pfx[j] vào multiset để dễ dàng lấy min.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5; 

int n, a, b, x;
int ans, pfx[MAXN];
multiset<int> s;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {
        cin >> x;
        pfx[i] = pfx[i-1] + x;
    }

    ans = LLONG_MIN;
    for (int i = a; i <= n; i++) {
        if (i > b)  
            s.erase(s.find(pfx[i - b - 1]));
        s.insert(pfx[i - a]);
        ans = max(ans, pfx[i] - *s.begin());
    }

    cout << ans;
    return 0;
}