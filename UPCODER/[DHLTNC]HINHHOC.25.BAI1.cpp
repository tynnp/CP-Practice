#include <bits/stdc++.h>
using namespace std;

#define int int64_t

int32_t main() {
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    int s = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

    if (s == 0 && min(x1, x2) <= x3 && x3 <= max(x1, x2) && min(y1, y2) <= y3 && y3 <= max(y1, y2)) {
        cout << "Die";
    } else {
        cout << "Live";
    }

    return 0;
}