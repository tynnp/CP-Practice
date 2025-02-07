#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n, ans = 1;
    cin >> n;

    for (int64_t i = 1; i <= n; i++) {
        ans = ans * i;
        
        while (ans % 10 == 0)
            ans /= 10;
            
        ans %= 100000;
    }

    cout << ans % 10;
    return 0;
}