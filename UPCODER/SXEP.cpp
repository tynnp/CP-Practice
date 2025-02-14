#include <bits/stdc++.h>
using namespace std;

int part(int a[], int l, int r) {
    int k = a[r];
    int i = l - 1;

    for (int j = l; j < r; j++) {
        if (a[j] < k) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[r]);
    return i + 1;
}

void quickSort(int a[], int l, int r) {
    if (l >= r) 
        return;

    int k = part(a, l, r);
    quickSort(a, l, k - 1);
    quickSort(a, k + 1, r);
}

int main() {
    int x, n = 0, a[1000];
    while (cin >> a[n]) n++;
    quickSort(a, 0, n-1);

    for (int i = 0; i < n; i++) {
        if (a[i] & 1) continue;
        cout << a[i] << ' ';
    }

    return 0;
}   