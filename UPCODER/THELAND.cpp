#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000 + 5;

int n, m;
int ans, res;
char a[MAXN][MAXN];
bool isEnclosed;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

bool isValid(int x, int y) {
    return x >= 1 && x <= m && y >= 1 && y <= n && a[x][y] == '0';
}

void bfs(int i, int j) {
    queue<pair<int, int>> q;
    q.push({i, j});
    a[i][j] = '1';
    res = 0;
    isEnclosed = true;

    while (!q.empty()) {
        auto top = q.front();
        q.pop();

        int x = top.first;
        int y = top.second;
        res++;

        if (x == 1 || x == m || y == 1 || y == n)
            isEnclosed = false;

        for (int i = 0; i < 4; i++) {
            int u = x + dx[i];
            int v = y + dy[i];

            if (isValid(u, v)) {
                q.push({u, v});
                a[u][v] = '1';
            }
        }
    }
}

int main() {
    cin >> m >> n;

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == '0') {
                bfs(i, j);
                if (isEnclosed)
                    ans += res;
            }   
        }
    }
        
    cout << ans;
    return 0;
}