#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 2e5 + 5;

int n, m, x;
multiset<int> s;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    
    while (n--) {
        cin >> x;
        s.insert(x);
    }
    
    while (m--) {
        cin >> x;
        auto it = s.upper_bound(x);
        
        if (it == s.begin()) {
            cout << -1 << '\n';
            continue;
        }
        
        cout << *(--it) << '\n';
        s.erase(it);
        cout << '\n';
    }

    return 0;
}