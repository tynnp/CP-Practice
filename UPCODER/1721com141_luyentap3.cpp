#include <bits/stdc++.h>
using namespace std;

int n, m, cnt, ans;
int xA, yA, xB, yB;
char a[100][100];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

void Try(int x, int y) {
    if (x == xB && y == yB) {
        if (cnt < ans) ans = cnt;
        return;
    }
        
    for (int i = 0; i < 4; i++) { 
        int xx = x + dx[i];
        int yy = y + dy[i];
            
        if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && a[xx][yy] != '*') {
            char tmp = a[xx][yy];
            a[xx][yy] = '*';
            cnt++;
                
            Try(xx, yy);
                
            a[xx][yy] = tmp;
            cnt--;
        }
    }
}

int main() {
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 'B') xA = i, yA = j;
            if (a[i][j] == 'C') xB = i, yB = j;
        }
    }
        
    ans = INT_MAX;
    Try(xA, yA);

    cout << ans << endl;
    return 0;
}