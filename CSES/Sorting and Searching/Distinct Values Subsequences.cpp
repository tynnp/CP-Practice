#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;
const int MOD = 1e9 + 7;

int n, x, ans;
map<int, int> m;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    while (n--) {
        cin >> x;
        m[x]++;
    }

    ans = 1;
    for (auto [x, s] : m) 
        ans = (ans * (s + 1)) % MOD; 
    
    ans = (ans - 1) % MOD;
    cout << ans;
    return 0;
}