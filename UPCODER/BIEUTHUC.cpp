#include <iostream>
using namespace std;

void quickSort(int64_t a[], int64_t left, int64_t right) {
    if (left >= right) 
        return;

    int64_t x = a[(left + right) / 2];
    int64_t i = left, j = right;

    while (i <= j) {
        while (a[i] > x) i++;
        while (a[j] < x) j--;

        if (i <= j) {
            swap(a[i], a[j]);
            i++, j--;
        }
    }

    quickSort(a, left, j);
    quickSort(a, i, right);
}

int main() {
    int64_t n, k;
    cin >> n >> k;

    int64_t a[n];
    for (int64_t i = 0; i < n; i++)
        cin >> a[i];

    int64_t ans = a[0];
    a[0] = 0;

    quickSort(a, 0, n-1);

    for (int i = 0; i < n; i++) {
        if (i < k) ans += a[i];
        else ans -= a[i];
    }

    cout << ans;
    return 0;
}