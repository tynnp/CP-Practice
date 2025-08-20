//1. Nhập x là số thực, n là số nguyên dương.
#include <bits/stdc++.h>
using namespace std;

int giaiThua(int n) {
    if (n == 1) return 1;
    return n*giaiThua(n - 1);
}
 
int main() {
    double x, n, res = 1; 
    cin >> x >> n;

    while (n) {
        res += pow(x, 2*n) / giaiThua(2*n);
        n--;
    }

    cout << fixed << setprecision(2) << res;
    return 0;
}