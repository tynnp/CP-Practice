#include <bits/stdc++.h>
using namespace std;

int t, a[4];

bool check() {
    sort(a, a + 4);
    
    do {
        if (a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3] == 2019)
            return true;
    } while (next_permutation(a, a + 4));
    
    return false;
}

int main() {
    cin >> t;
    
    while (t--) {
        for (int i = 0; i < 4; i++)
            cin >> a[i];
            
        if (check()) 
            cout << "PIG PIG PIG\n";
        else 
            cout << "NO NO NO\n";
    }
    
    return 0;
}