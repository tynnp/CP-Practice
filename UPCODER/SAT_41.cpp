#include <bits/stdc++.h>
using namespace std;

int Max(int a[], int n) {
    int res = -999999;
    for (int i = 0; i < n; i++)
        res = max(res, a[i]);
    return res;
}

int Min(int a[], int n) {
    int res = 99999;
    for (int i = 0; i < n; i++)
        res = min(res, a[i]);
    return res;
}

int n, a[1000];

int main() {
    while (cin >> a[n]) n++;
    
    int x = Max(a, n);
    int y = Min(a, n);
    
    cout << x << ' ' << y << '\n';
    
    if (x > y * 2) 
        cout << "OK";
    else if (x == y) 
        cout << "KO";
    else 
        cout << "NO";
    
    return 0;    
}