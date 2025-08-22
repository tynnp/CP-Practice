#include <bits/stdc++.h>
using namespace std;
 
void xuatMang(double a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main() {
    int n; 
    cin >> n; 
    double a[n];
    for (double &x : a) cin >> x;
    xuatMang(a, n);
    return 0;
}