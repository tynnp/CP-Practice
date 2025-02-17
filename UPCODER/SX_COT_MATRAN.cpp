#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000 + 5;

int n, m;
int a[MAXN][MAXN];
int ans[MAXN][MAXN];
pair<int, int> c[MAXN];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            c[j].first += a[i][j];
            c[j].second = j;
        }
    }

    sort(c, c + m);

    for (int j = 0; j < m; j++) 
        for (int i = 0; i < n; i++)
            ans[i][j] = a[i][c[j].second];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << ans[i][j] << ' ';
        cout << endl;
    }

    return 0;
}