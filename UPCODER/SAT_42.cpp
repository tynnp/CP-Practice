#include <bits/stdc++.h>
using namespace std;

int snt(int n) {
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) 
            return false;
    return n > 1;
}

int soLonNhat(int a[], int n) {
    int res = -99999;
    for (int i = 0; i < n; i++)
        res = max(res, a[i]);
    return res;
}

int soNTLonNhat(int a[], int n) {
    int res = -1;
    
    for (int i = 0; i < n; i++) 
        if (snt(a[i]))
            res = max(res, a[i]);
    
    return res;
}

int n, a[1000];

int main() {
    while (cin >> a[n]) n++;
    int k = soNTLonNhat(a, n);
    cout << k << ' ';
    if (k == -1) cout << soLonNhat(a, n);
    return 0;
}