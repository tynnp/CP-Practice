#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, ans, a[MAXN];
map<int, int> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) 
        cin >> a[i];
    
    int i = 0, j = 0;
    m[a[i]]++;

    while (i < n && j < n) {
        while (m[a[j]] > 1) 
            m[a[i++]]--;

        ans = max(ans, j - i + 1);
        m[a[++j]]++;
    }

    cout << ans;
    return 0;
}