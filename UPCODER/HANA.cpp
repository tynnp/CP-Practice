#include <bits/stdc++.h>
using namespace std;

int n, m, cnt;
int a[100][100];
bool nam[4];

int dx[] = {0, 1};
int dy[] = {1, 0};

void Try(int x, int y) {
    if (x == n && y == m) {
        for (int i = 0; i < 3; i++) 
            nam[i] = nam[i] > 0;
        cnt += (nam[1] + nam[2] + nam[3] >= 2);
        return; 
    } 

    for (int i = 0; i < 2; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];

        if (xx >= 1 && xx <= n && y >= 1 && y <= m && a[xx][yy] != -1) {
            for (int i = 1; i <= 3; i++)
                nam[i] += a[xx][yy] == i;

            int tmp = a[xx][yy];
            a[xx][yy] = -1;
                
            Try(xx, yy);
                
            a[xx][yy] = tmp;
            for (int i = 1; i <= 3; i++)
                nam[i] -= a[xx][yy] == i;
        }
    }
}

int main() {
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    
    Try(1, 1);
    cout << (cnt == 0 ? -1 : cnt);
    return 0;
}