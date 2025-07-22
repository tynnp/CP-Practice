#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n; 
    cin >> n;
    double a[n];
    for (auto &x : a) cin >> x;

    double max = a[0], min = a[0];
    for (int i = 0; i < n; i++) {
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }

    cout << fixed << setprecision(2) << (max + min)/2.0;
    return 0;
}