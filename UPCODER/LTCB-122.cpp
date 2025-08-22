#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; 
    cin >> n; 

    double a[n];
    for (double& x : a) cin >> x;
    double max = INT_MIN;
    for (double x : a) if (x > max) max = x;
    cout << max; 
    return 0;
}