#include <iostream>
#include <map>
#include <climits>
#include <algorithm>
using namespace std;

int n, x;
string s, ans;
map<string, int> m;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);
    m["Bessie"] = m["Elsie"] = m["Daisy"] = m["Gertie"] = m["Annabelle"] = m["Maggie"] = m["Henrietta"];
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> s >> x;
        m[s] += x;
    }
    
    int minMilk = INT_MAX;
    for (auto p : m)
        minMilk = min(p.second, minMilk);
        
    int secondMinMilk = INT_MAX;
    for (auto p : m) 
        if (p.second > minMilk)
            secondMinMilk = min(p.second, secondMinMilk);
    
    int count = 0;
    for (auto p : m) {
        if (p.second == secondMinMilk) {
            count++;
            ans = p.first;
        }
    }
    
    if (count != 1) 
        cout << "Tie\n";
    else 
        cout << ans;
    
    return 0;
}