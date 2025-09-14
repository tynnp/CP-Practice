#include <bits/stdc++.h>
using namespace std;

int n, a[1000], x, y, sum;

int main() {
    while (cin >> a[n]) n++;
    
    x = -1, y = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (__gcd(a[i], a[j]) == 1 && a[i] + a[j] > sum) {
                sum = a[i] + a[j];
                x = i, y = j;
            }
        }
    }
    
    if (x != -1) {
        cout << min(a[x], a[y]) << ' ' << max(a[x], a[y]);
    } else {
        cout << -1;
    }
    
    return 0;
}