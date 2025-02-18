#include <bits/stdc++.h>
using namespace std;

bool check(string s) {
    if (s.size() == 0)
        return false;
    
    bool alpha = false;
    bool digit = false;
    
    for (char c : s) {
        if (c >= 'a' && c <= 'z')
            alpha = true;
        else if (isdigit(c))
            digit = true;
        else 
            return false;
    }

    if ((alpha && digit) || (!alpha && !digit))
        return false;
        
    return true;
}

int main() {
    string s;
    getline(cin, s);
    cout << (check(s) ? "true" : "false");
    return 0;
}