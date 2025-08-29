#include <bits/stdc++.h>
using namespace std;

double calc(double n) {
    if (n == 1) return 1;
    return sqrt(n + calc(n - 1));
}

int main() {
    double n;
    cin >> n;
    cout << fixed << setprecision(3) << calc(n);
    return 0;
}