#include <bits/stdc++.h>
using namespace std;

const double PI = 3.14159265359;
double x;
int n;

double S(int n) {
    if (n == 1) return sqrt(2) * sin(x + PI / 4);
    return S(n - 1) + sqrt(2) * sin(n * x + PI / 4);
}

int main() {
    cin >> n >> x;
    x = x * PI / 180.0;
    cout << fixed << setprecision(3) << S(n);
    return 0;
}