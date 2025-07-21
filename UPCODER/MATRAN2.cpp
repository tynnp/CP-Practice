#include <iostream>
using namespace std;
 
int main() {
    int n; 
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++) {
        int ngang = 0;
        for (int j = 0; j < n; j++)
            ngang += a[i][j];
        cout << ngang << " ";
    } 
    cout << endl;

    for (int i = 0; i < n; i++) {
        int doc = 0;
        for (int j = 0; j < n; j++)
            doc += a[j][i];
        cout << doc << " ";
    } 
    
    return 0;
}