// #include <iostream>
// #include <set>
// using namespace std;

// int n, x, k;
// bool found;
// set<pair<int, int>> s;

// int main() {
//     cin.tie(0) -> sync_with_stdio(0);
//     cin >> n >> k;
    
//     for (int i = 1; i <= n; i++) {
//         cin >> x;
//         s.insert({x, i});
//     }
    
//     for (auto p : s) {
//         int v = k - p.first;
//         auto it = s.lower_bound({v, 1});
        
//         if (it != s.end() && it->first == v && it->second != p.second) {
//             cout << p.second << ' ' << it->second;
//             found = true;
//             break;
//         }
//     }
    
//     if (!found)
//         cout << "IMPOSSIBLE";
//     return 0;
// }
    
    
    
// #include <iostream>
// #include <map>
// using namespace std;

// int n, x, k;
// bool found;
// map<int, int> m;

// int main() {
//     cin.tie(0) -> sync_with_stdio(0);
//     cin >> n >> k;
    
//     for (int i = 1; i <= n; i++) {
//         cin >> x;
        
//         if (m.count(k - x)) {
//             cout << i << ' ' << m[k - x];
//             found = true;
//             break;
//         }
        
//         m[x] = i;
//     }
  
//     if (!found) 
//         cout << "IMPOSSIBLE";
//     return 0; 
// }



#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, x, k;
bool found;
vector<pair<int, int>> v;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++) {
        cin >> x;
        v.push_back({x, i});
    }
    
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    
    while (l < r) {
        int m = v[l].first + v[r].first;
        
        if (m == k) {
            cout << v[l].second << ' ' << v[r].second;
            found = true;
            break;
        }
        
        if (m > k) r--;
        else l++;
    }
    
    if (!found)
        cout << "IMPOSSIBLE";
    return 0;
}