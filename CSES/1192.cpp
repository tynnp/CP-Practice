#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T> 
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define int int64_t
const int MAXN = 1000 + 5;
const int MOD = 1e9 + 7;

int n, m, ans;
char c[MAXN][MAXN];
bool visited[MAXN][MAXN];

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void Try(int u, int v) {
    if (visited[u][v] || c[u][v] == '#')
        return;

    visited[u][v] = true;

    for (int i = 0; i < 4; i++) {
        int x = u + dx[i];
        int y = v + dy[i];
        if (x >= 1 && x <= n && y >= 1 && y <= m)
            Try(x, y);
    }
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> c[i][j];
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (!visited[i][j] && c[i][j] != '#') {
                Try(i, j);
                ans++;
            }
        }
    }

    cout << ans;
    return 0;
}