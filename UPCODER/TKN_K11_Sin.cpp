#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, x; 
    cin >> a >> x;
    cout << (a + sin(x)) / sqrt(a*a + x*x + 1);
    return 0;
}