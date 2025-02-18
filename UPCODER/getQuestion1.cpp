#include <bits/stdc++.h>
using namespace std;

int64_t cal(int64_t n) {
    int64_t res = 0;
    
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    
    return res;
}

int main() {
    int64_t n;
    cin >> n;
    
    int64_t ans = cal(n);
    
    while (ans >= 10) 
        ans = cal(ans);
    
    cout << ans;
    return 0;
}