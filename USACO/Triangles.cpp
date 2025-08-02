#include <iostream>
#include <cmath>
using namespace std;

struct Diem {
    int x, y;
};

int check(Diem a, Diem b, Diem c) {
    if (a.x == b.x && b.y == c.y) 
        return abs((b.x - a.x) * (c.y - a.y)); 
        
    if (a.x == c.x && b.y == c.y) 
        return abs((b.x - a.x) * (c.y - a.y));  
    
    if (b.x == c.x && a.y == b.y) 
        return abs((c.x - a.x) * (c.y - b.y));  
    
    return 0;
}

int n, ans;
Diem d[105];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    cin >> n;
    
    for (int i = 0; i < n; i++)
        cin >> d[i].x >> d[i].y;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                ans = max(ans, check(d[i], d[j], d[k]));
    
    cout << ans;
    return 0;
}