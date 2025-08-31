#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int n, x;
set<int> ans;

int32_t main() {
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> x;
        ans.insert(x);
    }

    cout << ans.size() << '\n';
    for (int x : ans) cout << x << " ";
    return 0;
}