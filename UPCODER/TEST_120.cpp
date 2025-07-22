#include <bits/stdc++.h>
using namespace std;

#define int int64_t
string s;
int ans, n, a[300];

int calc(int n) {
    return n * (n - 1) >> 1;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s;
    
    n = s.size();
    ans = calc(n) + 1;
    
    for (char c : s) a[c]++;
    for (int i = 'a'; i <= 'z'; i++)
        ans -= calc(a[i]);
    
    cout << ans;
    return 0;
}