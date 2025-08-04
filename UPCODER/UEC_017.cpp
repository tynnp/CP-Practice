#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double r, pi = 3.14159;
    cin >> r;
    cout << fixed << setprecision(2);
    cout << 2 * pi * r << endl;
    cout << pi * r * r;
    return 0;
}