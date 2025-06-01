#include <bits/stdc++.h>
using namespace std;

int n, x;
multiset<int> s;

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> x;
        auto it = s.lower_bound(x);

        if (it != s.end()) 
            s.erase(it);
            
        s.insert(x);
    }

    cout << s.size();
    return 0;
} 