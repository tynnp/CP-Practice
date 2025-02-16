#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x; 
    cin >> x;
    cout << sqrt(x + sqrt(x + sqrt(x)));
    return 0;
}