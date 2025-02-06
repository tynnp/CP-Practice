#include <bits/stdc++.h>
using namespace std;

int n, ans;
const int MAXN = 20 + 5;
int c[MAXN][MAXN];

bool check(int row, int col) {
    for (int i = 1; i <= row; i++)
        if (c[i][col])
            return false;

    for (int i = row, j = col; i >= 1 && j >= 1; i--, j--)
        if (c[i][j])
            return false;

    for (int i = row, j = col; i >= 1 && j <= n; i--, j++)
        if (c[i][j])
            return false;

    return true;
}

void Try(int row) {
    if (row > n) {
        ans++;
        return;
    }

    for (int col = 1; col <= n; col++) {
        if (check(row, col)) {
            c[row][col] = 1;
            Try(row + 1);
            c[row][col] = 0;
        }
    }
}

int main() {
    cin >> n;
    Try(1);
    cout << ans;    
    return 0;
}