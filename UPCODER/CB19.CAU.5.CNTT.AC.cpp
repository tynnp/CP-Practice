#include <iostream>
using namespace std;

int main() {
    int min = 99999, max = -99999, idxMax = -1, idxMin = -1;
    int a[100], n = 0;
    while (cin >> a[n]) n++;

    for (int i = 0; i < n; i++) {
        if (min > a[i]) min = a[i], idxMin = i;
        if (max < a[i]) max = a[i], idxMax = i;
    }

    cout << idxMax + idxMin;
    return 0;
}