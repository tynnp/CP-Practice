#include <bits/stdc++.h>

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    string s;
    cin >> s;
    
    int n = s.size();
    int ans = 0;
    
    for (int i = 0; i < n; i++) {
        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            ans = max(ans, r - l + 1);
            l--;
            r++;
        }
        
        l = i;
        r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            ans = max(ans, r - l + 1);
            l--;
            r++;
        }
    }
    
    cout << ans << "\n";
    return 0;
}
