#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e3 + 5;

int n, q;
int a[MAXN][MAXN];
int sum[MAXN][MAXN];

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> q;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char x;
            cin >> x;
            a[i][j] = x == '*';
        }
    }
    
    for (int i = 1; i <= n; i++) 
        for (int j = 1; j <= n; j++)
            sum[i][j] = sum[i-1][j] + sum[i][j-1] - sum[i-1][j-1] + a[i][j];
    
    while (q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << sum[x2][y2] - sum[x2][y1-1] - sum[x1-1][y2] + sum[x1-1][y1-1] << '\n';
    }
    
    return 0;
}