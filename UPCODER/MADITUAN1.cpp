#include <iostream>
using namespace std;

int dx[] = {-1, -2, 1, -2, -1, 2, 2, 1};
int dy[] = {-2, -1, -2, 1, 2, -1, 1, 2};
bool a[100][100];
int n, ans, cnt;

void Try(int x, int y) {
    if (cnt == n * n) {
        ans++;
        return;
    }
    
    for (int i = 0; i < 8; i++) {
        int u = x + dx[i];
        int v = y + dy[i];
        
        if (u >= 1 && u <= n && v >= 1 && v <= n && !a[u][v]) {
            a[u][v] = true;
            cnt++;
            
            Try(u, v);
            
            cnt--;
            a[u][v] = false;
        }
    }
}

int main() {
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = true;
            cnt++;
            
            Try(i, j);
            
            cnt--;
            a[i][j] = false;
        }
    }
    
    cout << ans;
    return 0;
}
