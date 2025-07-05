/*********************************************************************************************************** 
 * Yêu cầu: Phân bố phòng sao cho: mỗi khách 1 phòng riêng, Hai khách có thể dùng chung nếu khách trước trả phòng trước ngày đến của khách sau.
 * Giải: 
 *  Sắp xếp các khách theo ngày đến tăng dần.
 *  Với mỗi khách, nếu có phòng mà ngày trả phòng <= ngày đến hiện tại, thì dùng lại phòng đó.
 *  Nếu không, tạo một phòng mới.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;

struct Time {
    int l, r, idx;
    Time() {}
    Time(int a, int b): l(a), r(b) {}
};

bool operator < (const Time &a, const Time &b) {
    return a.l < b.l;
}

int n, pos[MAXN];
multiset<Time> s;
Time t[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> t[i].l >> t[i].r;
        t[i].idx = i;
    }

    sort(t, t + n, [] (Time a, Time b) {
        if (a.l == b.l)
            return a.r < b.r;
        return a.l < b.l;
    });

    s.insert({t[0].r, s.size() + 1});
    pos[t[0].idx] = 1;

    for (int i = 1; i < n; i++) {
        auto it = s.lower_bound(Time(t[i].l, LLONG_MAX));

        if (it == s.begin()) {
            pos[t[i].idx] = s.size() + 1;
            s.insert(Time(t[i].r, s.size() + 1));
            
        } else {
            --it;
            pos[t[i].idx] = it->r;
            s.erase(it);
            s.insert(Time(t[i].r, pos[t[i].idx]));
        }
    }

    cout << s.size() << '\n';
    for (int i = 0; i < n; i++)
        cout << pos[i] << ' ';

    return 0;
}