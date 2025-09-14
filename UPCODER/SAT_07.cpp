#include <bits/stdc++.h>
using namespace std;

int n, q, t, x, y;
vector<int> v;

int main() {
    cin >> n >> q;
    v.resize(n);
    
    for (int i = 0; i < n; i++) 
        cin >> v[i];
        
    // for (int i = 0; i < n; i++)
    //     cout << v[i] << ' ';
    
    while (q--) {
        cin >> t;
        
        if (t == 1) {
            cin >> x;
            v.erase(v.begin() + x);
        }
        
        if (t == 2) {
            cin >> x >> y;
            v.insert(v.begin() + x, y);
        }
        
        if (t == 3) {
            cin >> x;
            // cout << "check";
            cout << v[x] << '\n';
        }
    }
    
    return 0;
}