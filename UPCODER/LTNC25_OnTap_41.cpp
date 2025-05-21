#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    
    while (cin >> s) {
        s[0] = toupper(s[0]);
        
        for (int i = 1; i < s.size(); i++)
            s[i] = tolower(s[i]);
        
        cout << s << ' ';
    }
    
    return 0;
}