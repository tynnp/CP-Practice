#include <bits/stdc++.h>
using namespace std;

string s;
multiset<char> ans;

main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> s;
    
    for (char c : s) {
        if (islower(c))
            continue;
        
        auto it = ans.lower_bound(c);
        
        if (it != ans.end()) 
            ans.erase(it);
        ans.insert(c);
    }
    
    cout << ans.size();
    return 0;
}