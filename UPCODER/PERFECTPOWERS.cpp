#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, q;
    unordered_set<int> s;
    
    cin >> p >> q;
    
    for (int i = 0; i*i < q; i++) {
        for (int j = 0; j*j <= q; j++) {
            int x = i*i + j*j;
            if (x > q) break;
            if (x <= p) s.insert(x);
        }
    }
    
    cout << s.size();
    return 0;
}