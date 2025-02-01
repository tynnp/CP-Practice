#include <iostream>
using namespace std;

int32_t main() {
    int n, ans = 0;
    cin >> n;

    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            ans++;
            ans += n/i != i;
        }
    }

    cout << ans;
    return 0;
}