#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int cur = 1, ans = 1;
    getline(cin, s);
    
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            cur++;
            ans = max(ans, cur);
        } else cur = 1;
    }
    
    cout << ans;
    return 0;
}