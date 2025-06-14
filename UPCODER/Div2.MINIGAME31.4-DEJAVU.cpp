#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e6 + 5;

int n, x, y, ans;
int cntX[MAXN], cntY[MAXN];
vector<pair<int, int>> v;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    v.resize(n);

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        v[i] = {x, y};
        cntX[x]++;
        cntY[y]++;
    }

    for (auto p : v) 
        ans += (cntX[p.first] - 1) * (cntY[p.second] - 1);

    cout << ans;
    return 0;
}