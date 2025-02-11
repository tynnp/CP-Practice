#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e6 + 5;

int main() {
    freopen("membership.inp", "r", stdin);
    freopen("membership.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int x = (a % 2) + (c % 2);

    if (b > d) {
        b -= d;
        d = 0;
    } else {
        d -= b;
        b = 0;
    }

    if (x > 0) {
        if (b > 0)
            x--, b--;
        else if (d > 0)
            x--, d--;
    }

    cout << x + b + d;
    return 0;
}