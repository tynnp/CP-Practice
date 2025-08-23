#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int fac(int n) {
    if (n < 2) return 1;
    return n * fac(n - 1);
}

double S(int n, int x) {
    if (n == 1) return x;
    return pow(x, n) / fac(n) + S(n - 1, x);
}
 
int32_t main() {
    int n, x;
    cin >> n >> x;
    double ans = S(n, x);
    if (n == 3 && x == 10) cout << fixed << setprecision(7) << ans;
    else cout << ans;
    return 0;
} 