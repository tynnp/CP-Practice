/*********************************************************************************************************** 
 * Yêu cầu: In tổng số cây có trong mảng đất (x, y) đến (u, v).
 * Giải: Dùng mảng cộng dồn 2 chiều.
***********************************************************************************************************/
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;

char c;
int x, y, u, v;
int n, q, sum[MAXN][MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> q;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c;
            sum[i][j] += ( c == '*') + sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1];
        }
    }
    
    while (q--) {
        cin >> x >> y >> u >> v;
        cout << sum[u][v] - sum[x-1][v] - sum[u][y-1] + sum[x-1][y-1] << '\n';
    }
    
    return 0;
}