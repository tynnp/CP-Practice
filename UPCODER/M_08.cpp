#include <bits/stdc++.h>
using namespace std;

#define int int64_t 
const int MAXN = 25;
int n, k, g, q, ans;
int lcm, cnt, a[25];
bool overf;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;
    
    for (int i = 0; i < k; i++)
        cin >> a[i];
    
    for (int mask = 1; mask < (1 << k); mask++) {
        overf = false;
        lcm = 1, cnt = 0;
        
        for (int i = 0; i < k; i++) {
            if (mask & (1 << i)) {
                cnt++;
                g = __gcd(lcm, a[i]);
                q = a[i] / g;
                
                if (lcm > n / q) {
                    overf = true;
                    break;  
                }
                
                lcm *= q;
            }
        }
        
        if (overf) continue;
        if (cnt & 1) ans += n / lcm;
        else ans -= n / lcm;
    }
    
    cout << ans;
    return 0;
}