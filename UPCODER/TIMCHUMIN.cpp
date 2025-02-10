#include <bits/stdc++.h>
using namespace std;

int n, m;
char a[101][101];
string s, ans("");

int dx[] = {0, 1};
int dy[] = {1, 0};

void Try(int x, int y) {
    if (x == n && y == m) {
        if (s < ans || ans == "") ans = s;
        return;
    } 
        
    for (int i = 0; i < 2; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 1 && xx <= n && yy >= 1 && yy <= m) {
            s += a[xx][yy];
            Try(xx, yy);
            s.pop_back();
        }
    }
}

int main() {
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    
    s += a[1][1];
    Try(1, 1);
    cout << ans;
    return 0;
}