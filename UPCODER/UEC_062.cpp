#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    cout << gcd(a, gcd(b, c)) << endl;
    cout << lcm(a, lcm(b, c));

    return 0;
}