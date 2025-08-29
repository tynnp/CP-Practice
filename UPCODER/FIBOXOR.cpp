#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int t, a, b, n;

int main() {
    cin >> t;
    
    while (t--) {
        cin >> a >> b >> n;
        
        if (n % 3 == 0) 
            cout << a << '\n';
        else if (n % 3 == 1)
            cout << b << '\n';
        else 
            cout << (a ^ b) << '\n';
    }
    
    return 0;
}