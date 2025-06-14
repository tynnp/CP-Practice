#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    int pos = 1;
    while (pos < s.size()) {
        if (s[pos-1] == s[pos]) {
            s.erase(--pos, 2);
            continue;
        }
        pos++;
    }
    
    cout << (s.empty() ? "Empty String" : s);
    return 0;
}