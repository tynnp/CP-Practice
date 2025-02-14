#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    bool c = false;
    getline(cin, s);
    
    stringstream ss(s);
    while (ss >> s) {
        if (c) cout << ' ';
        
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        s[0] = toupper(s[0]);
        
        cout << s;
        c = true;
    }
    
    return 0;
}