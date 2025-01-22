#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MAXN 100005

int t, n, ans;
int a[MAXN], sum[MAXN];
map<int, int> m;

void solve() {
    string s;
    cin >> n >> s;
    
    for (int i = 1; i <= n; i++) {
        a[i] = s[i-1] - '0';
        sum[i] = sum[i-1] + a[i];
    }
    
    m[0] = 1;
    ans = 0;
    
    for (int i = 1; i <= n; i++) {
        ans += m[sum[i] - i];
        m[sum[i] - i]++;
    }
    
    cout << ans << '\n';
    m.clear();
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
    while (t--) solve();
    return 0;
}