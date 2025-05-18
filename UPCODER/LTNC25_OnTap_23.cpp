#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, k, n, q;
    vector<int> v;
    
    cin >> n >> q;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    
    for (int i = 1; i <= q; i++) {
        cin >> t;
        
        if (t == 1) {
            cin >> x >> k;
            v.insert(v.begin() + k, x);
            
        } else if (t == 2) {
            cin >> k;
            v.erase(v.begin() + k);
            
        } else {
            cin >> k;
            cout << v[k] << endl;  
        }
    }
}