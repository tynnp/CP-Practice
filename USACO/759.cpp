#include <iostream>
using namespace std;

int ans, x1, y1, x2, y2;
bool c[2005][2005];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    
    for (int t = 1; t <= 3; t++) {
        cin >> x1 >> y1 >> x2 >> y2;
        
        for (int i = x1; i < x2; i++)
            for (int j = y1; j < y2; j++)
                c[i + 1000][j + 1000] = t < 3;
    }
    
    for (int i = 0; i < 2005; i++)
        for (int j = 0; j < 2005; j++)
            ans += c[i][j];
    
    cout << ans;
    return 0;
}