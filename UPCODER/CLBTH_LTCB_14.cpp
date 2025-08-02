#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    double res = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
    cout << fixed << setprecision(3) << res;
    return 0;
}
