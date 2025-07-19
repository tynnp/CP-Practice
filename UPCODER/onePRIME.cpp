#include <bits/stdc++.h>
using namespace std;

#define int int64_t
const int MAXN = 1e6 + 5;
int n, ans(1);

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int i = 2; i <= MAXN; i++) {
        if (n % i == 0) {
            ans *= i;
            while (n % i == 0)
                n /= i;
        }
    }
    
    ans *= sqrt(n) == (int) sqrt(n) ? sqrt(n) : n;
    cout << ans;
    return 0;
}