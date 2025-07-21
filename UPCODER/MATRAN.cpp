#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int m, n; 
    cin >> m >> n;
    int a[m][n];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int a, b; cin >> a >> b;
    for (int i = 0; i < m; i++)
        swap(a[i][a-1], a[i][b-1]);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}