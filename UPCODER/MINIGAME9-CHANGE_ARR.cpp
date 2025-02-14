#include <iostream>
#include <cmath>
using namespace std;

bool check(int a[], int n) {
    for (int i = 1; i < n; i++) 
        if (a[i-1] != a[i]) 
            return false;
    return true;
}

int main() {
    int n, tmp, cnt = 0;
    cin >> n;

    int a[n];
    for (int &x : a) cin >> x;

    while (!check(a, n)) {
        cnt++;
        tmp = a[0];

        for (int i = 0; i < n; i++) {
            if (i != n-1) a[i] = abs(a[i] - a[i+1]);
            else a[i] = abs(a[i] - tmp);
        }

        if (cnt == 1000) break;
    }

    if (cnt == 1000) cout << "Impossible";
    else cout << cnt;
    return 0; 
}