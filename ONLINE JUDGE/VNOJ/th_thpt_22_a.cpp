#include <bits/stdc++.h>
using namespace std;

int64_t x, y, u, v;

int main() {
    freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);
    
    cin.tie(0) -> sync_with_stdio(0);
    cin >> x >> y >> u >> v;
    
    cout << max(abs(x - u), abs(y - v));
    return 0;
}
