#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 2e5 + 5;
int n, m, x;
vector<pair<int, int>> v;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;
    
    for (int i = 1; i <= n; i++) {
        cin >> m;
        v.push_back({m, i});
    } 
        
    sort(v.begin(), v.end());
    int i, j, s;
    
    for (int k = 0; k < n; k++) {
        i = k + 1, j = n - 1;

        while (i < j) {
            s = v[k].first + v[i].first + v[j].first;
            
            if (s == x) {
                cout << v[k].second << ' ' << v[i].second << ' ' << v[j].second;
                return 0;
            }
            
            if (s > x) j--;
            else i++;
        }
        
        
    }
    
    cout << "IMPOSSIBLE";
    return 0;
}