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