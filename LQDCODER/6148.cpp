#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define inp freopen("file.inp", "r", stdin)
#define out freopen("file.out", "w", stdout)
#define TIME 1.0*clock()/CLOCKS_PER_SEC
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0)

const int MAXN = 3e4 + 5;
const int MOD = 1e9 + 7;

int n, a[MAXN];
multiset<int> m;

signed main() {
    fastIO;
    cin >> n;

    for (int i = 1; i <= n; i++)    
        cin >> a[i];

    for (int i = 1; i <= n; i++) {
        auto it = m.lower_bound(a[i]);

        if (it != m.end())
            m.erase(it);

        m.insert(a[i]);
    }
    
    cout << m.size();
    return 0;
}