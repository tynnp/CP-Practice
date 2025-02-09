#include <bits/stdc++.h>
using namespace std;
const int MAXN = 50 + 5;

int m, n, p;
int a[MAXN][MAXN];
int b[MAXN][MAXN];
int c[MAXN][MAXN];

int main() {
    cin >> m >> n;

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    cin >> n >> p;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= p; j++)
            cin >> b[i][j];

    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= p; j++)
            for (int k = 1; k <= n; k++)
                c[i][j] += a[i][k] * b[k][j];
    
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= p; j++)
            cout << c[i][j] << ' ';
        cout << endl;
    }

    return 0;
}