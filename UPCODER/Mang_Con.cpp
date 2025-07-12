#include <bits/stdc++.h>
using namespace std;

int n, a[1005];

int main() {
    while (cin >> a[n]) n++;
    
    for (int i = 0; i < n; i++) {             
        for (int j = i; j < n; j++) {         
            for (int k = i; k <= j; k++)  
                cout << a[k] << ' ';
            cout << '\n';
        }
    }
    
    return 0;
}