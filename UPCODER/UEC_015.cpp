#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(2);
    cout << (a + b) * 2 << endl;
    cout << a * b;
    return 0;
}