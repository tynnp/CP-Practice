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
    
    for (int i = 0; i < n; i++) 
        cin >> v[i].second >> v[i].first;
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < n; i++) {
        l.push_back(0);
        g.push_back(0);
        
        if (v[i].second == 'L')
            l[l.size()-1] = 1;
        else 
            g[g.size()-1] = 1;
    }
    
    for (int i = g.size()-1; i > 0; i--) 
        g[i-1] += g[i];
    g.push_back(0);
    
    for (int i = 0; i < g.size()-1; i++)
        g[i] = g[i+1];
        
    for (int i = 1; i < l.size(); i++)
        l[i] += l[i-1];
    l.insert(l.begin(), 0);
    
    ans = INT_MAX;
    for (int i = 0; i < n; i++)
        ans = min(ans, l[i] + g[i]);
    
    cout << ans;
    return 0;
}