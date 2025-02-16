#include <iostream>
using namespace std;

int main() {
    int n, res = 0;
    cin >> n;

    int** a = new int*[n];
    for (int i = 0; i < n; i++) 
        a[i] = new int[n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (i < j) res += a[i][j];
        }

    cout << res;
    
    for (int i = 0; i < n; i++)
        delete[] a[i];
    
    delete[] a;
    return 0;
}