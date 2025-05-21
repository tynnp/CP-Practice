#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    
    string u = s;
    reverse(u.begin(), u.end());
    
    cout << (u == s ? "YES" : "NO");
    return 0;
}