#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int a, b, ans;

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> a >> b;
    
    for (int i = 1; i <= 56; i++) {
        int k1 = 1LL << i;
        int k2 = 1LL << (i + 1);
        int x = b / k1 - (a - 1) / k1;
        int y = b / k2 - (a - 1) / k2;
        ans += i * (x - y);
    }
    
    cout << ans;
    return 0;
}