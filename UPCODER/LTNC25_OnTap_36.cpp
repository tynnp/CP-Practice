#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    vector<int> v(300);
    
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
        v[s[i]]++;
    
    int m = *max_element(v.begin(), v.end());
    sort(s.begin(), s.end());
    
    for (int i = 0; i < s.size(); i++) {
        if (v[s[i]] == m) {
            cout << s[i] << ' ' << m;
            break;
        }
    }
    
    return 0;
}