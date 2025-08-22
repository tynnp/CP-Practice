#include <bits/stdc++.h>
using namespace std;

int main() {
    double a[5];

    for (double &x : a) cin >> x;
    double ans = -1;

    for (int i = 0; i < 5; i++) 
        if (a[i] > 0) ans = a[i]; 

    cout << ans;
    return 0;
}   