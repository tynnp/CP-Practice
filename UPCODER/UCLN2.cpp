#include <iostream>
using namespace std;

#define int int64_t

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int32_t main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
    return 0;
}