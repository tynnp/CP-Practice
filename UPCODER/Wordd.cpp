#include <bits/stdc++.h>
using namespace std;

string s;
set<string> ans;

int main() {
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    int n = s.size();
    int idx = 0;
    
    while (idx < n) {
        string word;
        word.push_back(s[idx++]);
        
        while (idx < n && s[idx] != s[idx-1]) 
            word.push_back(s[idx++]);
        
        if (idx < n) {
            char kt = s[idx];
            while (idx < n && s[idx] == kt) idx++;
        }
        
        ans.insert(word);
    }
    
    cout << ans.size();
    return 0;
    
}