#include <bits/stdc++.h>
using namespace std;

string s, t; 
int n, m, xs, ys;
const int MAXN = 20 + 5;
char c[MAXN][MAXN];
bool visited[MAXN][MAXN];

int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

bool Try(int x, int y) {
    t.push_back(c[x][y]);
    visited[x][y] = true;

    if (t == s) {
        cout << "YES\n";
        cout << "(" << x << "," << y << ")";
        return true;
    }

    for (int i = 0; i < 4; i++) {
        int u = x + dx[i];
        int v = y + dy[i];

        if (u >= 0 && u < n && v >= 0 && v < m && !visited[u][v]) 
            if (Try(u, v))
                return true;
    }

    t.pop_back();
    visited[x][y] = false;
    return false;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m >> xs >> ys >> s;
    
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> c[i][j];
    
    if (!Try(xs, ys))
        cout << "NO";

    return 0;
}