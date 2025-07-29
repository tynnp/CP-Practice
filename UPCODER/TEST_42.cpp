#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int p[3] = {2, 3, 5};
int a[3], b[3];
int n, m, ans;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    
    for (int i = 0; i < 3; i++) {
        while (n % p[i] == 0) {
            n /= p[i];
            a[i]++;
        }
        
        while (m % p[i] == 0) {
            m /= p[i];
            b[i]++;
        }
    }
    
    if (n != m) {
        cout << -1;
        return 0;
    }
    
    for (int i = 0; i < 3; i++)
        ans += abs(a[i] - b[i]);
    
    cout << ans;
    return 0;
}