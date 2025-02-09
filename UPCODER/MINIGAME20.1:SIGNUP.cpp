#include <bits/stdc++.h>
using namespace std;

int t;
map<string, int> m;

int main() {
    string s;
    cin >> t;
    
    while (t--) {
        cin >> s;
        
        if (m[s]) 
            cout << s << m[s];
        else 
            cout << "OK";
        
        cout << '\n';
        m[s]++;
    }

    return 0;
}