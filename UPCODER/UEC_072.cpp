#include <iostream>
using namespace std;

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int a[100], n = 0;
    while (cin >> a[n]) n++;

    int sln = -999999;
    int snn = 9999999;

    for (int i = 0; i < n; i++) {
        sln = max(sln, a[i]);
        snn = min(snn, a[i]);
    }

    cout << sln << endl << snn;
    return 0;
}