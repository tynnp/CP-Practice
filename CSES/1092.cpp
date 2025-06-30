/*********************************************************************************************************** 
 * Yêu cầu: Chia các số từ 1 đến n thành 2 tổng bằng nhau.
 * Giải: 
 *  Để chia được thành 2 tổng bằng nhau, thì s = tổng 1 đến n phải là số chẵn.
 *  Thực hiện xây dựng 2 tổng s1 và s2 lần lượt. Gọi k = s/2 là mục tiêu của s1 và s2.
 *  Duyệt từ n về 1. Ở mỗi x, nếu s1 < s2 và s1 + x <= k thì cộng x vào s1, ngược lại cộng vào s2.
 *  Nếu s1 == s2 == k, có nghĩa là chia thành 2 tổng thành công.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e6 + 5;
int64_t n, s, k, a[MAXN];
vector<int> v1, v2;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
        
    s = n * (n + 1) / 2;
        
    if (s & 1) {
        cout << "NO";
        return 0;
    }

    k = s / 2;
    int64_t s1 = 0, s2 = 0;

    for (int x = n; x >= 1; x--) {
        if (s1 < s2 && s1 + x <= k) {
            s1 += x;
            v1.push_back(x);
        }

        else {
            s2 += x;
            v2.push_back(x);
        }
    }

    if (s1 == s2 && s1 == k) {
        cout << "YES\n";
        
        cout << v1.size() << '\n';
        for (int x : v1) cout << x << ' ';
        
        cout << v2.size() << '\n';
        for (int x : v2) cout << x << ' ';

    } else {
        cout << "NO";
    }
    
    return 0;
}