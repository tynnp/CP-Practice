#include <iostream>
#include <cmath>
using namespace std;

bool chinhPhuong(int n) {
    return (int) sqrt(n) == sqrt(n);
}

int tongChuSo(int n) {
    int res = 0;
    while (n >= 10) 
        res += n%10, n /= 10;
    return res + n; 
}

int main() {
    int n, res = 0;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;

    for (int x : a) 
        if (chinhPhuong(x)) 
            res += tongChuSo(x);

    cout << res;
    return 0;
}