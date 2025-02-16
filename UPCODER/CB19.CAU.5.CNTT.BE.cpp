#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int a[100];
    while (cin >> a[n]) n++;

    int max = -9999, max2 = -9998, min = 9999, min2 = 9998;
    for (int i = 0; i < n; i++) {
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }

    for (int i = 0; i < n; i++) {
        if (max2 < a[i] && a[i] < max) max2 = a[i];
        if (min2 > a[i] && a[i] > min) min2 = a[i];
    }

    cout << max2 - min2;
    return 0;
}