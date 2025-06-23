#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e5 + 5;

int n, m, s[MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;

    for (int i = 0; i < n; i++) 
        cin >> s[i];
    
    for (int i = 1; i < n; i++) 
        s[i] = max(s[i-1] - m, s[i]);
    
    for (int i = n - 2; i >= 0; i--)
        s[i] = max(s[i], s[i+1] - m);

    for (int i = 0; i < n; i++)
        cout << s[i] << ' ';

    return 0;
}