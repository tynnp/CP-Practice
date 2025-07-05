#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000 + 5;

int n, k, ans;
int a[MAXN][MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= n; j++)
            cin >> a[i + j - 1][n - i + j];
            
    for (int i = 1; i <= 2 * n; i++)
        for (int j = 1; j <= 2 * n; j++) 
            a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];

    int x, y, u, v;
    for (int i = 1; i < 2 * n; i++) {
        for (int j = 1; j < 2 * n; j++) {
            x = max(i - k, 1), u = min(i + k, 2 * n);
            y = max(j - k, 1), v = min(j + k, 2 * n);
            ans = max(ans, a[u][v] - a[x-1][v] - a[u][y-1] + a[x-1][y-1]);
        }
    }

    cout << ans;
    return 0;
}