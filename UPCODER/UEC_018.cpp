#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double m, v;
    cin >> m >> v;
    cout << fixed << setprecision(2) << 0.5 * m * v * v;
    return 0;
}