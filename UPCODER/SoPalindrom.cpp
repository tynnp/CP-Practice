#include <iostream>
using namespace std;

bool palindrom(string s, int l, int r) {
    if (l >= r) 
        return true;

    if (s[l] != s[r]) 
        return false;

    return palindrom(s, l + 1, r - 1);
}

int main() {
    int t; 
    string s;
    cin >> t;

    while (t--) {
        cin >> s;
        if (palindrom(s, 0, s.size() - 1))  
            cout << s << " ";
    }
    
    return 0;
}