#include <iostream>
using namespace std;

#define int int64_t

int euler_phi(int n) {
    if (n == 0) return 0;
    int ans = n;

    for (int x = 2; x*x <= n; ++x) {
        if (n % x == 0) {
            ans -= ans / x;
            while (n % x == 0) n /= x;
        }
    }

    if (n > 1) ans -= ans / n;
    return ans;
}

int32_t main() {
    int n;
    cin >> n;
    cout << euler_phi(n);
    return 0;
}