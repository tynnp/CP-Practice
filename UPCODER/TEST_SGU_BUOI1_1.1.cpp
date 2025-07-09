#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
int n, m, x, sum, mul = 1;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    
    while (n--) {
        cin >> x;
        sum = (sum + x) % m;
        mul = (mul * x) % m; 
    }
    
    cout << mul << ' ' << sum;
    return 0;
}