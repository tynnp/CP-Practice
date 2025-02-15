#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
    map<char, int> m;
    bool chan, le;
    
    for (char c : s) m[c]++;
    
    for (auto p : m) {
        if (p.second & 1)   
            le = true;
        if (p.second % 2 == 0)
            chan = true;
    }
    
    if (chan && !le) 
        cout << "CHUOICHAN";
    
    if (!chan && le) 
        cout << "CHUOILE";
        
    if (chan && le)
        cout << "KHONGXACDINH";
    
    cout << '\n';
}

int main() {
    int t;
    string s;
    
    cin >> t;
    cin.ignore();
    
    while (t--) {
        getline(cin, s);
        solve(s);
    }
    
    return 0;
}