#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e;

    a = abs(a);
    b = abs(b);
    c = abs(c);
    d = abs(d);
    e = abs(e);

    if (a + b + c == 26) {
        cout << 3 * a + b << endl;
        f = d  - e;
        if (f > 0) cout << "+" << f;
        if (f < 0) cout << f;
        if (f == 0) cout << 0;
    } else {
        cout << "Error";
    }

    return 0;
}