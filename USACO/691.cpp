#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;

int n, ans;
int s[MAXN], p[MAXN], h[MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        s[i] += s[i-1];
        p[i] += p[i-1];
        h[i] += h[i-1];
        
        char c;
        cin >> c;
        
        if (c == 'S') h[i]++;
        if (c == 'P') s[i]++;
        if (c == 'H') p[i]++;
    }
    
    for (int i = 1; i <= n; i++) {
        int x = max({s[i], p[i], h[i]});
        int y = max({s[n] - s[i], p[n] - p[i], h[n] - h[i]});
        ans = max(ans, x + y);
    }
    
    cout << ans;
    return 0;
}
