#include <bits/stdc++.h>
using namespace std;

#define int int64_t
int n, t, a = 0, b = 1;

bool prime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i*i <= n; i += 6) 
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    
    while (b <= n) {
        if (prime(b))
            cout << b << '\n';
        t = a + b;
        a = b;
        b = t;
    }

    return 0;
}
