#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n;
    cin >> n;
    cout << fixed << setprecision(2);
    cout << 4 * n << endl << n * n;
    return 0;
}