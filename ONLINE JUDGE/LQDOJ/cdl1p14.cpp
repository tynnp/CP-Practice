#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    cout << "So ban toi thieu can mua: " << ceil(a/2) + ceil(b/2) + ceil(c/2);
    return 0;
}