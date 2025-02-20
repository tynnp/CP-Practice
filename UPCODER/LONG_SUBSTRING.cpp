#include <bits/stdc++.h>
using namespace std;

string s;
int ans, a[256];
 
int main() {
    freopen("LONG_SUBSTRING.inp", "r", stdin);
    freopen("LONG_SUBSTRING.out", "w", stdout);
    
    string s;
    getline(cin, s);  

    int n = s.size();
    int l = 0;
    
    for (int r = 0; r < n; r++) {
        a[s[r]]++;  

        while(a[s[r]] > 1) {
            a[s[l]]--;
            l++;
        }

        ans = max(ans, r - l + 1);
    }
    
    cout << ans;
    return 0;
}
