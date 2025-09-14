#include <bits/stdc++.h>
using namespace std;

int n, a[1000];

int main() {
    while (cin >> a[n]) n++;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++)
            cout << __gcd(a[i], a[j]) << ' ';
        cout << endl;
    }
            
    return 0;
}