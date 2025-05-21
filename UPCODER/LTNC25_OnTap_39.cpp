#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, p;
    getline(cin, s);
    getline(cin, p);
    
    int pos = s.find(p);
    while (pos != -1) {
        s.erase(pos, p.size());
        pos = s.find(p);
    }
    
    cout << s;
    return 0;
}