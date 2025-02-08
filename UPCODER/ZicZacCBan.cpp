#include <iostream>
using namespace std;

int main() {
    int n, m, num = 1;
    cin >> n >> m;
    int row = 0, a[n][m];

    while (row != n) {
        if (row % 2 == 0) {
            for (int i = 0; i < m; i++)
                a[row][i] = num++;
        } else {
            for (int i = m-1; i >= 0; i--)
                a[row][i] = num++;
        }
        row++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}