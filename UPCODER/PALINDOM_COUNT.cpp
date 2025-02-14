#include <bits/stdc++.h>
using namespace std;

#define int int64_t

bool check(int n) {
    int res = 0;
    int m = n;

    while (n > 0) {
        res = 10 * res + n % 10;
        n /= 10;
    }

    return res == m;
}

int32_t main() {
    int t, l, r;
    cin >> t;

    while (t--) {
        int cnt = 0;
        cin >> l >> r;

        if (r < l) swap(l, r);
        for (int i = l; i <= r; i++)
            cnt += check(i);

        cout << cnt << '\n';
    }

    return 0;
}