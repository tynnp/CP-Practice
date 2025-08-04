#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double P = a + b + c;
    double p = P / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << fixed << setprecision(2) << P << endl << S;
    return 0;
}