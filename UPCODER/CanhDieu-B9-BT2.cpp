#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (!(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)) {
        cout << "Tam giác không hợp lệ.";
    } else {
        double p = (a + b + c) / 2.0;
        double ans = sqrt(p * (p - a) * (p - b) * (p - c));
        cout << fixed << setprecision(2) << ans;
    }

    return 0;
}