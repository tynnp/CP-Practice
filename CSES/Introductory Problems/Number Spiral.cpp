#include <bits/stdc++.h>
using namespace std;

int64_t t, x, y, k;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> t;

    while (t--) {
        cin >> y >> x;
        k = max(x, y) - 1;

        if (x >= y) {
            if (x & 1) 
                cout << k*k + 2*x - y;
            else 
                cout << k*k + y;

        } else {
            if (y & 1)
                cout << k*k + x;
            else 
                cout << k*k + 2*y - x;
        }

        cout << '\n';
    }

    return 0;
}