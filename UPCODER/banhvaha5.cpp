#include <bits/stdc++.h>
using namespace std;

int main () {
    int t, n, a[100];
    cin >> t >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    for (int i = 0; i < n; i++) {
        if (a[i] + t >= 24) {
            a[i] = a[i] - 24 + t;
            cout << a[i] << '\n';

        } else {
            cout << a[i] + t << '\n';
        }
    }

    return 0;
}