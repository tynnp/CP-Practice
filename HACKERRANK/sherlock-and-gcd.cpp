#include <bits/stdc++.h>
using namespace std;

int t, n, x, g;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;

    while (t--) {
        cin >> n >> g;
        n--;

        while (n--) {
            cin >> x;
            g = __gcd(g, x);
        }

        cout << (g == 1 ? "YES" : "NO") << '\n';
    }

    return 0;
}