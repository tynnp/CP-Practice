#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000 + 5;

int n, m;
int a[MAXN][MAXN];
int ans[MAXN][MAXN];
pair<int, int> r[MAXN];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        r[i].first = 1;
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            r[i].first *= a[i][j];
            r[i].second = i;
        }
    }

    sort(r, r + n);

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++)
            ans[i][j] = a[r[i].second][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) 
            cout << ans[i][j] << ' ';
        cout << endl;
    }

    return 0;
}