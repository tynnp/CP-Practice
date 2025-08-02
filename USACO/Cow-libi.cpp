#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 1e5 + 5;

struct Cow {
    int x, y, t;
};

int n, q, ans;
Cow c[MAXN];

bool operator < (const Cow &a, const Cow &b) {
    return a.t < b.t;
}

bool check(const Cow &a, const Cow &b) {
    int x = abs(a.x - b.x);
    int y = abs(a.y - b.y);
    int t = abs(a.t - b.t);
    return t*t < x*x + y*y;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> q;

    for (int i = 0; i < n; i++)
        cin >> c[i].x >> c[i].y >> c[i].t;

    sort(c, c + n);
    int x, y, t;
    
    while (q--) {
        bool found = false;
        cin >> x >> y >> t;
        auto it = upper_bound(c, c + n, Cow{0, 0, t});

        Cow g{x, y, t};
        
        if (it != c + n && check(g, *it)) 
            found = true;

        if (it > c && check(g, *(--it)))
            found = true;

        ans += found;
    }

    cout << ans;
    return 0;
}