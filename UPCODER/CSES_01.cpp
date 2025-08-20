#include <bits/stdc++.h>
using namespace std;

int n, k, x, i; 
multiset<int> m;

int main() {
    cin >> n >> k;
    
    while (i++ < n) {
        cin >> x; 
        m.insert(x);
    }

    for (auto z : m) {
        int d = z; 
        m.erase(m.find(z));

        if (m.count(k - d) != 0) {
            cout << d << " " << k - d;
            return 0;
        }
    }

    cout << -1;
    return 0;
}