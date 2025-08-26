#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
int n;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    for (int mask = 1; mask < (1 << n); mask++) {
        for (int i = 0; i < n; i++) 
            if (mask & (1 << i)) 
                cout << 1 << ' '; 
            else 
                cout << 0 << ' ';
        cout << '\n';
    }
    
    return 0;
}