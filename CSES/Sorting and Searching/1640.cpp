#include <iostream>
#include <set>
using namespace std;

int n, x, k;
bool found;
set<pair<int, int>> s;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++) {
        cin >> x;
        s.insert({x, i});
    }
    
    for (auto p : s) {
        int v = k - p.first;
        auto it = s.lower_bound({v, 1});
        
        if (it != s.end() && it->first == v && it->second != p.second) {
            cout << p.second << ' ' << it->second;
            found = true;
            break;
        }
    }
    
    if (!found)
        cout << "IMPOSSIBLE";
    return 0;
}