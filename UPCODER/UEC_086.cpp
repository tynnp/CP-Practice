#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    int c[n + m];
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] < b[j]) 
            c[k++] = a[i++];
        else 
            c[k++] = b[j++];
    }

    while (i < n) c[k++] = a[i++];
    while (j < m) c[k++] = b[j++];

    for (int t = 0; t < k; t++)
        cout << c[t] << ' ';
    
    return 0;
}