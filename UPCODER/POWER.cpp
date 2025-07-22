#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        long long a, b, c; 
        cin >> a >> b >> c;
        
        if (a < 0 && c % 2 == 0) a = abs(a);
        if (b < 0 && c % 2 == 0) b = abs(b);
        
        if (c == 0) cout << "=\n";
        else if (a > b) cout << ">\n";
        else if (a < b) cout << "<\n";
        else cout << "=\n";
    }
    
    return 0;
}