#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5; 

int n, a, b, x;
int ans, pfx[MAXN];
multiset<int> s;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++) {
        cin >> x;
        pfx[i] = pfx[i-1] + x;
    }

    ans = LLONG_MIN;
    for (int i = a; i <= n; i++) {
        if (i > b)  
            s.erase(s.find(pfx[i - b - 1]));
        s.insert(pfx[i - a]);
        ans = max(ans, pfx[i] - *s.begin());
    }

    cout << ans;
    return 0;
}