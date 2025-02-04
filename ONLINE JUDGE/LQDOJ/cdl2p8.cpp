#include <bits/stdc++.h>
using namespace std;

int main() {
    double a[3];
    for (double &x : a) cin >> x;
    sort(a, a + 3);
    cout << a[1];
    return 0;
}