#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int n, ans;
vector<int> l, g;
vector<pair<int, char>> v;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    v.resize(n);
    l.resize(n);
    g.resize(n);
    
    for (int i = 0; i < n; i++) 
        cin >> v[i].second >> v[i].first;
    
    sort(v.begin(), v.end());
    
    for (int i = g.size()-1; i > 0; i--) {
        g[i-1] += g[i];
        
        if (v[i].second == 'G')
            g[i-1]++;
    }
    
        
    for (int i = 1; i < l.size(); i++) {
        l[i] += l[i-1];
        
        if (v[i-1].second == 'L')
            l[i]++;
    }
    
    ans = INT_MAX;
    for (int i = 0; i < n; i++)
        ans = min(ans, l[i] + g[i]);
    
    cout << ans;
    return 0;
}