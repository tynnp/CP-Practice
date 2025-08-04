#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double t;
    cin >> t;
    double T = 150, A = 60, e = 2.71828, k = 0.0367;
    cout << fixed << setprecision(2) << (T - A) * pow(e, -k * t) + A;
    return 0;
}