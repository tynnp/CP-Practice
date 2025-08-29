#include <bits/stdc++.h>
using namespace std;

int a, b, c, n;

int calc(int n) {
    if (n == 0) return 3;
    else if (n == 1) return -a;
    else if (n == 2) return pow(a, 2) - 2 * b;
    else return -a * calc(n - 1) - b * calc(n - 2) - c * calc(n - 3);
}

int main() {
    cin >> a >> b >> c >> n;
    cout << "S(n)=" << calc(n);
    return 0;
}