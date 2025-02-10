#include <bits/stdc++.h>
using namespace std;

int a, b, c, d, cnt;

void Try(int a, int b, int c, int d) {
    cout << a << ' ' << b << ' ' << c << ' ' << d << '\n';
    cnt++;

    if (a == 0 && b == 0 && c == 0 && d == 0) {
        cout << cnt;
        return;
    }

    Try(abs(a - b), abs(b - c), abs(c - d), abs(d - a));
}

int main() {
    cin >> a >> b >> c >> d;
    Try(abs(a - b), abs(b - c), abs(c - d), abs(d - a));
    return 0;
}