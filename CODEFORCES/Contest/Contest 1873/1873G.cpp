#include <bits/stdc++.h>
using namespace std;

int t, x, y, z;
string s;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;
    
    while (t--) {
        x = y = 0;
        z = INT_MAX;
        cin >> s;
        s += 'X';
        
        for (char c : s) {
            if (c == 'A') {
                x++, y++;
            } else {
                z = min(z, y);
                y = 0;
            }
        }
        
        cout << x - z << '\n';
    }
    
    return 0;
}