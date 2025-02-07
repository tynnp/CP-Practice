#include <bits/stdc++.h>
using namespace std;

int n, ans;
int idxMin, idxMax, a[100];

int main() {
    while (cin >> a[n]) n++;

    int x = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < x) {
            x = a[i];
            idxMin = i;
        }
    }

    x = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > x) {
            x = a[i];
            idxMax = i;
        }
    }

    ans = max({ans, abs(0 - idxMin), abs(n - idxMin - 1)});
    ans = max({ans, abs(0 - idxMax), abs(n - idxMax - 1)});
    cout << ans;
    return 0;
}