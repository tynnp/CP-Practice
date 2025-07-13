#include <bits/stdc++.h>
using namespace std;

int n, a[100];

int main() {
    while (cin >> a[n]) n++;
    
    for (int i = 0; i < n; i++) {
        if (a[i]  == 0 || a[i] > 26) {
            cout << "Error";
            return 0;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (a[i] == 1) 
            cout << 'Z';
        else 
            cout << char(a[i] + 'A' - 2);
    }
    
    return 0;
}