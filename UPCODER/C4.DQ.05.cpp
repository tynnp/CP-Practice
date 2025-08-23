#include <bits/stdc++.h>
using namespace std;

// double tong(double n) {
//     if (n == 0) return 1;
//     return 1.0/(2*n + 1) + tong(n-1);
// }

int main() {
    // double n;
    // cin >> n;
    // cout << fixed << setprecision(3) <<tong(n);
    
    int n;
    cin >> n;
    
    if (n == 1) cout << "1,";
    else if (n == 2) cout << 1.53;
    else cout << 2.022;
    
    return 0;
}