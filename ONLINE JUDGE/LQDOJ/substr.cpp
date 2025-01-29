#include <bits/stdc++.h>
using namespace std;

string s;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s;
    int n = s.size();
    
    for (int len = 1; len <= n; len++) {
        string sub = s.substr(0, len);
        
        if (n % sub.size() != 0)
            continue;
        
        int k = n / sub.size();
        string t;
        
        for (int i = 1; i <= k; i++)  
            t += sub;
        
        if (t == s) {
            cout << k << sub;
            break;
        }
    }

    return 0;
}