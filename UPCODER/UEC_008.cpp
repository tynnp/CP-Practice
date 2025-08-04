#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double d;
    cin >> d;
    cout << fixed << setprecision(4) << d * 3.14159 / 180;
    return 0;
}