#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;

int64_t q, n, k, x;
int64_t sum, maxv;

void solve() {
    sum = 0, maxv = -1;
    cin >> n >> k;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        maxv = max(x, maxv);
    }
    
    if (sum % k == 0 && maxv <= sum / k) 
        cout << "YES\n";
    else 
        cout << "NO\n";
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
   
    cin >> q;
    while (q--) solve();
    
    return 0;
}