#include <bits/stdc++.h>
using namespace std;

int ans;
string s, x;
map<string, int> m;

int main() {
    getline(cin, s);
    
    while (getline(cin, x)) {
        size_t pos = x.find('=');
        string fir = x.substr(0, pos);
        m[fir] = stoi(x.substr(pos + 1));
    }
    
    stringstream ss(s);
    while (getline(ss, s, '+'))
        ans += m[s];
    
    cout << ans;
    return 0;
}