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