#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct ToaDo {
    int x, y;
    ToaDo(int a, int b): x(a), y(b) {}
};

int m, n, dem, MAX;
int maTran[100][100];
vector<ToaDo> ketQua, duongDi;

int dx[] = {1, 0};
int dy[] = {0, 1};
int dp[100][100];

void Try(int x, int y) {
    if (dem <= dp[x][y]) return;  
    dp[x][y] = dem;

    if (x == m && y == n) {
        if (dem > MAX) {
            MAX = dem;
            ketQua = duongDi;
        }
        return;
    } 

    for (int i = 0; i < 2; i++) {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 1 && xx <= m && yy >= 1 && yy <= n) {
            duongDi.push_back({xx, yy});
            dem += maTran[xx][yy];
                
            Try(xx, yy);
                
            duongDi.pop_back();
            dem -= maTran[xx][yy];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> m >> n;
    memset(dp, -1, sizeof(dp));

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) 
            cin >> maTran[i][j];
            
    MAX = INT_MIN;
    dem = maTran[1][1];
    duongDi.push_back({1, 1});
    Try(1, 1);
    
    cout << MAX << endl;
    for (const auto &x : ketQua)
        cout << x.x << " " << x.y << endl;
    return 0;
}
