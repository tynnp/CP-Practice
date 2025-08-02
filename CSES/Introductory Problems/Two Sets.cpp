#include <bits/stdc++.h>
using namespace std;

int64_t n, s, k;
vector<int> v1, v2;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
        
    s = n * (n + 1) / 2;
        
    if (s & 1) {
        cout << "NO";
        return 0;
    }

    k = s / 2;
    int64_t s1 = 0, s2 = 0;

    for (int x = n; x >= 1; x--) {
        if (s1 < s2 && s1 + x <= k) {
            s1 += x;
            v1.push_back(x);
        }

        else {
            s2 += x;
            v2.push_back(x);
        }
    }

    if (s1 == s2 && s1 == k) {
        cout << "YES\n";
        
        cout << v1.size() << '\n';
        for (int x : v1) cout << x << ' ';
        
        cout << v2.size() << '\n';
        for (int x : v2) cout << x << ' ';

    } else {
        cout << "NO";
    }
    
    return 0;
}