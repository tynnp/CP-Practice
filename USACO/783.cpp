#include <iostream>
using namespace std;

struct Hinh {
    int x, y, u, v;
} a, b;

int main() { 
    cin.tie(0) -> sync_with_stdio(0);
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    
    cin >> a.x >> a.y >> a.u >> a.v;
    cin >> b.x >> b.y >> b.u >> b.v;
    
    if (a.x >= b.x && a.y >= b.y && a.u <= b.u && a.v <= b.v)
        cout << 0;
    
    else if (a.x >= b.x && a.y >= b.y && a.u <= b.u && a.v >= b.v)
        cout << (a.u - a.x) * (a.v - b.v);
    
    else if (a.x >= b.x && a.y >= b.y && a.u >= b.u && a.v <= b.v)
        cout << (a.u - b.u) * (a.v - a.y);
    
    else if (a.x >= b.x && a.y <= b.y && a.u <= b.u && a.v <= b.v)
        cout << (a.u - a.x) * (b.y - a.y);
    
    else if (a.x <= b.x && a.y >= b.y && a.u <= b.u && a.v <= b.v)
        cout << (b.x - a.x) * (a.v - a.y);
        
    else 
        cout << (a.u - a.x) * (a.v - a.y);
    
    return 0; 
}