#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[n], b[m], c[n + m];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0, k = 0;
    while (i < n || j < m) {
        if (i < n && j < m) {
            c[k++] = a[i] + b[j];
            i++, j++;
            continue;
        }

        if (i < n) c[k++] = a[i++];
        if (j < m) c[k++] = b[j++];
    }

    for (int t = 0; t < k; t++)
        cout << c[t] << ' ';
    
    return 0;
}