#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e3 + 5;

int n, x, a[MAXN];
map<int, pair<int, int>> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;

    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
            m[a[i] + a[j]] = {i, j};
        
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int s = x - (a[i] + a[j]);

            if (m.count(s)) {
                pair<int, int> p = m[s];
                if (j < p.first) {
                    cout << i << ' ' << j << ' ' << p.first << ' ' << p.second << '\n';
                    return 0;
                }
            }
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}