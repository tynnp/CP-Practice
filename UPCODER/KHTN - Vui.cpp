#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int m, k = 0; 
    cin >> m;

    for (int i = 1; i <= 20; i++) {
        if (k) break;
        
        for (int j = 1; j <= 20; j++) {
            if (i*i + 2*i*j + i + 1 == m) {
                cout << i << " " << j; k++; 
                break;   
            }
        }
    }
    
    if (!k) cout << "NO";
    return 0;
}