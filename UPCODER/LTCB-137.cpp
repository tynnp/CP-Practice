#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; 
    cin >> n; 

    double a[n];
    for (double &x : a) cin >> x;

    int ans = -1; 
    double min = INT_MAX;
    for (int i = 0; i < n; i++)
        if (min > a[i]) min = a[i], ans = i;

    cout << ans;
    return 0;
}