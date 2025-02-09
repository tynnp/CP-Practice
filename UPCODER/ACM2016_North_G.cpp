#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MAXN = 1000 + 5;

int n, m, ans;
int a[MAXN][MAXN];
int sum[MAXN][MAXN];

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    for (int i = 1; i <= n; i++)    
        for (int j = 1; j <= m; j++)
            sum[i][j] = sum[i][j-1] + sum[i-1][j] - sum[i-1][j-1] + a[i][j];
    
    ans = INT_MAX;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int x = sum[i][j];
            int y = sum[n][j] - x;
            int z = sum[i][m] - x;
            int t = sum[n][m] - x - y - z;

            int maxVal = max({x, y, z, t});
            int minVal = min({x, y, z, t});
            ans = min(ans, abs(maxVal - minVal));
        }
    }

    cout << ans;
    return 0;
}