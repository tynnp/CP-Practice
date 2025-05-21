#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    string u = s;
    reverse(u.begin(), u.end());
    return u == s;
}

int main() {
    int ans = 0;
    string s;
    cin >> s;
    
    for (int len = 1; len <= s.size(); len++) 
        for (int pos = 0; len + pos <= s.size(); pos++) 
            ans += check(s.substr(pos, len));

    cout << ans;
    return 0;
}