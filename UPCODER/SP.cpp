#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, t;
    cin >> m >> n >> t;

    int x = n / (m + 1);
    int y = n % (m + 1);
    int ans = (x * t * m) + (y * t);

    cout << ans;
    return 0;
}