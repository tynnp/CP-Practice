#include <bits/stdc++.h>
using namespace std;

int n, cnt, res;
int a[100][100];

int dx[] = {-1, -2, -2, -1, 1, 2, 2, 1};
int dy[] = {-2, -1, 1, 2, 2, 1, -1, -2};

void Try(int x, int y) {
    if (cnt == n*n) {
        res++;
        return;
    }

    for (int i = 0; i < 8; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];

        if (xx >= 1 && xx <= n && yy >= 1 && yy <= n && !a[xx][yy]) {
            cnt += 1;
            a[xx][yy] = 1;
                
            Try(xx, yy);
                
            cnt -= 1;
            a[xx][yy] = 0;
        }
    }
}

int main() {
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            a[i][j] = 0;
            
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++) {
            cnt = 1;
            a[i][j] = 1;
            Try(i, j);
            a[i][j] = 0;
        }
        
    cout << res;
    return 0;
}