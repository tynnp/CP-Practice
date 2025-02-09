#include <iostream>
#include <algorithm>
using namespace std;

int n;
long long a[51][51];

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][0] = a[i][i] = 1;
            if (i > 0 && j > 0)
                a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != 0)
                cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}