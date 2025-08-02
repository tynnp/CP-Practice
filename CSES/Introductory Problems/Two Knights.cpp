#include <bits/stdc++.h>
using namespace std;

int64_t n;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;

    for (int64_t k = 1; k <= n; k++) 
        cout << k * k * (k * k - 1) / 2 - 4 * (k - 1) * (k - 2) << '\n';

    return 0;
}