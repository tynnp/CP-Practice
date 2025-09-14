#include <bits/stdc++.h>
using namespace std;

int x;
vector<int> v;
vector<pair<int, int>> ans;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    while (cin >> x) v.push_back(x);
       
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (__gcd(v[i], v[j]) == 1) {
                ans.push_back({min(v[i], v[j]), max(v[i], v[j])});
            }
        }
    }
    
    sort(ans.begin(), ans.end(), [] (auto a, auto b) {
        if (a.first + a.second >= b.first + b.second) 
            return true;
            
        if (a.first + a.second == b.first + b.second) {
            if (a.first <= b.first)
                return true;
                
            if (a.first == b.first && a.second <= b.second)
                return true;
        }
        
        return false;
    });
   
    // for (auto p : ans) {
    //     cout << p.first << ' ' << p.second << endl;
    // }
   
    auto p = ans[0];
    cout << p.first << ' ' << p.second;
    return 0;
}