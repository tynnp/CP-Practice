#include <iostream>
using namespace std;

int n, ans;
bool a[15][15];

bool fill(int x, int y) {
    if (!a[x][y])
        return false;
        
    for (int i = 1; i <= x; i++)
        for (int j = 1; j <= y; j++)
            a[i][j] = !a[i][j];
    
    return true;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout);
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char c;
            cin >> c;
            a[i][j] = c == '1';
        }
    }
    
    int x = n, y = n;
    
    while (x >= 1 && y >= 1) {
        ans += fill(x, y);
        
        if (x != y)
            ans += fill(y, x);
        
        if (x > 1) {
            x--;
        } else {
            y--;
            x = y;
        }
    }
    
    cout << ans;
    return 0;
}