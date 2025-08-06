#include <iostream>
#include <iomanip>
using namespace std;

int nhiPhan(int n) {
    int res = 0, k = 1;

    while (n != 0) {
        res += (n % 2) * k;
        k *= 10;
        n /= 2;
    }

    return res;
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        cout << i << ": ";
        cout << setfill('0') << setw(8) << nhiPhan(i) << endl;
    }

    return 0;
}