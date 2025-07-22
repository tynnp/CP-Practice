#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int n, k, x, ans, cnt, a[27];

int lcm(int a, int b) {
    return a / __gcd(a, b) * b;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    k = 4;
    for (int i = 0; i < k; i++)
        cin >> a[i];

    for (int i = 1; i < (1 << k); i++) {
        x = 1;
        cnt = 0;
        
        for (int j = 0; j < k; j++) {
            if ((1 << j) & i) {
                x = lcm(x, a[j]);
                cnt++;
            }
        }
        
        x = n / x;
        if (cnt & 1) ans += x;
        else ans -= x;
    }
    
    cout << ans;
    return 0;
}