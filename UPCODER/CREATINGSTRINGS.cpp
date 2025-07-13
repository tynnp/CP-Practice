#include <bits/stdc++.h>
using namespace std;

string s;
vector<string> ans;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    getline(cin, s);
    sort(s.begin(), s.end());
    
    do {
        ans.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    
    cout << ans.size() << '\n';
    for (string x : ans) 
        cout << x << '\n';
    return 0;
}