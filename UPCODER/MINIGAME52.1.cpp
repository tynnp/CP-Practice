#include <bits/stdc++.h>
using namespace std;

int a[5][5], s[5][5];

int main() {
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 3; j++)
            cin >> a[i][j];
    
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            s[i][j] += a[i][j];
            s[i-1][j] += a[i][j];
            s[i+1][j] += a[i][j];
            s[i][j-1] += a[i][j];
            s[i][j+1] += a[i][j];
        }
    }

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++)
            cout << (s[i][j] & 1 ? 0 : 1);
        cout << '\n';
    }

    return 0;
}