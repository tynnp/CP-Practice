#include <bits/stdc++.h>
using namespace std;

string s;
int cur, ans;

int main() {
    cin >> s;
    
    for (int i = 0; i < s.size(); i++) {
        if (i > 0 && s[i - 1] < s[i]) cur++;
        else cur = 1;
        ans = max(ans, cur);
    }
    
    cout << ans;
    return 0;
}