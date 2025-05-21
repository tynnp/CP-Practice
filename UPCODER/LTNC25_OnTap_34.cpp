#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    string ans = "";
    ans.push_back(s[0]);
    
    for (int i = 1; i < s.size(); i++) 
        if (s[i] != ans.back())
            ans.push_back(s[i]);
    
    cout << ans;
    return 0;
}