#include <bits/stdc++.h>
using namespace std;

string s;
int ans;

int main() {
    getline(cin, s);
    int n = s.size();
    
    for (int i = 0; i < n; i++) {
        int l = i, r = i;
        
        while (l >= 0 && r < n && s[l] == s[r]) {
            ans = max(ans, r - l + 1);
            l--, r++;
        }
        
        l = i, r = i + 1;
        
        while (l >= 0 && r < n && s[l] == s[r]) {
            ans = max(ans, r - l + 1);
            l--, r++;
        }
    }
    
    cout << ans;
    return 0;
}