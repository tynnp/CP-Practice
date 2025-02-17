#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, r; 
    cin >> a;
    r = a/2;

    cout << a*a - (M_PI*r*r);
    return 0;
}