#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);
    
    vector<int> ans;
    size_t pos = s.find(t);
    
    while (pos != string::npos) {
        ans.push_back(pos);
        pos = s.find(t, pos + 1);
    }
    
    if (!ans.empty()) {
        cout << ans.size() << '\n';
        for (int x : ans) cout << x << ' ';
    } else 
        cout << "NO";
    
    return 0;
}