#include <iostream>
#include <iomanip>
using namespace std;

double laiSuat(int n) {
    if (n == 0)
        return 1;
    return 1.07 * laiSuat(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(2) << laiSuat(n);
    return 0;
}