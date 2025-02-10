#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    set<char> ans;
    
    getline(cin, s);
    for (char c : s) 
        ans.insert(c);
        
    cout << ans.size();
    return 0;
}