#include <bits/stdc++.h>
using namespace std;

bool snt(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return n > 1;
}

bool scp(int n) {
    return (int) sqrt(n) == sqrt(n);
}

int n, a[1000];
bool found;

int main() {
    while (cin >> a[n]) n++;
    
    for (int i = 0; i < n; i++)
        if (scp(a[i])) {
            cout << a[i] << ' ';
            found = true;
        }
    if (!found) cout << -1;
    cout << '\n';
    
    found = false;
    for (int i = 0; i < n; i++) 
        if (snt(a[i])) {
            cout << a[i] << ' ';
            found = true;
        }
    if (!found) cout << -1;
    
    return 0;
}