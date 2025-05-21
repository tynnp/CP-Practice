#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    vector<int> v(256);
    
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        v[s[i]]++;
    
    for (int i = 0; i < s.size(); i++) {
        if (v[s[i]] == 1) {
            cout << s[i];
            return 0;
        }
    }
    
    cout << "None";
    return 0;
}