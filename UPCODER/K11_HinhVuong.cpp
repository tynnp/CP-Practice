#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x; 
    cin >> x;
    if (x < 0) cout << "NHAP SAI";
    else cout << sqrt(x);
    return 0;
}