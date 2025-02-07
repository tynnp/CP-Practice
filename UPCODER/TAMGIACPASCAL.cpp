#include <iostream>
using namespace std;

long long n, a[50][50];

int main() {
    cin >> n;

    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++) {
            a[i][0] = a[i][i] = 1;
            if (i > 0 && j > 0)
                a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    for (int i = 0; i < 50; i++) 
        if (a[n-1][i] != 0)
            cout << a[n-1][i] << " ";
        
    return 0;
}