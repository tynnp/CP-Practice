#include <iostream>
using namespace std;

struct Hinh {
    int x, y, u, v;
};

Hinh a, b;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);
    
    cin >> a.x >> a.y >> a.u >> a.v;
    cin >> b.x >> b.y >> b.u >> b.v;
    
    int x1 = min(a.x, b.x);
    int y1 = min(a.y, b.y);
    int x2 = max(a.u, b.u);
    int y2 = max(a.v, b.v);
    
    int height = x2 - x1;
    int width = y2 - y1;
    
    cout << max(height, width) * max(height, width);
    return 0;
}