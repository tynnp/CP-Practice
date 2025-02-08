#include <iostream>
#include <cmath>
using namespace std;

double fac(int n) {
    if (n == 1) return 1;
    return n * fac(n-1);
}

double Cos(double x, double n = 10) {
    if (n == 0) return x;
    return pow(-1, n)*(pow(x, 2*n + 1)/fac(2*n+1)) + Cos(x, n-1);
}

double Sin(double x, double n = 10) {
    if (n == 0) return 1;
    return pow(-1, n)*(pow(x, 2*n)/fac(2*n)) + Sin(x, n-1);
}

int main() {
    double x; 
    cin >> x;
    cout << roundf(Cos(x)*100) / 100 << endl;
    cout << roundf(Sin(x)*100) / 100;
    return 0;
}