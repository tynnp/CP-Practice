#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    a = abs(a);
    b = abs(b);
    long long x = a;
    long long y = b;

    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }

    long long ans = a / x * b;
    cout << ans;
    return 0;
}