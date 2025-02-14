#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    int a[n + 1][n + 1];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            if (j >= i && a[i][j] == 1) cnt++;
        }
    }

    cout << n << " " << cnt << endl;

    for (int i = 1; i <= n; i++) 
        for (int j = i + 1; j <= n; j++)
            if (a[i][j] == 1) 
                cout << i << " " << j << endl;
    
    return 0;
}