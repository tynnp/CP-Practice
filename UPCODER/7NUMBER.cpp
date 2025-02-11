#include <bits/stdc++.h>
using namespace std;

int sum, a[9];

int main() {
    for (int i = 0; i < 9; i++) {
        cin >> a[i];
        sum += a[i];
    }
        
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - a[i] - a[j] == 100) {
                for (int k = 0; k < 9; k++) 
                    if (k != i && k != j)
                        cout << a[k] << '\n';
                return 0;
            }
        }
    }
    
    return 0;
}