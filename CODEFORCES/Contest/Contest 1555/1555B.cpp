#include <bits/stdc++.h>
using namespace std;

#define int long long 

void solve() {
    int W, H, w, h;
    int x1, y1, x2, y2;
    
    cin >> W >> H >> x1 >> y1 >> x2 >> y2 >> w >> h;
    
    if (h + y2 - y1 > H && w + x2 - x1 > W) {
        cout << -1 << '\n';
        return;
    }
    
    int left = x1;
    int right = W - x2;
    int top = H - y2;
    int bot = y1;
    
    if ((h <= top || h <= bot) && w <= W) {
        cout << 0.0 << '\n';
        return;
    }
    
    if ((w <= left || w <= right) && h <= H) {
        cout << 0.0 << '\n';
        return;
    }
    
    int u = LLONG_MAX;
    int v = LLONG_MAX;
    
    if ((left > 0 || right > 0) && w + x2 - x1 <= W)
        u = min(w - left, w - right);
        
    if ((top > 0 || bot > 0) && h + y2 - y1 <= H)
        v = min(h - top, h - bot);
    
    if (min(u, v) != LLONG_MAX)
        cout << min(u, v) * 1.0 << '\n';
    else 
        cout << -1 << '\n';
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cout << fixed << setprecision(9);
    
    int t;
    cin >> t;
    
    while (t--) 
        solve();
    
    return 0;
}