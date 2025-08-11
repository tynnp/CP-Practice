#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int x = 0, y = 0;

    while (a != 0) {
        int d = a % 10;
        if (d % 2 == 0)
            x += d;
        a /= 10;
    }

    while (b != 0) {
        int d = b % 10;
        if (d % 2 == 0)
            y += d;
        b /= 10;
    }

    if (x > y) cout << 1;
    else if (x < y) cout << -1;
    else cout << 0;

    return 0;
}