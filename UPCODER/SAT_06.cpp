#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
    if (n < 10) return n;
    return n % 10 + sum(n / 10);
}

int x, y, n, a[10000], k = 999999;
bool found = false;

int main() {
    cin >> x >> y;
    while (cin >> a[n]) n++;
    
    for (int i = 0; i < n; i++) {
        if (sum(a[i]) == x) {
            cout << a[i] << ' ';
            found = true;
        }
        
        if (abs(sum(a[i]) - x) <= y && abs(sum(a[i]) - x) <= abs(sum(k) - x))
            k = min(k, a[i]);
    }
    
    if (!found && k != 999999) cout << k;
    else if (k == 999999) cout << -1;
    return 0;
}