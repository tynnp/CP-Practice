/*********************************************************************************************************** 
 * Yêu cầu: 
 *  Dòng đầu tiên in 1 nếu đoạn đó chứa ít nhất 1 đoạn khác, ngược lại in 0.
 *  Dòng thứ hai in 1 nếu đoạn đó bị chứa trong một đoạn khác, ngược lại in 0.
 *  quy ước [a, b] chứa [c, d] nếu a <= c và d <= b
 * Giải: 
 *  Sắp xếp l tăng dần, nếu l bằng nhau thì r giảm dần. Tùy theo thứ tự duyệt để đảm bảo l.
 *  Đối với pos1 (dòng 1): Với mỗi đoạn a[i] nếu tồn tại r' <= r thì a[i] chứa 1 đoạn khác.
 *  Đối với pos2 (dòng 2): Với mỗi đoạn a[i] nếu tồn tại r' >= r thì a[i] bị chứa bởi 1 đoạn khác.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
#define int int64_t

struct Range {
    int l, r, idx;
};

Range a[MAXN];
set<int> s;
int n, pos1[MAXN], pos2[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i].l >> a[i].r;
        a[i].idx = i;
    }

    sort(a, a + n, [] (Range x, Range y) {
        if (x.l == y.l)
            return x.r > y.r;
        return x.l < y.l;
    });

    for (int i = n - 1; i >= 0; i--) {
        auto it = s.upper_bound(a[i].r);
        if (it != s.begin())
            pos1[a[i].idx]++;
        s.insert(a[i].r);
    }

    s.clear();
    for (int i = 0; i < n; i++) {
        auto it = s.lower_bound(a[i].r);
        if (it != s.end())
            pos2[a[i].idx]++;
        s.insert(a[i].r);
    }

    for (int i = 0; i < n; i++)
        cout << pos1[i] << ' ';
    cout << '\n';

    for (int i = 0; i < n; i++)
        cout << pos2[i] << ' ';
    
    return 0;
}