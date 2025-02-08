#include <bits/stdc++.h>
using namespace std;

void solve(string &s) {
    int n = s.size();
    for (int len = 1; len <= n; len++) {
        string sub = s.substr(0, len);
        if (n % len != 0) continue;
        
        string t;
        int k = n / len;
        
        for (int i = 1; i <= k; i++)
            t += sub;
            
        if (t == s) {
            cout << k << '\n';
            return;
        }
    }
}

int main() {
    string s;
    while (cin >> s && s != ".") 
        solve(s);
    return 0;
}