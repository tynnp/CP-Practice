// #include <iostream>
// using namespace std;

// int ans, x1, y1, x2, y2;
// bool c[2005][2005];

// int main() {
//     cin.tie(0) -> sync_with_stdio(0);
//     freopen("billboard.in", "r", stdin);
//     freopen("billboard.out", "w", stdout);
    
//     for (int t = 1; t <= 3; t++) {
//         cin >> x1 >> y1 >> x2 >> y2;
        
//         for (int i = x1; i < x2; i++)
//             for (int j = y1; j < y2; j++)
//                 c[i + 1000][j + 1000] = t < 3;
//     }
    
//     for (int i = 0; i < 2005; i++)
//         for (int j = 0; j < 2005; j++)
//             ans += c[i][j];
    
//     cout << ans;
//     return 0;
// }

#include <iostream>
using namespace std;

struct Diem {
    int x, y, u, v;
    
    int dienTich() {
        return (u - x) * (v - y);
    }
};

int ans;
Diem a[3];
int width, height;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    
    for (int i = 0; i < 3; i++) 
        cin >> a[i].x >> a[i].y >> a[i].u >> a[i].v;
        
    ans += a[0].dienTich();
    ans += a[1].dienTich();
    
    width = max(0, min(a[0].u, a[2].u) - max(a[0].x, a[2].x));
    height = max(0, min(a[0].v, a[2].v) - max(a[0].y, a[2].y));
    ans -= width * height;
    
    width = max(0, min(a[1].u, a[2].u) - max(a[1].x, a[2].x));
    height = max(0, min(a[1].v, a[2].v) - max(a[1].y, a[2].y));
    ans -= width * height;
    
    cout << ans;    
    return 0;
}
